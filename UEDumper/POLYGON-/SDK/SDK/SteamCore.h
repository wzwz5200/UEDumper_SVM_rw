
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
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Enum /Script/SteamCore.ESteamResult
/// Size: 0x01 (1 bytes)
enum class ESteamResult : uint8_t
{
	ESteamResult__None                                                               = 0,
	ESteamResult__OK                                                                 = 1,
	ESteamResult__Fail                                                               = 2,
	ESteamResult__NoConnection                                                       = 3,
	ESteamResult__sultNoConnectionRetry                                              = 4,
	ESteamResult__InvalidPassword                                                    = 5,
	ESteamResult__LoggedInElsewhere                                                  = 6,
	ESteamResult__InvalidProtocolVer                                                 = 7,
	ESteamResult__InvalidParam                                                       = 8,
	ESteamResult__FileNotFound                                                       = 9,
	ESteamResult__Busy                                                               = 10,
	ESteamResult__InvalidState                                                       = 11,
	ESteamResult__InvalidName                                                        = 12,
	ESteamResult__InvalidEmail                                                       = 13,
	ESteamResult__DuplicateName                                                      = 14,
	ESteamResult__AccessDenied                                                       = 15,
	ESteamResult__Timeout                                                            = 16,
	ESteamResult__Banned                                                             = 17,
	ESteamResult__AccountNotFound                                                    = 18,
	ESteamResult__InvalidSteamID                                                     = 19,
	ESteamResult__ServiceUnavailable                                                 = 20,
	ESteamResult__NotLoggedOn                                                        = 21,
	ESteamResult__Pending                                                            = 22,
	ESteamResult__EncryptionFailure                                                  = 23,
	ESteamResult__InsufficientPrivilege                                              = 24,
	ESteamResult__LimitExceeded                                                      = 25,
	ESteamResult__Revoked                                                            = 26,
	ESteamResult__Expired                                                            = 27,
	ESteamResult__AlreadyRedeemed                                                    = 28,
	ESteamResult__DuplicateRequest                                                   = 29,
	ESteamResult__AlreadyOwned                                                       = 30,
	ESteamResult__IPNotFound                                                         = 31,
	ESteamResult__PersistFailed                                                      = 32,
	ESteamResult__LockingFailed                                                      = 33,
	ESteamResult__LogonSessionReplaced                                               = 34,
	ESteamResult__ConnectFailed                                                      = 35,
	ESteamResult__HandshakeFailed                                                    = 36,
	ESteamResult__IOFailure                                                          = 37,
	ESteamResult__RemoteDisconnect                                                   = 38,
	ESteamResult__ShoppingCartNotFound                                               = 39,
	ESteamResult__Blocked                                                            = 40,
	ESteamResult__Ignored                                                            = 41,
	ESteamResult__NoMatch                                                            = 42,
	ESteamResult__AccountDisabled                                                    = 43,
	ESteamResult__ServiceReadOnly                                                    = 44,
	ESteamResult__AccountNotFeatured                                                 = 45,
	ESteamResult__AdministratorOK                                                    = 46,
	ESteamResult__ContentVersion                                                     = 47,
	ESteamResult__TryAnotherCM                                                       = 48,
	ESteamResult__PasswordRequiredToKickSession                                      = 49,
	ESteamResult__AlreadyLoggedInElsewhere                                           = 50,
	ESteamResult__Suspended                                                          = 51,
	ESteamResult__Cancelled                                                          = 52,
	ESteamResult__DataCorruption                                                     = 53,
	ESteamResult__DiskFull                                                           = 54,
	ESteamResult__RemoteCallFailed                                                   = 55,
	ESteamResult__PasswordUnset                                                      = 56,
	ESteamResult__ExternalAccountUnlinked                                            = 57,
	ESteamResult__PSNTicketInvalid                                                   = 58,
	ESteamResult__ExternalAccountAlreadyLinked                                       = 59,
	ESteamResult__RemoteFileConflict                                                 = 60,
	ESteamResult__IllegalPassword                                                    = 61,
	ESteamResult__SameAsPreviousValue                                                = 62,
	ESteamResult__AccountLogonDenied                                                 = 63,
	ESteamResult__CannotUseOldPassword                                               = 64,
	ESteamResult__InvalidLoginAuthCode                                               = 65,
	ESteamResult__AccountLogonDeniedNoMail                                           = 66,
	ESteamResult__HardwareNotCapableOfIPT                                            = 67,
	ESteamResult__IPTInitError                                                       = 68,
	ESteamResult__ParentalControlRestricted                                          = 69,
	ESteamResult__FacebookQueryError                                                 = 70,
	ESteamResult__ExpiredLoginAuthCode                                               = 71,
	ESteamResult__IPLoginRestrictionFailed                                           = 72,
	ESteamResult__AccountLockedDown                                                  = 73,
	ESteamResult__AccountLogonDeniedVerifiedEmailRequired                            = 74,
	ESteamResult__NoMatchingURL                                                      = 75,
	ESteamResult__BadResponse                                                        = 76,
	ESteamResult__RequirePasswordReEntry                                             = 77,
	ESteamResult__ValueOutOfRange                                                    = 78,
	ESteamResult__UnexpectedError                                                    = 79,
	ESteamResult__Disabled                                                           = 80,
	ESteamResult__InvalidCEGSubmission                                               = 81,
	ESteamResult__RestrictedDevice                                                   = 82,
	ESteamResult__RegionLocked                                                       = 83,
	ESteamResult__RateLimitExceeded                                                  = 84,
	ESteamResult__AccountLoginDeniedNeedTwoFactor                                    = 85,
	ESteamResult__ItemDeleted                                                        = 86,
	ESteamResult__AccountLoginDeniedThrottle                                         = 87,
	ESteamResult__TwoFactorCodeMismatch                                              = 88,
	ESteamResult__TwoFactorActivationCodeMismatch                                    = 89,
	ESteamResult__AccountAssociatedToMultiplePartners                                = 90,
	ESteamResult__NotModified                                                        = 91,
	ESteamResult__NoMobileDevice                                                     = 92,
	ESteamResult__TimeNotSynced                                                      = 93,
	ESteamResult__SmsCodeFailed                                                      = 94,
	ESteamResult__AccountLimitExceeded                                               = 95,
	ESteamResult__AccountActivityLimitExceeded                                       = 96,
	ESteamResult__PhoneActivityLimitExceeded                                         = 97,
	ESteamResult__RefundToWallet                                                     = 98,
	ESteamResult__EmailSendFailure                                                   = 99,
	ESteamResult__NotSettled                                                         = 100,
	ESteamResult__NeedCaptcha                                                        = 101,
	ESteamResult__GSLTDenied                                                         = 102,
	ESteamResult__GSOwnerDenied                                                      = 103,
	ESteamResult__InvalidItemType                                                    = 104,
	ESteamResult__IPBanned                                                           = 105,
	ESteamResult__GSLTExpired                                                        = 106,
	ESteamResult__InsufficientFunds                                                  = 107,
	ESteamResult__TooManyPending                                                     = 108,
	ESteamResult__NoSiteLicensesFound                                                = 109,
	ESteamResult__WGNetworkSendExceeded                                              = 110,
	ESteamResult__AccountNotFriends                                                  = 111,
	ESteamResult__LimitedUserAccount                                                 = 112,
	ESteamResult__CantRemoveItem                                                     = 113
};

/// Enum /Script/SteamCore.ESteamCheckFileSignature
/// Size: 0x01 (1 bytes)
enum class ESteamCheckFileSignature : uint8_t
{
	ESteamCheckFileSignature__InvalidSignature                                       = 0,
	ESteamCheckFileSignature__ValidSignature                                         = 1,
	ESteamCheckFileSignature__FileNotFound                                           = 2,
	ESteamCheckFileSignature__NoSignaturesFoundForThisApp                            = 3,
	ESteamCheckFileSignature__NoSignaturesFoundForThisFile                           = 4
};

/// Enum /Script/SteamCore.ESteamDenyReason
/// Size: 0x01 (1 bytes)
enum class ESteamDenyReason : uint8_t
{
	ESteamDenyReason__Invalid                                                        = 0,
	ESteamDenyReason__InvalidVersion                                                 = 1,
	ESteamDenyReason__Generic                                                        = 2,
	ESteamDenyReason__NotLoggedOn                                                    = 3,
	ESteamDenyReason__NoLicense                                                      = 4,
	ESteamDenyReason__Cheater                                                        = 5,
	ESteamDenyReason__LoggedInElseWhere                                              = 6,
	ESteamDenyReason__UnknownText                                                    = 7,
	ESteamDenyReason__IncompatibleAnticheat                                          = 8,
	ESteamDenyReason__MemoryCorruption                                               = 9,
	ESteamDenyReason__IncompatibleSoftware                                           = 10,
	ESteamDenyReason__SteamConnectionLost                                            = 11,
	ESteamDenyReason__SteamConnectionError                                           = 12,
	ESteamDenyReason__SteamResponseTimedOut                                          = 13,
	ESteamDenyReason__SteamValidationStalled                                         = 14,
	ESteamDenyReason__SteamOwnerLeftGuestUser                                        = 15
};

/// Enum /Script/SteamCore.ESteamFavoriteFlags
/// Size: 0x01 (1 bytes)
enum class ESteamFavoriteFlags : uint8_t
{
	ESteamFavoriteFlags__None                                                        = 0,
	ESteamFavoriteFlags__Favorite                                                    = 1,
	ESteamFavoriteFlags__History                                                     = 2
};

/// Enum /Script/SteamCore.ESteamAuthSessionResponse
/// Size: 0x01 (1 bytes)
enum class ESteamAuthSessionResponse : uint8_t
{
	ESteamAuthSessionResponse__OK                                                    = 0,
	ESteamAuthSessionResponse__UserNotConnectedToSteam                               = 1,
	ESteamAuthSessionResponse__NoLicenseOrExpired                                    = 2,
	ESteamAuthSessionResponse__VACBanned                                             = 3,
	ESteamAuthSessionResponse__LoggedInElseWhere                                     = 4,
	ESteamAuthSessionResponse__VACCheckTimedOut                                      = 5,
	ESteamAuthSessionResponse__AuthTicketCanceled                                    = 6,
	ESteamAuthSessionResponse__AuthTicketInvalidAlreadyUsed                          = 7,
	ESteamAuthSessionResponse__AuthTicketInvalid                                     = 8,
	ESteamAuthSessionResponse__PublisherIssuedBan                                    = 9
};

/// Enum /Script/SteamCore.ESteamFailureType
/// Size: 0x01 (1 bytes)
enum class ESteamFailureType : uint8_t
{
	ESteamFailureType__FlushedCallbackQueue                                          = 0,
	ESteamFailureType__PipeFail                                                      = 1
};

/// Enum /Script/SteamCore.ESteamChatRoomEnterResponse
/// Size: 0x01 (1 bytes)
enum class ESteamChatRoomEnterResponse : uint8_t
{
	ESteamChatRoomEnterResponse__None                                                = 0,
	ESteamChatRoomEnterResponse__Success                                             = 1,
	ESteamChatRoomEnterResponse__DoesntExist                                         = 2,
	ESteamChatRoomEnterResponse__NotAllowed                                          = 3,
	ESteamChatRoomEnterResponse__Full                                                = 4,
	ESteamChatRoomEnterResponse__Error                                               = 5,
	ESteamChatRoomEnterResponse__Banned                                              = 6,
	ESteamChatRoomEnterResponse__Limited                                             = 7,
	ESteamChatRoomEnterResponse__ClanDisabled                                        = 8,
	ESteamChatRoomEnterResponse__CommunityBan                                        = 9,
	ESteamChatRoomEnterResponse__MemberBlockedYou                                    = 10,
	ESteamChatRoomEnterResponse__YouBlockedMember                                    = 11,
	ESteamChatRoomEnterResponse__RatelimitExceeded                                   = 15
};

/// Enum /Script/SteamCore.ESteamChatEntryType
/// Size: 0x01 (1 bytes)
enum class ESteamChatEntryType : uint8_t
{
	ESteamChatEntryType__Invalid                                                     = 0,
	ESteamChatEntryType__ChatMsg                                                     = 1,
	ESteamChatEntryType__Typing                                                      = 2,
	ESteamChatEntryType__InviteGame                                                  = 3,
	ESteamChatEntryType__Emote                                                       = 4,
	ESteamChatEntryType__LeftConversation                                            = 6,
	ESteamChatEntryType__Entered                                                     = 7,
	ESteamChatEntryType__WasKicked                                                   = 8,
	ESteamChatEntryType__WasBanned                                                   = 9,
	ESteamChatEntryType__Disconnected                                                = 10,
	ESteamChatEntryType__HistoricalChat                                              = 11,
	ESteamChatEntryType__LinkBlocked                                                 = 14
};

/// Enum /Script/SteamCore.ESteamChatMemberStateChange
/// Size: 0x01 (1 bytes)
enum class ESteamChatMemberStateChange : uint8_t
{
	ESteamChatMemberStateChange__None                                                = 0,
	ESteamChatMemberStateChange__Entered                                             = 1,
	ESteamChatMemberStateChange__Left                                                = 2,
	ESteamChatMemberStateChange__Disconnected                                        = 4,
	ESteamChatMemberStateChange__Kicked                                              = 8,
	ESteamChatMemberStateChange__Banned                                              = 16
};

/// Enum /Script/SteamCore.ESteamP2PSessionError
/// Size: 0x01 (1 bytes)
enum class ESteamP2PSessionError : uint8_t
{
	ESteamP2PSessionError__None                                                      = 0,
	ESteamP2PSessionError__NotRunningApp                                             = 1,
	ESteamP2PSessionError__NoRightsToApp                                             = 2,
	ESteamP2PSessionError__DestinationNotLoggedIn                                    = 3,
	ESteamP2PSessionError__Timeout                                                   = 4,
	ESteamP2PSessionError__Max                                                       = 5
};

/// Enum /Script/SteamCore.ESteamPersonaChange
/// Size: 0x01 (1 bytes)
enum class ESteamPersonaChange : uint8_t
{
	ESteamPersonaChange__Name                                                        = 0,
	ESteamPersonaChange__Status                                                      = 1,
	ESteamPersonaChange__ComeOnline                                                  = 2,
	ESteamPersonaChange__GoneOffline                                                 = 3,
	ESteamPersonaChange__GamePlayed                                                  = 4,
	ESteamPersonaChange__GameServer                                                  = 5,
	ESteamPersonaChange__Avatar                                                      = 6,
	ESteamPersonaChange__JoinedSource                                                = 7,
	ESteamPersonaChange__LeftSource                                                  = 8,
	ESteamPersonaChange__RelationshipChanged                                         = 9,
	ESteamPersonaChange__NameFirstSet                                                = 10,
	ESteamPersonaChange__FacebookInfo                                                = 11,
	ESteamPersonaChange__Nickname                                                    = 12,
	ESteamPersonaChange__SteamLevel                                                  = 13
};

/// Enum /Script/SteamCore.ESteamMessageType
/// Size: 0x01 (1 bytes)
enum class ESteamMessageType : uint8_t
{
	ESteamMessageType__ENotification                                                 = 0,
	ESteamMessageType__EMessage                                                      = 1,
	ESteamMessageType__EWarning                                                      = 2
};

/// Enum /Script/SteamCore.ESteamPlayerAcceptState
/// Size: 0x01 (1 bytes)
enum class ESteamPlayerAcceptState : uint8_t
{
	ESteamPlayerAcceptState__Unknown                                                 = 0,
	ESteamPlayerAcceptState__PlayerAccepted                                          = 1,
	ESteamPlayerAcceptState__PlayerDeclined                                          = 2
};

/// Enum /Script/SteamCore.ESteamSubsystem
/// Size: 0x01 (1 bytes)
enum class ESteamSubsystem : uint8_t
{
	ESteamSubsystem__SteamCore                                                       = 0,
	ESteamSubsystem__AppList                                                         = 1,
	ESteamSubsystem__Apps                                                            = 2,
	ESteamSubsystem__Friends                                                         = 3,
	ESteamSubsystem__GameServer                                                      = 4,
	ESteamSubsystem__GameServerStats                                                 = 5,
	ESteamSubsystem__Inventory                                                       = 6,
	ESteamSubsystem__Input                                                           = 7,
	ESteamSubsystem__Matchmaking                                                     = 8,
	ESteamSubsystem__MatchmakingServers                                              = 9,
	ESteamSubsystem__Music                                                           = 10,
	ESteamSubsystem__Networking                                                      = 11,
	ESteamSubsystem__NetworkingUtils                                                 = 12,
	ESteamSubsystem__ParentalSettings                                                = 13,
	ESteamSubsystem__RemoteStorage                                                   = 14,
	ESteamSubsystem__RemotePlay                                                      = 15,
	ESteamSubsystem__Screenshots                                                     = 16,
	ESteamSubsystem__UGC                                                             = 17,
	ESteamSubsystem__User                                                            = 18,
	ESteamSubsystem__UserStats                                                       = 19,
	ESteamSubsystem__Utils                                                           = 20,
	ESteamSubsystem__Video                                                           = 21,
	ESteamSubsystem__SteamParties                                                    = 22,
	ESteamSubsystem__GameSearch                                                      = 23
};

/// Enum /Script/SteamCore.ESteamActivateGameOverlayToWebPageMode
/// Size: 0x01 (1 bytes)
enum class ESteamActivateGameOverlayToWebPageMode : uint8_t
{
	ESteamActivateGameOverlayToWebPageMode__Default                                  = 0,
	ESteamActivateGameOverlayToWebPageMode__Modal                                    = 1
};

/// Enum /Script/SteamCore.ESteamFriendRelationship
/// Size: 0x01 (1 bytes)
enum class ESteamFriendRelationship : uint8_t
{
	ESteamFriendRelationship__None                                                   = 0,
	ESteamFriendRelationship__Blocked                                                = 1,
	ESteamFriendRelationship__RequestRecipient                                       = 2,
	ESteamFriendRelationship__Friend                                                 = 3,
	ESteamFriendRelationship__RequestInitiator                                       = 4,
	ESteamFriendRelationship__Ignored                                                = 5,
	ESteamFriendRelationship__IgnoredFriend                                          = 6,
	ESteamFriendRelationship__Suggested_DEPRECATED                                   = 7,
	ESteamFriendRelationship__Max                                                    = 8
};

/// Enum /Script/SteamCore.ESteamPersonaState
/// Size: 0x01 (1 bytes)
enum class ESteamPersonaState : uint8_t
{
	ESteamPersonaState__Offline                                                      = 0,
	ESteamPersonaState__Online                                                       = 1,
	ESteamPersonaState__Busy                                                         = 2,
	ESteamPersonaState__Away                                                         = 3,
	ESteamPersonaState__Snooze                                                       = 4,
	ESteamPersonaState__LookingToTrade                                               = 5,
	ESteamPersonaState__LookingToPlay                                                = 6,
	ESteamPersonaState__Max                                                          = 7
};

/// Enum /Script/SteamCore.ESteamFriendFlags
/// Size: 0x01 (1 bytes)
enum class ESteamFriendFlags : uint8_t
{
	ESteamFriendFlags__None                                                          = 0,
	ESteamFriendFlags__Blocked                                                       = 1,
	ESteamFriendFlags__FriendshipRequested                                           = 2,
	ESteamFriendFlags__Immediate                                                     = 3,
	ESteamFriendFlags__ClanMember                                                    = 4,
	ESteamFriendFlags__OnGameServer                                                  = 5,
	ESteamFriendFlags__RequestingFriendship                                          = 6,
	ESteamFriendFlags__RequestingInfo                                                = 7,
	ESteamFriendFlags__Ignored                                                       = 8,
	ESteamFriendFlags__IgnoredFriend                                                 = 9,
	ESteamFriendFlags__ChatMember                                                    = 10,
	ESteamFriendFlags__All                                                           = 11
};

/// Enum /Script/SteamCore.ESteamUserRestriction
/// Size: 0x01 (1 bytes)
enum class ESteamUserRestriction : uint8_t
{
	ESteamUserRestriction__None                                                      = 0,
	ESteamUserRestriction__Unknown                                                   = 1,
	ESteamUserRestriction__AnyChat                                                   = 2,
	ESteamUserRestriction__VoiceChat                                                 = 4,
	ESteamUserRestriction__GroupChat                                                 = 8,
	ESteamUserRestriction__Rating                                                    = 16,
	ESteamUserRestriction__GameInvites                                               = 32,
	ESteamUserRestriction__Trading                                                   = 64
};

/// Enum /Script/SteamCore.ESteamOverlayToStoreFlag
/// Size: 0x01 (1 bytes)
enum class ESteamOverlayToStoreFlag : uint8_t
{
	ESteamOverlayToStoreFlag__None                                                   = 0,
	ESteamOverlayToStoreFlag__AddToCart                                              = 1,
	ESteamOverlayToStoreFlag__AddToCartAndShow                                       = 2
};

/// Enum /Script/SteamCore.ESteamGameSearchErrorCode
/// Size: 0x01 (1 bytes)
enum class ESteamGameSearchErrorCode : uint8_t
{
	ESteamGameSearchErrorCode__Invalid                                               = 0,
	ESteamGameSearchErrorCode__OK                                                    = 1,
	ESteamGameSearchErrorCode__Failed_Search_Already_In_Progress                     = 2,
	ESteamGameSearchErrorCode__Failed_No_Search_In_Progress                          = 3,
	ESteamGameSearchErrorCode__Failed_Not_Lobby_Leader                               = 4,
	ESteamGameSearchErrorCode__Failed_No_Host_Available                              = 5,
	ESteamGameSearchErrorCode__Failed_Search_Params_Invalid                          = 6,
	ESteamGameSearchErrorCode__Failed_Offline                                        = 7,
	ESteamGameSearchErrorCode__Failed_NotAuthorized                                  = 8,
	ESteamGameSearchErrorCode__Failed_Unknown_Error                                  = 9
};

/// Enum /Script/SteamCore.ESteamPlayerResult
/// Size: 0x01 (1 bytes)
enum class ESteamPlayerResult : uint8_t
{
	ESteamPlayerResult__Invalid                                                      = 0,
	ESteamPlayerResult__FailedToConnect                                              = 1,
	ESteamPlayerResult__Abandoned                                                    = 2,
	ESteamPlayerResult__Kicked                                                       = 3,
	ESteamPlayerResult__Incomplete                                                   = 4,
	ESteamPlayerResult__Completed                                                    = 5
};

/// Enum /Script/SteamCore.ESteamCoreInputSource
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputSource : uint8_t
{
	ESteamCoreInputSource__None                                                      = 0,
	ESteamCoreInputSource__LeftTrackpad                                              = 1,
	ESteamCoreInputSource__RightTrackpad                                             = 2,
	ESteamCoreInputSource__Joystick                                                  = 3,
	ESteamCoreInputSource__ABXY                                                      = 4,
	ESteamCoreInputSource__Switch                                                    = 5,
	ESteamCoreInputSource__LeftTrigger                                               = 6,
	ESteamCoreInputSource__RightTrigger                                              = 7,
	ESteamCoreInputSource__LeftBumper                                                = 8,
	ESteamCoreInputSource__RightBumper                                               = 9,
	ESteamCoreInputSource__Gyro                                                      = 10,
	ESteamCoreInputSource__CenterTrackpad                                            = 11,
	ESteamCoreInputSource__RightJoystick                                             = 12,
	ESteamCoreInputSource__DPad                                                      = 13,
	ESteamCoreInputSource__Key                                                       = 14,
	ESteamCoreInputSource__Mouse                                                     = 15,
	ESteamCoreInputSource__LeftGyro                                                  = 16,
	ESteamCoreInputSource__Count                                                     = 17
};

/// Enum /Script/SteamCore.ESteamCoreInputSourceMode
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputSourceMode : uint8_t
{
	ESteamCoreInputSourceMode__None                                                  = 0,
	ESteamCoreInputSourceMode__Dpad                                                  = 1,
	ESteamCoreInputSourceMode__Buttons                                               = 2,
	ESteamCoreInputSourceMode__FourButtons                                           = 3,
	ESteamCoreInputSourceMode__AbsoluteMouse                                         = 4,
	ESteamCoreInputSourceMode__RelativeMouse                                         = 5,
	ESteamCoreInputSourceMode__JoystickMove                                          = 6,
	ESteamCoreInputSourceMode__JoystickMouse                                         = 7,
	ESteamCoreInputSourceMode__JoystickCamera                                        = 8,
	ESteamCoreInputSourceMode__ScrollWheel                                           = 9,
	ESteamCoreInputSourceMode__Trigger                                               = 10,
	ESteamCoreInputSourceMode__TouchMenu                                             = 11,
	ESteamCoreInputSourceMode__MouseJoystick                                         = 12,
	ESteamCoreInputSourceMode__MouseRegion                                           = 13,
	ESteamCoreInputSourceMode__RadialMenu                                            = 14,
	ESteamCoreInputSourceMode__SingleButton                                          = 15,
	ESteamCoreInputSourceMode__Switches                                              = 16
};

/// Enum /Script/SteamCore.ESteamCoreInputActionOrigin
/// Size: 0x02 (2 bytes)
enum class ESteamCoreInputActionOrigin : uint16_t
{
	InputActionOrigin_None                                                           = 0,
	InputActionOrigin_SteamController_A                                              = 1,
	InputActionOrigin_SteamController_B                                              = 2,
	InputActionOrigin_SteamController_X                                              = 3,
	InputActionOrigin_SteamController_Y                                              = 4,
	InputActionOrigin_SteamController_LeftBumper                                     = 5,
	InputActionOrigin_SteamController_RightBumper                                    = 6,
	InputActionOrigin_SteamController_LeftGrip                                       = 7,
	InputActionOrigin_SteamController_RightGrip                                      = 8,
	InputActionOrigin_SteamController_Start                                          = 9,
	InputActionOrigin_SteamController_Back                                           = 10,
	InputActionOrigin_SteamController_LeftPad_Touch                                  = 11,
	InputActionOrigin_SteamController_LeftPad_Swipe                                  = 12,
	InputActionOrigin_SteamController_LeftPad_Click                                  = 13,
	InputActionOrigin_SteamController_LeftPad_DPadNorth                              = 14,
	InputActionOrigin_SteamController_LeftPad_DPadSouth                              = 15,
	InputActionOrigin_SteamController_LeftPad_DPadWest                               = 16,
	InputActionOrigin_SteamController_LeftPad_DPadEast                               = 17,
	InputActionOrigin_SteamController_RightPad_Touch                                 = 18,
	InputActionOrigin_SteamController_RightPad_Swipe                                 = 19,
	InputActionOrigin_SteamController_RightPad_Click                                 = 20,
	InputActionOrigin_SteamController_RightPad_DPadNorth                             = 21,
	InputActionOrigin_SteamController_RightPad_DPadSouth                             = 22,
	InputActionOrigin_SteamController_RightPad_DPadWest                              = 23,
	InputActionOrigin_SteamController_RightPad_DPadEast                              = 24,
	InputActionOrigin_SteamController_LeftTrigger_Pull                               = 25,
	InputActionOrigin_SteamController_LeftTrigger_Click                              = 26,
	InputActionOrigin_SteamController_RightTrigger_Pull                              = 27,
	InputActionOrigin_SteamController_RightTrigger_Click                             = 28,
	InputActionOrigin_SteamController_LeftStick_Move                                 = 29,
	InputActionOrigin_SteamController_LeftStick_Click                                = 30,
	InputActionOrigin_SteamController_LeftStick_DPadNorth                            = 31,
	InputActionOrigin_SteamController_LeftStick_DPadSouth                            = 32,
	InputActionOrigin_SteamController_LeftStick_DPadWest                             = 33,
	InputActionOrigin_SteamController_LeftStick_DPadEast                             = 34,
	InputActionOrigin_SteamController_Gyro_Move                                      = 35,
	InputActionOrigin_SteamController_Gyro_Pitch                                     = 36,
	InputActionOrigin_SteamController_Gyro_Yaw                                       = 37,
	InputActionOrigin_SteamController_Gyro_Roll                                      = 38,
	InputActionOrigin_SteamController_Reserved0                                      = 39,
	InputActionOrigin_SteamController_Reserved1                                      = 40,
	InputActionOrigin_SteamController_Reserved2                                      = 41,
	InputActionOrigin_SteamController_Reserved3                                      = 42,
	InputActionOrigin_SteamController_Reserved4                                      = 43,
	InputActionOrigin_SteamController_Reserved5                                      = 44,
	InputActionOrigin_SteamController_Reserved6                                      = 45,
	InputActionOrigin_SteamController_Reserved7                                      = 46,
	InputActionOrigin_SteamController_Reserved8                                      = 47,
	InputActionOrigin_SteamController_Reserved9                                      = 48,
	InputActionOrigin_SteamController_Reserved10                                     = 49,
	InputActionOrigin_PS4_X                                                          = 50,
	InputActionOrigin_PS4_Circle                                                     = 51,
	InputActionOrigin_PS4_Triangle                                                   = 52,
	InputActionOrigin_PS4_Square                                                     = 53,
	InputActionOrigin_PS4_LeftBumper                                                 = 54,
	InputActionOrigin_PS4_RightBumper                                                = 55,
	InputActionOrigin_PS4_Options                                                    = 56,
	InputActionOrigin_PS4_Share                                                      = 57,
	InputActionOrigin_PS4_LeftPad_Touch                                              = 58,
	InputActionOrigin_PS4_LeftPad_Swipe                                              = 59,
	InputActionOrigin_PS4_LeftPad_Click                                              = 60,
	InputActionOrigin_PS4_LeftPad_DPadNorth                                          = 61,
	InputActionOrigin_PS4_LeftPad_DPadSouth                                          = 62,
	InputActionOrigin_PS4_LeftPad_DPadWest                                           = 63,
	InputActionOrigin_PS4_LeftPad_DPadEast                                           = 64,
	InputActionOrigin_PS4_RightPad_Touch                                             = 65,
	InputActionOrigin_PS4_RightPad_Swipe                                             = 66,
	InputActionOrigin_PS4_RightPad_Click                                             = 67,
	InputActionOrigin_PS4_RightPad_DPadNorth                                         = 68,
	InputActionOrigin_PS4_RightPad_DPadSouth                                         = 69,
	InputActionOrigin_PS4_RightPad_DPadWest                                          = 70,
	InputActionOrigin_PS4_RightPad_DPadEast                                          = 71,
	InputActionOrigin_PS4_CenterPad_Touch                                            = 72,
	InputActionOrigin_PS4_CenterPad_Swipe                                            = 73,
	InputActionOrigin_PS4_CenterPad_Click                                            = 74,
	InputActionOrigin_PS4_CenterPad_DPadNorth                                        = 75,
	InputActionOrigin_PS4_CenterPad_DPadSouth                                        = 76,
	InputActionOrigin_PS4_CenterPad_DPadWest                                         = 77,
	InputActionOrigin_PS4_CenterPad_DPadEast                                         = 78,
	InputActionOrigin_PS4_LeftTrigger_Pull                                           = 79,
	InputActionOrigin_PS4_LeftTrigger_Click                                          = 80,
	InputActionOrigin_PS4_RightTrigger_Pull                                          = 81,
	InputActionOrigin_PS4_RightTrigger_Click                                         = 82,
	InputActionOrigin_PS4_LeftStick_Move                                             = 83,
	InputActionOrigin_PS4_LeftStick_Click                                            = 84,
	InputActionOrigin_PS4_LeftStick_DPadNorth                                        = 85,
	InputActionOrigin_PS4_LeftStick_DPadSouth                                        = 86,
	InputActionOrigin_PS4_LeftStick_DPadWest                                         = 87,
	InputActionOrigin_PS4_LeftStick_DPadEast                                         = 88,
	InputActionOrigin_PS4_RightStick_Move                                            = 89,
	InputActionOrigin_PS4_RightStick_Click                                           = 90,
	InputActionOrigin_PS4_RightStick_DPadNorth                                       = 91,
	InputActionOrigin_PS4_RightStick_DPadSouth                                       = 92,
	InputActionOrigin_PS4_RightStick_DPadWest                                        = 93,
	InputActionOrigin_PS4_RightStick_DPadEast                                        = 94,
	InputActionOrigin_PS4_DPad_North                                                 = 95,
	InputActionOrigin_PS4_DPad_South                                                 = 96,
	InputActionOrigin_PS4_DPad_West                                                  = 97,
	InputActionOrigin_PS4_DPad_East                                                  = 98,
	InputActionOrigin_PS4_Gyro_Move                                                  = 99,
	InputActionOrigin_PS4_Gyro_Pitch                                                 = 100,
	InputActionOrigin_PS4_Gyro_Yaw                                                   = 101,
	InputActionOrigin_PS4_Gyro_Roll                                                  = 102,
	InputActionOrigin_PS4_DPad_Move                                                  = 103,
	InputActionOrigin_PS4_Reserved1                                                  = 104,
	InputActionOrigin_PS4_Reserved2                                                  = 105,
	InputActionOrigin_PS4_Reserved3                                                  = 106,
	InputActionOrigin_PS4_Reserved4                                                  = 107,
	InputActionOrigin_PS4_Reserved5                                                  = 108,
	InputActionOrigin_PS4_Reserved6                                                  = 109,
	InputActionOrigin_PS4_Reserved7                                                  = 110,
	InputActionOrigin_PS4_Reserved8                                                  = 111,
	InputActionOrigin_PS4_Reserved9                                                  = 112,
	InputActionOrigin_PS4_Reserved10                                                 = 113,
	InputActionOrigin_XBoxOne_A                                                      = 114,
	InputActionOrigin_XBoxOne_B                                                      = 115,
	InputActionOrigin_XBoxOne_X                                                      = 116,
	InputActionOrigin_XBoxOne_Y                                                      = 117,
	InputActionOrigin_XBoxOne_LeftBumper                                             = 118,
	InputActionOrigin_XBoxOne_RightBumper                                            = 119,
	InputActionOrigin_XBoxOne_Menu                                                   = 120,
	InputActionOrigin_XBoxOne_View                                                   = 121,
	InputActionOrigin_XBoxOne_LeftTrigger_Pull                                       = 122,
	InputActionOrigin_XBoxOne_LeftTrigger_Click                                      = 123,
	InputActionOrigin_XBoxOne_RightTrigger_Pull                                      = 124,
	InputActionOrigin_XBoxOne_RightTrigger_Click                                     = 125,
	InputActionOrigin_XBoxOne_LeftStick_Move                                         = 126,
	InputActionOrigin_XBoxOne_LeftStick_Click                                        = 127,
	InputActionOrigin_XBoxOne_LeftStick_DPadNorth                                    = 128,
	InputActionOrigin_XBoxOne_LeftStick_DPadSouth                                    = 129,
	InputActionOrigin_XBoxOne_LeftStick_DPadWest                                     = 130,
	InputActionOrigin_XBoxOne_LeftStick_DPadEast                                     = 131,
	InputActionOrigin_XBoxOne_RightStick_Move                                        = 132,
	InputActionOrigin_XBoxOne_RightStick_Click                                       = 133,
	InputActionOrigin_XBoxOne_RightStick_DPadNorth                                   = 134,
	InputActionOrigin_XBoxOne_RightStick_DPadSouth                                   = 135,
	InputActionOrigin_XBoxOne_RightStick_DPadWest                                    = 136,
	InputActionOrigin_XBoxOne_RightStick_DPadEast                                    = 137,
	InputActionOrigin_XBoxOne_DPad_North                                             = 138,
	InputActionOrigin_XBoxOne_DPad_South                                             = 139,
	InputActionOrigin_XBoxOne_DPad_West                                              = 140,
	InputActionOrigin_XBoxOne_DPad_East                                              = 141,
	InputActionOrigin_XBoxOne_DPad_Move                                              = 142,
	InputActionOrigin_XBoxOne_LeftGrip_Lower                                         = 143,
	InputActionOrigin_XBoxOne_LeftGrip_Upper                                         = 144,
	InputActionOrigin_XBoxOne_RightGrip_Lower                                        = 145,
	InputActionOrigin_XBoxOne_RightGrip_Upper                                        = 146,
	InputActionOrigin_XBoxOne_Share                                                  = 147,
	InputActionOrigin_XBoxOne_Reserved6                                              = 148,
	InputActionOrigin_XBoxOne_Reserved7                                              = 149,
	InputActionOrigin_XBoxOne_Reserved8                                              = 150,
	InputActionOrigin_XBoxOne_Reserved9                                              = 151,
	InputActionOrigin_XBoxOne_Reserved10                                             = 152,
	InputActionOrigin_XBox360_A                                                      = 153,
	InputActionOrigin_XBox360_B                                                      = 154,
	InputActionOrigin_XBox360_X                                                      = 155,
	InputActionOrigin_XBox360_Y                                                      = 156,
	InputActionOrigin_XBox360_LeftBumper                                             = 157,
	InputActionOrigin_XBox360_RightBumper                                            = 158,
	InputActionOrigin_XBox360_Start                                                  = 159,
	InputActionOrigin_XBox360_Back                                                   = 160,
	InputActionOrigin_XBox360_LeftTrigger_Pull                                       = 161,
	InputActionOrigin_XBox360_LeftTrigger_Click                                      = 162,
	InputActionOrigin_XBox360_RightTrigger_Pull                                      = 163,
	InputActionOrigin_XBox360_RightTrigger_Click                                     = 164,
	InputActionOrigin_XBox360_LeftStick_Move                                         = 165,
	InputActionOrigin_XBox360_LeftStick_Click                                        = 166,
	InputActionOrigin_XBox360_LeftStick_DPadNorth                                    = 167,
	InputActionOrigin_XBox360_LeftStick_DPadSouth                                    = 168,
	InputActionOrigin_XBox360_LeftStick_DPadWest                                     = 169,
	InputActionOrigin_XBox360_LeftStick_DPadEast                                     = 170,
	InputActionOrigin_XBox360_RightStick_Move                                        = 171,
	InputActionOrigin_XBox360_RightStick_Click                                       = 172,
	InputActionOrigin_XBox360_RightStick_DPadNorth                                   = 173,
	InputActionOrigin_XBox360_RightStick_DPadSouth                                   = 174,
	InputActionOrigin_XBox360_RightStick_DPadWest                                    = 175,
	InputActionOrigin_XBox360_RightStick_DPadEast                                    = 176,
	InputActionOrigin_XBox360_DPad_North                                             = 177,
	InputActionOrigin_XBox360_DPad_South                                             = 178,
	InputActionOrigin_XBox360_DPad_West                                              = 179,
	InputActionOrigin_XBox360_DPad_East                                              = 180,
	InputActionOrigin_XBox360_DPad_Move                                              = 181,
	InputActionOrigin_XBox360_Reserved1                                              = 182,
	InputActionOrigin_XBox360_Reserved2                                              = 183,
	InputActionOrigin_XBox360_Reserved3                                              = 184,
	InputActionOrigin_XBox360_Reserved4                                              = 185,
	InputActionOrigin_XBox360_Reserved5                                              = 186,
	InputActionOrigin_XBox360_Reserved6                                              = 187,
	InputActionOrigin_XBox360_Reserved7                                              = 188,
	InputActionOrigin_XBox360_Reserved8                                              = 189,
	InputActionOrigin_XBox360_Reserved9                                              = 190,
	InputActionOrigin_XBox360_Reserved10                                             = 191,
	InputActionOrigin_Switch_A                                                       = 192,
	InputActionOrigin_Switch_B                                                       = 193,
	InputActionOrigin_Switch_X                                                       = 194,
	InputActionOrigin_Switch_Y                                                       = 195,
	InputActionOrigin_Switch_LeftBumper                                              = 196,
	InputActionOrigin_Switch_RightBumper                                             = 197,
	InputActionOrigin_Switch_Plus                                                    = 198,
	InputActionOrigin_Switch_Minus                                                   = 199,
	InputActionOrigin_Switch_Capture                                                 = 200,
	InputActionOrigin_Switch_LeftTrigger_Pull                                        = 201,
	InputActionOrigin_Switch_LeftTrigger_Click                                       = 202,
	InputActionOrigin_Switch_RightTrigger_Pull                                       = 203,
	InputActionOrigin_Switch_RightTrigger_Click                                      = 204,
	InputActionOrigin_Switch_LeftStick_Move                                          = 205,
	InputActionOrigin_Switch_LeftStick_Click                                         = 206,
	InputActionOrigin_Switch_LeftStick_DPadNorth                                     = 207,
	InputActionOrigin_Switch_LeftStick_DPadSouth                                     = 208,
	InputActionOrigin_Switch_LeftStick_DPadWest                                      = 209,
	InputActionOrigin_Switch_LeftStick_DPadEast                                      = 210,
	InputActionOrigin_Switch_RightStick_Move                                         = 211,
	InputActionOrigin_Switch_RightStick_Click                                        = 212,
	InputActionOrigin_Switch_RightStick_DPadNorth                                    = 213,
	InputActionOrigin_Switch_RightStick_DPadSouth                                    = 214,
	InputActionOrigin_Switch_RightStick_DPadWest                                     = 215,
	InputActionOrigin_Switch_RightStick_DPadEast                                     = 216,
	InputActionOrigin_Switch_DPad_North                                              = 217,
	InputActionOrigin_Switch_DPad_South                                              = 218,
	InputActionOrigin_Switch_DPad_West                                               = 219,
	InputActionOrigin_Switch_DPad_East                                               = 220,
	InputActionOrigin_Switch_ProGyro_Move                                            = 221,
	InputActionOrigin_Switch_ProGyro_Pitch                                           = 222,
	InputActionOrigin_Switch_ProGyro_Yaw                                             = 223,
	InputActionOrigin_Switch_ProGyro_Roll                                            = 224,
	InputActionOrigin_Switch_DPad_Move                                               = 225,
	InputActionOrigin_Switch_Reserved1                                               = 226,
	InputActionOrigin_Switch_Reserved2                                               = 227,
	InputActionOrigin_Switch_Reserved3                                               = 228,
	InputActionOrigin_Switch_Reserved4                                               = 229,
	InputActionOrigin_Switch_Reserved5                                               = 230,
	InputActionOrigin_Switch_Reserved6                                               = 231,
	InputActionOrigin_Switch_Reserved7                                               = 232,
	InputActionOrigin_Switch_Reserved8                                               = 233,
	InputActionOrigin_Switch_Reserved9                                               = 234,
	InputActionOrigin_Switch_Reserved10                                              = 235,
	InputActionOrigin_Switch_RightGyro_Move                                          = 236,
	InputActionOrigin_Switch_RightGyro_Pitch                                         = 237,
	InputActionOrigin_Switch_RightGyro_Yaw                                           = 238,
	InputActionOrigin_Switch_RightGyro_Roll                                          = 239,
	InputActionOrigin_Switch_LeftGyro_Move                                           = 240,
	InputActionOrigin_Switch_LeftGyro_Pitch                                          = 241,
	InputActionOrigin_Switch_LeftGyro_Yaw                                            = 242,
	InputActionOrigin_Switch_LeftGyro_Roll                                           = 243,
	InputActionOrigin_Switch_LeftGrip_Lower                                          = 244,
	InputActionOrigin_Switch_LeftGrip_Upper                                          = 245,
	InputActionOrigin_Switch_RightGrip_Lower                                         = 246,
	InputActionOrigin_Switch_RightGrip_Upper                                         = 247,
	InputActionOrigin_Switch_Reserved11                                              = 248,
	InputActionOrigin_Switch_Reserved12                                              = 249,
	InputActionOrigin_Switch_Reserved13                                              = 250,
	InputActionOrigin_Switch_Reserved14                                              = 251,
	InputActionOrigin_Switch_Reserved15                                              = 252,
	InputActionOrigin_Switch_Reserved16                                              = 253,
	InputActionOrigin_Switch_Reserved17                                              = 254,
	InputActionOrigin_Switch_Reserved18                                              = 255,
	InputActionOrigin_Switch_Reserved19                                              = 256,
	InputActionOrigin_Switch_Reserved20                                              = 257,
	InputActionOrigin_PS5_X                                                          = 258,
	InputActionOrigin_PS5_Circle                                                     = 259,
	InputActionOrigin_PS5_Triangle                                                   = 260,
	InputActionOrigin_PS5_Square                                                     = 261,
	InputActionOrigin_PS5_LeftBumper                                                 = 262,
	InputActionOrigin_PS5_RightBumper                                                = 263,
	InputActionOrigin_PS5_Option                                                     = 264,
	InputActionOrigin_PS5_Create                                                     = 265,
	InputActionOrigin_PS5_Mute                                                       = 266,
	InputActionOrigin_PS5_LeftPad_Touch                                              = 267,
	InputActionOrigin_PS5_LeftPad_Swipe                                              = 268,
	InputActionOrigin_PS5_LeftPad_Click                                              = 269,
	InputActionOrigin_PS5_LeftPad_DPadNorth                                          = 270,
	InputActionOrigin_PS5_LeftPad_DPadSouth                                          = 271,
	InputActionOrigin_PS5_LeftPad_DPadWest                                           = 272,
	InputActionOrigin_PS5_LeftPad_DPadEast                                           = 273,
	InputActionOrigin_PS5_RightPad_Touch                                             = 274,
	InputActionOrigin_PS5_RightPad_Swipe                                             = 275,
	InputActionOrigin_PS5_RightPad_Click                                             = 276,
	InputActionOrigin_PS5_RightPad_DPadNorth                                         = 277,
	InputActionOrigin_PS5_RightPad_DPadSouth                                         = 278,
	InputActionOrigin_PS5_RightPad_DPadWest                                          = 279,
	InputActionOrigin_PS5_RightPad_DPadEast                                          = 280,
	InputActionOrigin_PS5_CenterPad_Touch                                            = 281,
	InputActionOrigin_PS5_CenterPad_Swipe                                            = 282,
	InputActionOrigin_PS5_CenterPad_Click                                            = 283,
	InputActionOrigin_PS5_CenterPad_DPadNorth                                        = 284,
	InputActionOrigin_PS5_CenterPad_DPadSouth                                        = 285,
	InputActionOrigin_PS5_CenterPad_DPadWest                                         = 286,
	InputActionOrigin_PS5_CenterPad_DPadEast                                         = 287,
	InputActionOrigin_PS5_LeftTrigger_Pull                                           = 288,
	InputActionOrigin_PS5_LeftTrigger_Click                                          = 289,
	InputActionOrigin_PS5_RightTrigger_Pull                                          = 290,
	InputActionOrigin_PS5_RightTrigger_Click                                         = 291,
	InputActionOrigin_PS5_LeftStick_Move                                             = 292,
	InputActionOrigin_PS5_LeftStick_Click                                            = 293,
	InputActionOrigin_PS5_LeftStick_DPadNorth                                        = 294,
	InputActionOrigin_PS5_LeftStick_DPadSouth                                        = 295,
	InputActionOrigin_PS5_LeftStick_DPadWest                                         = 296,
	InputActionOrigin_PS5_LeftStick_DPadEast                                         = 297,
	InputActionOrigin_PS5_RightStick_Move                                            = 298,
	InputActionOrigin_PS5_RightStick_Click                                           = 299,
	InputActionOrigin_PS5_RightStick_DPadNorth                                       = 300,
	InputActionOrigin_PS5_RightStick_DPadSouth                                       = 301,
	InputActionOrigin_PS5_RightStick_DPadWest                                        = 302,
	InputActionOrigin_PS5_RightStick_DPadEast                                        = 303,
	InputActionOrigin_PS5_DPad_North                                                 = 304,
	InputActionOrigin_PS5_DPad_South                                                 = 305,
	InputActionOrigin_PS5_DPad_West                                                  = 306,
	InputActionOrigin_PS5_DPad_East                                                  = 307,
	InputActionOrigin_PS5_Gyro_Move                                                  = 308,
	InputActionOrigin_PS5_Gyro_Pitch                                                 = 309,
	InputActionOrigin_PS5_Gyro_Yaw                                                   = 310,
	InputActionOrigin_PS5_Gyro_Roll                                                  = 311,
	InputActionOrigin_PS5_DPad_Move                                                  = 312,
	InputActionOrigin_PS5_Reserved1                                                  = 313,
	InputActionOrigin_PS5_Reserved2                                                  = 314,
	InputActionOrigin_PS5_Reserved3                                                  = 315,
	InputActionOrigin_PS5_Reserved4                                                  = 316,
	InputActionOrigin_PS5_Reserved5                                                  = 317,
	InputActionOrigin_PS5_Reserved6                                                  = 318,
	InputActionOrigin_PS5_Reserved7                                                  = 319,
	InputActionOrigin_PS5_Reserved8                                                  = 320,
	InputActionOrigin_PS5_Reserved9                                                  = 321,
	InputActionOrigin_PS5_Reserved10                                                 = 322,
	InputActionOrigin_PS5_Reserved11                                                 = 323,
	InputActionOrigin_PS5_Reserved12                                                 = 324,
	InputActionOrigin_PS5_Reserved13                                                 = 325,
	InputActionOrigin_PS5_Reserved14                                                 = 326,
	InputActionOrigin_PS5_Reserved15                                                 = 327,
	InputActionOrigin_PS5_Reserved16                                                 = 328,
	InputActionOrigin_PS5_Reserved17                                                 = 329,
	InputActionOrigin_PS5_Reserved18                                                 = 330,
	InputActionOrigin_PS5_Reserved19                                                 = 331,
	InputActionOrigin_PS5_Reserved20                                                 = 332,
	InputActionOrigin_SteamDeck_A                                                    = 333,
	InputActionOrigin_SteamDeck_B                                                    = 334,
	InputActionOrigin_SteamDeck_X                                                    = 335,
	InputActionOrigin_SteamDeck_Y                                                    = 336,
	InputActionOrigin_SteamDeck_L1                                                   = 337,
	InputActionOrigin_SteamDeck_R1                                                   = 338,
	InputActionOrigin_SteamDeck_Menu                                                 = 339,
	InputActionOrigin_SteamDeck_View                                                 = 340,
	InputActionOrigin_SteamDeck_LeftPad_Touch                                        = 341,
	InputActionOrigin_SteamDeck_LeftPad_Swipe                                        = 342,
	InputActionOrigin_SteamDeck_LeftPad_Click                                        = 343,
	InputActionOrigin_SteamDeck_LeftPad_DPadNorth                                    = 344,
	InputActionOrigin_SteamDeck_LeftPad_DPadSouth                                    = 345,
	InputActionOrigin_SteamDeck_LeftPad_DPadWest                                     = 346,
	InputActionOrigin_SteamDeck_LeftPad_DPadEast                                     = 347,
	InputActionOrigin_SteamDeck_RightPad_Touch                                       = 348,
	InputActionOrigin_SteamDeck_RightPad_Swipe                                       = 349,
	InputActionOrigin_SteamDeck_RightPad_Click                                       = 350,
	InputActionOrigin_SteamDeck_RightPad_DPadNorth                                   = 351,
	InputActionOrigin_SteamDeck_RightPad_DPadSouth                                   = 352,
	InputActionOrigin_SteamDeck_RightPad_DPadWest                                    = 353,
	InputActionOrigin_SteamDeck_RightPad_DPadEast                                    = 354,
	InputActionOrigin_SteamDeck_L2_SoftPull                                          = 355,
	InputActionOrigin_SteamDeck_L2                                                   = 356,
	InputActionOrigin_SteamDeck_R2_SoftPull                                          = 357,
	InputActionOrigin_SteamDeck_R2                                                   = 358,
	InputActionOrigin_SteamDeck_LeftStick_Move                                       = 359,
	InputActionOrigin_SteamDeck_L3                                                   = 360,
	InputActionOrigin_SteamDeck_LeftStick_DPadNorth                                  = 361,
	InputActionOrigin_SteamDeck_LeftStick_DPadSouth                                  = 362,
	InputActionOrigin_SteamDeck_LeftStick_DPadWest                                   = 363,
	InputActionOrigin_SteamDeck_LeftStick_DPadEast                                   = 364,
	InputActionOrigin_SteamDeck_LeftStick_Touch                                      = 365,
	InputActionOrigin_SteamDeck_RightStick_Move                                      = 366,
	InputActionOrigin_SteamDeck_R3                                                   = 367,
	InputActionOrigin_SteamDeck_RightStick_DPadNorth                                 = 368,
	InputActionOrigin_SteamDeck_RightStick_DPadSouth                                 = 369,
	InputActionOrigin_SteamDeck_RightStick_DPadWest                                  = 370,
	InputActionOrigin_SteamDeck_RightStick_DPadEast                                  = 371,
	InputActionOrigin_SteamDeck_RightStick_Touch                                     = 372,
	InputActionOrigin_SteamDeck_L4                                                   = 373,
	InputActionOrigin_SteamDeck_R4                                                   = 374,
	InputActionOrigin_SteamDeck_L5                                                   = 375,
	InputActionOrigin_SteamDeck_R5                                                   = 376,
	InputActionOrigin_SteamDeck_DPad_Move                                            = 377,
	InputActionOrigin_SteamDeck_DPad_North                                           = 378,
	InputActionOrigin_SteamDeck_DPad_South                                           = 379,
	InputActionOrigin_SteamDeck_DPad_West                                            = 380,
	InputActionOrigin_SteamDeck_DPad_East                                            = 381,
	InputActionOrigin_SteamDeck_Gyro_Move                                            = 382,
	InputActionOrigin_SteamDeck_Gyro_Pitch                                           = 383,
	InputActionOrigin_SteamDeck_Gyro_Yaw                                             = 384,
	InputActionOrigin_SteamDeck_Gyro_Roll                                            = 385,
	InputActionOrigin_SteamDeck_Reserved1                                            = 386,
	InputActionOrigin_SteamDeck_Reserved2                                            = 387,
	InputActionOrigin_SteamDeck_Reserved3                                            = 388,
	InputActionOrigin_SteamDeck_Reserved4                                            = 389,
	InputActionOrigin_SteamDeck_Reserved5                                            = 390,
	InputActionOrigin_SteamDeck_Reserved6                                            = 391,
	InputActionOrigin_SteamDeck_Reserved7                                            = 392,
	InputActionOrigin_SteamDeck_Reserved8                                            = 393,
	InputActionOrigin_SteamDeck_Reserved9                                            = 394,
	InputActionOrigin_SteamDeck_Reserved10                                           = 395,
	InputActionOrigin_SteamDeck_Reserved11                                           = 396,
	InputActionOrigin_SteamDeck_Reserved12                                           = 397,
	InputActionOrigin_SteamDeck_Reserved13                                           = 398,
	InputActionOrigin_SteamDeck_Reserved14                                           = 399,
	InputActionOrigin_SteamDeck_Reserved15                                           = 400,
	InputActionOrigin_SteamDeck_Reserved16                                           = 401,
	InputActionOrigin_SteamDeck_Reserved17                                           = 402,
	InputActionOrigin_SteamDeck_Reserved18                                           = 403,
	InputActionOrigin_SteamDeck_Reserved19                                           = 404,
	InputActionOrigin_SteamDeck_Reserved20                                           = 405,
	InputActionOrigin_Count                                                          = 406,
	InputActionOrigin_MaximumPossibleValue                                           = 32767
};

/// Enum /Script/SteamCore.ESteamCoreXboxOrigin
/// Size: 0x01 (1 bytes)
enum class ESteamCoreXboxOrigin : uint8_t
{
	ESteamCoreXboxOrigin__A                                                          = 0,
	ESteamCoreXboxOrigin__B                                                          = 1,
	ESteamCoreXboxOrigin__X                                                          = 2,
	ESteamCoreXboxOrigin__Y                                                          = 3,
	ESteamCoreXboxOrigin__LeftBumper                                                 = 4,
	ESteamCoreXboxOrigin__RightBumper                                                = 5,
	ESteamCoreXboxOrigin__Menu                                                       = 6,
	ESteamCoreXboxOrigin__View                                                       = 7,
	ESteamCoreXboxOrigin__LeftTrigger_Pull                                           = 8,
	ESteamCoreXboxOrigin__LeftTrigger_Click                                          = 9,
	ESteamCoreXboxOrigin__RightTrigger_Pull                                          = 10,
	ESteamCoreXboxOrigin__RightTrigger_Click                                         = 11,
	ESteamCoreXboxOrigin__LeftStick_Move                                             = 12,
	ESteamCoreXboxOrigin__LeftStick_Click                                            = 13,
	ESteamCoreXboxOrigin__LeftStick_DPadNorth                                        = 14,
	ESteamCoreXboxOrigin__LeftStick_DPadSouth                                        = 15,
	ESteamCoreXboxOrigin__LeftStick_DPadWest                                         = 16,
	ESteamCoreXboxOrigin__LeftStick_DPadEast                                         = 17,
	ESteamCoreXboxOrigin__RightStick_Move                                            = 18,
	ESteamCoreXboxOrigin__RightStick_Click                                           = 19,
	ESteamCoreXboxOrigin__RightStick_DPadNorth                                       = 20,
	ESteamCoreXboxOrigin__RightStick_DPadSouth                                       = 21,
	ESteamCoreXboxOrigin__RightStick_DPadWest                                        = 22,
	ESteamCoreXboxOrigin__RightStick_DPadEast                                        = 23,
	ESteamCoreXboxOrigin__DPad_North                                                 = 24,
	ESteamCoreXboxOrigin__DPad_South                                                 = 25,
	ESteamCoreXboxOrigin__DPad_West                                                  = 26,
	ESteamCoreXboxOrigin__DPad_East                                                  = 27,
	ESteamCoreXboxOrigin__Count                                                      = 28
};

/// Enum /Script/SteamCore.ESteamCoreControllerPad
/// Size: 0x01 (1 bytes)
enum class ESteamCoreControllerPad : uint8_t
{
	ESteamCoreControllerPad__Left                                                    = 0,
	ESteamCoreControllerPad__Right                                                   = 1
};

/// Enum /Script/SteamCore.ESteamCoreInputType
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputType : uint8_t
{
	ESteamCoreInputType__k_ESteamInputType_Unknown                                   = 0,
	ESteamCoreInputType__k_ESteamInputType_SteamController                           = 1,
	ESteamCoreInputType__k_ESteamInputType_XBox360Controller                         = 2,
	ESteamCoreInputType__k_ESteamInputType_XBoxOneController                         = 3,
	ESteamCoreInputType__k_ESteamInputType_GenericGamepad                            = 4,
	ESteamCoreInputType__k_ESteamInputType_PS4Controller                             = 5,
	ESteamCoreInputType__k_ESteamInputType_AppleMFiController                        = 6,
	ESteamCoreInputType__k_ESteamInputType_AndroidController                         = 7,
	ESteamCoreInputType__k_ESteamInputType_SwitchJoyConPair                          = 8,
	ESteamCoreInputType__k_ESteamInputType_SwitchJoyConSingle                        = 9,
	ESteamCoreInputType__k_ESteamInputType_SwitchProController                       = 10,
	ESteamCoreInputType__k_ESteamInputType_MobileTouch                               = 11,
	ESteamCoreInputType__k_ESteamInputType_PS3Controller                             = 12,
	ESteamCoreInputType__k_ESteamInputType_PS5Controller                             = 13,
	ESteamCoreInputType__k_ESteamInputType_SteamDeckController                       = 14,
	ESteamCoreInputType__k_ESteamInputType_Count                                     = 15,
	ESteamCoreInputType__k_ESteamInputType_MaximumPossibleValue                      = 255
};

/// Enum /Script/SteamCore.ESteamCoreInputLEDFlag
/// Size: 0x01 (1 bytes)
enum class ESteamCoreInputLEDFlag : uint8_t
{
	ESteamCoreInputLEDFlag__SetColor                                                 = 0,
	ESteamCoreInputLEDFlag__RestoreUserDefault                                       = 1
};

/// Enum /Script/SteamCore.ESteamCoreItemFlags
/// Size: 0x01 (1 bytes)
enum class ESteamCoreItemFlags : uint8_t
{
	ENoTrade                                                                         = 0,
	ERemoved                                                                         = 8,
	EConsumed                                                                        = 9
};

/// Enum /Script/SteamCore.ESteamSessionFindType
/// Size: 0x01 (1 bytes)
enum class ESteamSessionFindType : uint8_t
{
	ESteamSessionFindType__Listen                                                    = 0,
	ESteamSessionFindType__Dedicated                                                 = 1
};

/// Enum /Script/SteamCore.ESteamLobbyType
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyType : uint8_t
{
	ESteamLobbyType__Private                                                         = 0,
	ESteamLobbyType__FriendsOnly                                                     = 1,
	ESteamLobbyType__Public                                                          = 2,
	ESteamLobbyType__Invisible                                                       = 3
};

/// Enum /Script/SteamCore.ESteamLobbyComparison
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyComparison : uint8_t
{
	ESteamLobbyComparison__EqualToOrLessThan                                         = 0,
	ESteamLobbyComparison__LessThan                                                  = 1,
	ESteamLobbyComparison__Equal                                                     = 2,
	ESteamLobbyComparison__GreaterThan                                               = 3,
	ESteamLobbyComparison__EqualToOrGreaterThan                                      = 4,
	ESteamLobbyComparison__NotEqual                                                  = 5
};

/// Enum /Script/SteamCore.ESteamLobbyDistanceFilter
/// Size: 0x01 (1 bytes)
enum class ESteamLobbyDistanceFilter : uint8_t
{
	ESteamLobbyDistanceFilter__Close                                                 = 0,
	ESteamLobbyDistanceFilter__Default                                               = 1,
	ESteamLobbyDistanceFilter__Far                                                   = 2,
	ESteamLobbyDistanceFilter__Worldwide                                             = 3
};

/// Enum /Script/SteamCore.ESteamAudioPlaybackStatus
/// Size: 0x01 (1 bytes)
enum class ESteamAudioPlaybackStatus : uint8_t
{
	ESteamAudioPlaybackStatus__Undefined                                             = 0,
	ESteamAudioPlaybackStatus__Playing                                               = 1,
	ESteamAudioPlaybackStatus__Paused                                                = 2,
	ESteamAudioPlaybackStatus__Idle                                                  = 3
};

/// Enum /Script/SteamCore.ESteamP2PSend
/// Size: 0x01 (1 bytes)
enum class ESteamP2PSend : uint8_t
{
	ESteamP2PSend__Unreliable                                                        = 0,
	ESteamP2PSend__UnreliableNoDelay                                                 = 1,
	ESteamP2PSend__Reliable                                                          = 2,
	ESteamP2PSend__ReliableWithBuffering                                             = 3
};

/// Enum /Script/SteamCore.ESteamParentalFeature
/// Size: 0x01 (1 bytes)
enum class ESteamParentalFeature : uint8_t
{
	ESteamParentalFeature__Invalid                                                   = 0,
	ESteamParentalFeature__Store                                                     = 1,
	ESteamParentalFeature__Community                                                 = 2,
	ESteamParentalFeature__Profile                                                   = 3,
	ESteamParentalFeature__Friends                                                   = 4,
	ESteamParentalFeature__News                                                      = 5,
	ESteamParentalFeature__Trading                                                   = 6,
	ESteamParentalFeature__Settings                                                  = 7,
	ESteamParentalFeature__Console                                                   = 8,
	ESteamParentalFeature__Browser                                                   = 9,
	ESteamParentalFeature__ParentalSetup                                             = 10,
	ESteamParentalFeature__Library                                                   = 11,
	ESteamParentalFeature__Test                                                      = 12,
	ESteamParentalFeature__Max                                                       = 13
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationType
/// Size: 0x01 (1 bytes)
enum class ESteamPartiesBeaconLocationType : uint8_t
{
	ESteamPartiesBeaconLocationType__Invalid                                         = 0,
	ESteamPartiesBeaconLocationType__ChatGroup                                       = 1,
	ESteamPartiesBeaconLocationType__Max                                             = 2
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationData
/// Size: 0x01 (1 bytes)
enum class ESteamPartiesBeaconLocationData : uint8_t
{
	ESteamPartiesBeaconLocationData__Invalid                                         = 0,
	ESteamPartiesBeaconLocationData__Name                                            = 1,
	ESteamPartiesBeaconLocationData__IconURLSmall                                    = 2,
	ESteamPartiesBeaconLocationData__IconURLMedium                                   = 3,
	ESteamPartiesBeaconLocationData__IconURLLarge                                    = 4
};

/// Enum /Script/SteamCore.ESteamCoreDeviceFormFactor
/// Size: 0x01 (1 bytes)
enum class ESteamCoreDeviceFormFactor : uint8_t
{
	ESteamCoreDeviceFormFactor__Unknown                                              = 0,
	ESteamCoreDeviceFormFactor__Phone                                                = 1,
	ESteamCoreDeviceFormFactor__Tablet                                               = 2,
	ESteamCoreDeviceFormFactor__Computer                                             = 3,
	ESteamCoreDeviceFormFactor__TV                                                   = 4
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePlatform
/// Size: 0x01 (1 bytes)
enum class ESteamRemoteStoragePlatform : uint8_t
{
	ESteamRemoteStoragePlatform__None                                                = 0,
	ESteamRemoteStoragePlatform__Windows                                             = 1,
	ESteamRemoteStoragePlatform__OSX                                                 = 2,
	ESteamRemoteStoragePlatform__PS3                                                 = 4,
	ESteamRemoteStoragePlatform__Linux                                               = 8,
	ESteamRemoteStoragePlatform__Reserved2                                           = 16,
	ESteamRemoteStoragePlatform__All                                                 = 254
};

/// Enum /Script/SteamCore.ESteamUGCReadAction
/// Size: 0x01 (1 bytes)
enum class ESteamUGCReadAction : uint8_t
{
	ESteamUGCReadAction__k_EUGCRead_ContinueReadingUntilFinished                     = 0,
	ESteamUGCReadAction__k_EUGCRead_ContinueReading                                  = 1,
	ESteamUGCReadAction__k_EUGCRead_Close                                            = 2
};

/// Enum /Script/SteamCore.ESteamVRScreenshotType
/// Size: 0x01 (1 bytes)
enum class ESteamVRScreenshotType : uint8_t
{
	ESteamVRScreenshotType__None                                                     = 0,
	ESteamVRScreenshotType__Mono                                                     = 1,
	ESteamVRScreenshotType__Stereo                                                   = 2,
	ESteamVRScreenshotType__MonoCubemap                                              = 3,
	ESteamVRScreenshotType__MonoPanorama                                             = 4,
	ESteamVRScreenshotType__StereoPanorama                                           = 5
};

/// Enum /Script/SteamCore.ESteamAttributeType
/// Size: 0x01 (1 bytes)
enum class ESteamAttributeType : uint8_t
{
	ESteamAttributeType__NOT_SET                                                     = 0,
	ESteamAttributeType__INTEGER                                                     = 1,
	ESteamAttributeType__BOOL                                                        = 2,
	ESteamAttributeType__STRING                                                      = 3
};

/// Enum /Script/SteamCore.ESteamComparisonOp
/// Size: 0x01 (1 bytes)
enum class ESteamComparisonOp : uint8_t
{
	ESteamComparisonOp__Equals                                                       = 0,
	ESteamComparisonOp__NotEquals                                                    = 1,
	ESteamComparisonOp__GreaterThan                                                  = 2,
	ESteamComparisonOp__GreaterThanEquals                                            = 3,
	ESteamComparisonOp__LessThan                                                     = 4,
	ESteamComparisonOp__LessThanEquals                                               = 5,
	ESteamComparisonOp__Near                                                         = 6,
	ESteamComparisonOp__In                                                           = 7,
	ESteamComparisonOp__NotIn                                                        = 8
};

/// Enum /Script/SteamCore.EOnlineComparison
/// Size: 0x01 (1 bytes)
enum class EOnlineComparison : uint8_t
{
	EOnlineComparison__Equals                                                        = 0,
	EOnlineComparison__NotEquals                                                     = 1,
	EOnlineComparison__GreaterThan                                                   = 2,
	EOnlineComparison__GreaterThanEquals                                             = 3,
	EOnlineComparison__LessThan                                                      = 4,
	EOnlineComparison__LessThanEquals                                                = 5
};

/// Enum /Script/SteamCore.ESteamUserHasLicenseForAppResult
/// Size: 0x01 (1 bytes)
enum class ESteamUserHasLicenseForAppResult : uint8_t
{
	ESteamUserHasLicenseForAppResult__HasLicense                                     = 0,
	ESteamUserHasLicenseForAppResult__DoesNotHaveLicense                             = 1,
	ESteamUserHasLicenseForAppResult__NoAuth                                         = 2
};

/// Enum /Script/SteamCore.ESteamBeginAuthSessionResult
/// Size: 0x01 (1 bytes)
enum class ESteamBeginAuthSessionResult : uint8_t
{
	ESteamBeginAuthSessionResult__OK                                                 = 0,
	ESteamBeginAuthSessionResult__InvalidTicket                                      = 1,
	ESteamBeginAuthSessionResult__DuplicateRequest                                   = 2,
	ESteamBeginAuthSessionResult__InvalidVersion                                     = 3,
	ESteamBeginAuthSessionResult__GameMismatch                                       = 4,
	ESteamBeginAuthSessionResult__ExpiredTicket                                      = 5
};

/// Enum /Script/SteamCore.ESteamAccountType
/// Size: 0x01 (1 bytes)
enum class ESteamAccountType : uint8_t
{
	ESteamAccountType__Invalid                                                       = 0,
	ESteamAccountType__Individual                                                    = 1,
	ESteamAccountType__Multiseat                                                     = 2,
	ESteamAccountType__GameServer                                                    = 3,
	ESteamAccountType__AnonGameServer                                                = 4,
	ESteamAccountType__Pending                                                       = 5,
	ESteamAccountType__ContentServer                                                 = 6,
	ESteamAccountType__Clan                                                          = 7,
	ESteamAccountType__Chat                                                          = 8,
	ESteamAccountType__ConsoleUser                                                   = 9,
	ESteamAccountType__AnonUser                                                      = 10,
	ESteamAccountType__Max                                                           = 11
};

/// Enum /Script/SteamCore.ESteamUGCMatchingUGCType
/// Size: 0x01 (1 bytes)
enum class ESteamUGCMatchingUGCType : uint8_t
{
	ESteamUGCMatchingUGCType__Items                                                  = 0,
	ESteamUGCMatchingUGCType__Items_Mtx                                              = 1,
	ESteamUGCMatchingUGCType__Items_ReadyToUse                                       = 2,
	ESteamUGCMatchingUGCType__Collections                                            = 3,
	ESteamUGCMatchingUGCType__Artwork                                                = 4,
	ESteamUGCMatchingUGCType__Videos                                                 = 5,
	ESteamUGCMatchingUGCType__Screenshots                                            = 6,
	ESteamUGCMatchingUGCType__AllGuides                                              = 7,
	ESteamUGCMatchingUGCType__WebGuides                                              = 8,
	ESteamUGCMatchingUGCType__IntegratedGuides                                       = 9,
	ESteamUGCMatchingUGCType__UsableInGame                                           = 10,
	ESteamUGCMatchingUGCType__ControllerBindings                                     = 11,
	ESteamUGCMatchingUGCType__GameManagedItems                                       = 12,
	ESteamUGCMatchingUGCType__All                                                    = 13
};

/// Enum /Script/SteamCore.ESteamUserUGCList
/// Size: 0x01 (1 bytes)
enum class ESteamUserUGCList : uint8_t
{
	ESteamUserUGCList__Published                                                     = 0,
	ESteamUserUGCList__VotedOn                                                       = 1,
	ESteamUserUGCList__VotedUp                                                       = 2,
	ESteamUserUGCList__VotedDown                                                     = 3,
	ESteamUserUGCList__WillVoteLater                                                 = 4,
	ESteamUserUGCList__Favorited                                                     = 5,
	ESteamUserUGCList__Subscribed                                                    = 6,
	ESteamUserUGCList__UsedOrPlayed                                                  = 7,
	ESteamUserUGCList__Followed                                                      = 8
};

/// Enum /Script/SteamCore.ESteamUserUGCListSortOrder
/// Size: 0x01 (1 bytes)
enum class ESteamUserUGCListSortOrder : uint8_t
{
	ESteamUserUGCListSortOrder__CreationOrderDesc                                    = 0,
	ESteamUserUGCListSortOrder__CreationOrderAsc                                     = 1,
	ESteamUserUGCListSortOrder__TitleAsc                                             = 2,
	ESteamUserUGCListSortOrder__LastUpdatedDesc                                      = 3,
	ESteamUserUGCListSortOrder__SubscriptionDateDesc                                 = 4,
	ESteamUserUGCListSortOrder__VoteScoreDesc                                        = 5,
	ESteamUserUGCListSortOrder__ForModeration                                        = 6
};

/// Enum /Script/SteamCore.ESteamUGCQuery
/// Size: 0x01 (1 bytes)
enum class ESteamUGCQuery : uint8_t
{
	ESteamUGCQuery__RankedByVote                                                     = 0,
	ESteamUGCQuery__RankedByPublicationDate                                          = 1,
	ESteamUGCQuery__AcceptedForGameRankedByAcceptanceDate                            = 2,
	ESteamUGCQuery__RankedByTrend                                                    = 3,
	ESteamUGCQuery__FavoritedByFriendsRankedByPublicationDate                        = 4,
	ESteamUGCQuery__CreatedByFriendsRankedByPublicationDate                          = 5,
	ESteamUGCQuery__RankedByNumTimesReported                                         = 6,
	ESteamUGCQuery__CreatedByFollowedUsersRankedByPublicationDate                    = 7,
	ESteamUGCQuery__NotYetRated                                                      = 8,
	ESteamUGCQuery__RankedByTotalVotesAsc                                            = 9,
	ESteamUGCQuery__RankedByVotesUp                                                  = 10,
	ESteamUGCQuery__RankedByTextSearch                                               = 11,
	ESteamUGCQuery__RankedByTotalUniqueSubscriptions                                 = 12,
	ESteamUGCQuery__RankedByPlaytimeTrend                                            = 13,
	ESteamUGCQuery__RankedByTotalPlaytime                                            = 14,
	ESteamUGCQuery__RankedByAveragePlaytimeTrend                                     = 15,
	ESteamUGCQuery__RankedByLifetimeAveragePlaytime                                  = 16,
	ESteamUGCQuery__RankedByPlaytimeSessionsTrend                                    = 17,
	ESteamUGCQuery__RankedByLifetimePlaytimeSessions                                 = 18
};

/// Enum /Script/SteamCore.ESteamItemUpdateStatus
/// Size: 0x01 (1 bytes)
enum class ESteamItemUpdateStatus : uint8_t
{
	ESteamItemUpdateStatus__Invalid                                                  = 0,
	ESteamItemUpdateStatus__PreparingConfig                                          = 1,
	ESteamItemUpdateStatus__PreparingContent                                         = 2,
	ESteamItemUpdateStatus__UploadingContent                                         = 3,
	ESteamItemUpdateStatus__UploadingPreviewFile                                     = 4,
	ESteamItemUpdateStatus__CommittingChanges                                        = 5
};

/// Enum /Script/SteamCore.ESteamItemState
/// Size: 0x01 (1 bytes)
enum class ESteamItemState : uint8_t
{
	ESteamItemState__None                                                            = 0,
	ESteamItemState__Subscribed                                                      = 1,
	ESteamItemState__LegacyItem                                                      = 2,
	ESteamItemState__Installed                                                       = 4,
	ESteamItemState__NeedsUpdate                                                     = 8,
	ESteamItemState__Downloading                                                     = 16,
	ESteamItemState__DownloadPending                                                 = 32
};

/// Enum /Script/SteamCore.ESteamItemStatistic
/// Size: 0x01 (1 bytes)
enum class ESteamItemStatistic : uint8_t
{
	ESteamItemStatistic__NumSubscriptions                                            = 0,
	ESteamItemStatistic__NumFavorites                                                = 1,
	ESteamItemStatistic__NumFollowers                                                = 2,
	ESteamItemStatistic__NumUniqueSubscriptions                                      = 3,
	ESteamItemStatistic__NumUniqueFavorites                                          = 4,
	ESteamItemStatistic__NumUniqueFollowers                                          = 5,
	ESteamItemStatistic__NumUniqueWebsiteViews                                       = 6,
	ESteamItemStatistic__ReportScore                                                 = 7,
	ESteamItemStatistic__NumSecondsPlayed                                            = 8,
	ESteamItemStatistic__NumPlaytimeSessions                                         = 9,
	ESteamItemStatistic__NumComments                                                 = 10,
	ESteamItemStatistic__NumSecondsPlayedDuringTimePeriod                            = 11,
	ESteamItemStatistic__NumPlaytimeSessionsDuringTimePeriod                         = 12
};

/// Enum /Script/SteamCore.ESteamItemPreviewType
/// Size: 0x01 (1 bytes)
enum class ESteamItemPreviewType : uint8_t
{
	ESteamItemPreviewType__Image                                                     = 0,
	ESteamItemPreviewType__YouTubeVideo                                              = 1,
	ESteamItemPreviewType__Sketchfab                                                 = 2,
	ESteamItemPreviewType__EnvironmentMap_HorizontalCross                            = 3,
	ESteamItemPreviewType__EnvironmentMap_LatLong                                    = 4,
	ESteamItemPreviewType__ReservedMax                                               = 254
};

/// Enum /Script/SteamCore.ESteamWorkshopFileType
/// Size: 0x01 (1 bytes)
enum class ESteamWorkshopFileType : uint8_t
{
	ESteamWorkshopFileType__First                                                    = 0,
	ESteamWorkshopFileType__Community                                                = 0,
	ESteamWorkshopFileType__Microtransaction                                         = 1,
	ESteamWorkshopFileType__Collection                                               = 2,
	ESteamWorkshopFileType__Art                                                      = 3,
	ESteamWorkshopFileType__Video                                                    = 4,
	ESteamWorkshopFileType__Screenshot                                               = 5,
	ESteamWorkshopFileType__Game                                                     = 6,
	ESteamWorkshopFileType__Software                                                 = 7,
	ESteamWorkshopFileType__Concept                                                  = 8,
	ESteamWorkshopFileType__WebGuide                                                 = 9,
	ESteamWorkshopFileType__IntegratedGuide                                          = 10,
	ESteamWorkshopFileType__Merch                                                    = 11,
	ESteamWorkshopFileType__ControllerBinding                                        = 12,
	ESteamWorkshopFileType__SteamworksAccessInvite                                   = 13,
	ESteamWorkshopFileType__SteamVideo                                               = 14,
	ESteamWorkshopFileType__GameManagedItem                                          = 15,
	ESteamWorkshopFileType__Max                                                      = 16
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePublishedFileVisibility
/// Size: 0x01 (1 bytes)
enum class ESteamRemoteStoragePublishedFileVisibility : uint8_t
{
	ESteamRemoteStoragePublishedFileVisibility__Public                               = 0,
	ESteamRemoteStoragePublishedFileVisibility__FriendsOnly                          = 1,
	ESteamRemoteStoragePublishedFileVisibility__Private                              = 2
};

/// Enum /Script/SteamCore.ESteamLeaderboardDataRequest
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardDataRequest : uint8_t
{
	ESteamLeaderboardDataRequest__Global                                             = 0,
	ESteamLeaderboardDataRequest__GlobalAroundUser                                   = 1,
	ESteamLeaderboardDataRequest__Friends                                            = 2,
	ESteamLeaderboardDataRequest__Users                                              = 3
};

/// Enum /Script/SteamCore.ESteamLeaderboardSortMethod
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardSortMethod : uint8_t
{
	ESteamLeaderboardSortMethod__None                                                = 0,
	ESteamLeaderboardSortMethod__Ascending                                           = 1,
	ESteamLeaderboardSortMethod__Descending                                          = 2
};

/// Enum /Script/SteamCore.ESteamLeaderboardDisplayType
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardDisplayType : uint8_t
{
	ESteamLeaderboardDisplayType__None                                               = 0,
	ESteamLeaderboardDisplayType__Numeric                                            = 1,
	ESteamLeaderboardDisplayType__TimeSeconds                                        = 2,
	ESteamLeaderboardDisplayType__TimeMilliSeconds                                   = 3
};

/// Enum /Script/SteamCore.ESteamLeaderboardUploadScoreMethod
/// Size: 0x01 (1 bytes)
enum class ESteamLeaderboardUploadScoreMethod : uint8_t
{
	ESteamLeaderboardUploadScoreMethod__None                                         = 0,
	ESteamLeaderboardUploadScoreMethod__KeepBest                                     = 1,
	ESteamLeaderboardUploadScoreMethod__ForceUpdate                                  = 2
};

/// Enum /Script/SteamCore.ESteamVoiceResult
/// Size: 0x01 (1 bytes)
enum class ESteamVoiceResult : uint8_t
{
	ESteamVoiceResult__OK                                                            = 0,
	ESteamVoiceResult__NotInitialized                                                = 1,
	ESteamVoiceResult__NotRecording                                                  = 2,
	ESteamVoiceResult__NoData                                                        = 3,
	ESteamVoiceResult__BufferTooSmall                                                = 4,
	ESteamVoiceResult__DataCorrupted                                                 = 5,
	ESteamVoiceResult__Restricted                                                    = 6,
	ESteamVoiceResult__UnsupportedCodec                                              = 7,
	ESteamVoiceResult__ReceiverOutOfDate                                             = 8,
	ESteamVoiceResult__ReceiverDidNotAnswer                                          = 9
};

/// Enum /Script/SteamCore.ESteamCoreValid
/// Size: 0x01 (1 bytes)
enum class ESteamCoreValid : uint8_t
{
	ESteamCoreValid__Valid                                                           = 0,
	ESteamCoreValid__NotValid                                                        = 1
};

/// Enum /Script/SteamCore.ESteamCoreIdentical
/// Size: 0x01 (1 bytes)
enum class ESteamCoreIdentical : uint8_t
{
	ESteamCoreIdentical__Identical                                                   = 0,
	ESteamCoreIdentical__NotIdentical                                                = 1
};

/// Enum /Script/SteamCore.ESteamTextFilteringContext
/// Size: 0x01 (1 bytes)
enum class ESteamTextFilteringContext : uint8_t
{
	ESteamTextFilteringContext__k_ETextFilteringContextUnknown                       = 0,
	ESteamTextFilteringContext__k_ETextFilteringContextGameContent                   = 1,
	ESteamTextFilteringContext__k_ETextFilteringContextChat                          = 2,
	ESteamTextFilteringContext__k_ETextFilteringContextName                          = 3
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputLineMode
/// Size: 0x01 (1 bytes)
enum class ESteamGamepadTextInputLineMode : uint8_t
{
	ESteamGamepadTextInputLineMode__SingleLine                                       = 0,
	ESteamGamepadTextInputLineMode__MultipleLines                                    = 1
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputMode
/// Size: 0x01 (1 bytes)
enum class ESteamGamepadTextInputMode : uint8_t
{
	ESteamGamepadTextInputMode__Normal                                               = 0,
	ESteamGamepadTextInputMode__Password                                             = 1
};

/// Enum /Script/SteamCore.ESteamNotificationPosition
/// Size: 0x01 (1 bytes)
enum class ESteamNotificationPosition : uint8_t
{
	ESteamNotificationPosition__TopLeft                                              = 0,
	ESteamNotificationPosition__TopRight                                             = 1,
	ESteamNotificationPosition__BottomLeft                                           = 2,
	ESteamNotificationPosition__BottomRight                                          = 3
};

/// Enum /Script/SteamCore.ESteamUniverse
/// Size: 0x01 (1 bytes)
enum class ESteamUniverse : uint8_t
{
	ESteamUniverse__Invalid                                                          = 0,
	ESteamUniverse__Public                                                           = 1,
	ESteamUniverse__Beta                                                             = 2,
	ESteamUniverse__Internal                                                         = 3,
	ESteamUniverse__Dev                                                              = 4,
	ESteamUniverse__Max                                                              = 5
};

/// Enum /Script/SteamCore.ESteamBroadcastUploadResult
/// Size: 0x01 (1 bytes)
enum class ESteamBroadcastUploadResult : uint8_t
{
	ESteamBroadcastUploadResult__None                                                = 0,
	ESteamBroadcastUploadResult__OK                                                  = 1,
	ESteamBroadcastUploadResult__InitFailed                                          = 2,
	ESteamBroadcastUploadResult__FrameFailed                                         = 3,
	ESteamBroadcastUploadResult__Timeout                                             = 4,
	ESteamBroadcastUploadResult__BandwidthExceeded                                   = 5,
	ESteamBroadcastUploadResult__LowFPS                                              = 6,
	ESteamBroadcastUploadResult__MissingKeyFrames                                    = 7,
	ESteamBroadcastUploadResult__NoConnection                                        = 8,
	ESteamBroadcastUploadResult__RelayFailed                                         = 9,
	ESteamBroadcastUploadResult__SettingsChanged                                     = 10,
	ESteamBroadcastUploadResult__MissingAudio                                        = 11,
	ESteamBroadcastUploadResult__TooFarBehind                                        = 12,
	ESteamBroadcastUploadResult__TranscodeBehind                                     = 13
};

/// Class /Script/SteamCore.SteamCoreSubsystem
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class USteamCoreSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/SteamCore.AppList
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAppList : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,935) /* FMulticastInlineDelegate */ __um(SteamAppInstalled);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,936) /* FMulticastInlineDelegate */ __um(SteamAppUninstalled);                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.AppList.GetNumInstalledApps
	// int32_t GetNumInstalledApps();                                                                                           // [0x1300400] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetInstalledApps
	// int32_t GetInstalledApps(TArray<int32_t>& AppIDs, int32_t MaxAppIDs);                                                    // [0x12ffed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppName
	// int32_t GetAppName(int32_t AppID, FString& Name);                                                                        // [0x12fd9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Directory);                                                             // [0x12fd800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppBuildId
	// int32_t GetAppBuildId(int32_t AppID);                                                                                    // [0x12fd730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Apps
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UApps : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,937) /* FMulticastInlineDelegate */ __um(DLCInstalled);                                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,938) /* FMulticastInlineDelegate */ __um(FileDetailsResultDelegate);                          // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Apps.UninstallDLC
	// void UninstallDLC(int32_t AppID);                                                                                        // [0x1301d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.MarkContentCorrupt
	// bool MarkContentCorrupt(bool bMissingFilesOnly);                                                                         // [0x1301210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.InstallDLC
	// void InstallDLC(int32_t AppID);                                                                                          // [0x1300a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetLaunchQueryParam
	// FString GetLaunchQueryParam(FString Key);                                                                                // [0x1300240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetLaunchCommandLine
	// int32_t GetLaunchCommandLine(FString& CommandLine);                                                                      // [0x1300190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetInstalledDepots
	// int32_t GetInstalledDepots(int32_t AppID, int32_t MaxDepots, TArray<int32_t>& Depots);                                   // [0x12fffd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetFileDetails
	// void GetFileDetails(FDelegateProperty& Callback, FString Filename);                                                      // [0x12fe8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetEarliestPurchaseUnixTime
	// int32_t GetEarliestPurchaseUnixTime(int32_t AppID);                                                                      // [0x12fe830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetDlcDownloadProgress
	// bool GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal);                               // [0x12fe700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetDLCCount
	// int32_t GetDLCCount();                                                                                                   // [0x12fe6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetCurrentGameLanguage
	// FString GetCurrentGameLanguage();                                                                                        // [0x12fe650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetCurrentBetaName
	// bool GetCurrentBetaName(FString& Name);                                                                                  // [0x12fe5a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAvailableGameLanguages
	// FString GetAvailableGameLanguages();                                                                                     // [0x12fdb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppOwner
	// FSteamID GetAppOwner();                                                                                                  // [0x12fdaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Folder);                                                                // [0x12fd900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppBuildId
	// int32_t GetAppBuildId();                                                                                                 // [0x12fd7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsVACBanned
	// bool BIsVACBanned();                                                                                                     // [0x12fd3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsTimedTrial
	// bool BIsTimedTrial(int32_t& SecondsAllowed, int32_t& SecondsPlayed);                                                     // [0x12fd300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFreeWeekend
	// bool BIsSubscribedFromFreeWeekend();                                                                                     // [0x12fd2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFamilySharing
	// bool BIsSubscribedFromFamilySharing();                                                                                   // [0x12fd2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedApp
	// bool BIsSubscribedApp(int32_t AppID);                                                                                    // [0x12fd210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribed
	// bool BIsSubscribed();                                                                                                    // [0x12fd1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsLowViolence
	// bool BIsLowViolence();                                                                                                   // [0x12fd1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsDlcInstalled
	// bool BIsDlcInstalled(int32_t AppID);                                                                                     // [0x12fd120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsCybercafe
	// bool BIsCybercafe();                                                                                                     // [0x12fd0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsAppInstalled
	// bool BIsAppInstalled(int32_t AppID);                                                                                     // [0x12fd060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BGetDLCDataByIndex
	// bool BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, FString& Name);                                   // [0x12fced0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreAsyncAction
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	TWeakObjectPtr<class UObject*>                     m_WorldContextObject;                                       // 0x0030   (0x0008)  
};

/// Class /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,939) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
	// void HandleCallback(FFileDetailsResult& Data, bool bWasSuccessful);                                                      // [0x1300830] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
	// class USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(class UObject* WorldContextObject, FString Filename, float Timeout); // [0x12fea20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreGameMode
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class ASteamCoreGameMode : public AGameMode
{ 
public:
};

/// Class /Script/SteamCore.SteamCore
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamCore : public UObject
{ 
public:
};

/// Class /Script/SteamCore.SteamCoreSettings
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class USteamCoreSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bRelaunchInSteam;                                           // 0x0039   (0x0001)  
	bool                                               bVACEnabled;                                                // 0x003A   (0x0001)  
	bool                                               bAllowP2PPacketRelay;                                       // 0x003B   (0x0001)  
	int32_t                                            P2PConnectionTimeout;                                       // 0x003C   (0x0004)  
	int32_t                                            SteamAppId;                                                 // 0x0040   (0x0004)  
	int32_t                                            SteamDevAppId;                                              // 0x0044   (0x0004)  
	int32_t                                            Port;                                                       // 0x0048   (0x0004)  
	int32_t                                            GameServerQueryPort;                                        // 0x004C   (0x0004)  
	FString                                            GameVersion;                                                // 0x0050   (0x0010)  
};

/// Class /Script/SteamCore.Friends
/// Size: 0x0338 (824 bytes) (0x000068 - 0x000338) align 8 MaxSize: 0x0338
class UFriends : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,940) /* FMulticastInlineDelegate */ __um(AvatarImageLoaded);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,941) /* FMulticastInlineDelegate */ __um(FriendRichPresenceUpdate);                           // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,942) /* FMulticastInlineDelegate */ __um(GameConnectedChatJoin);                              // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,943) /* FMulticastInlineDelegate */ __um(GameConnectedChatLeave);                             // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,944) /* FMulticastInlineDelegate */ __um(GameConnectedClanChatMsg);                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,945) /* FMulticastInlineDelegate */ __um(GameConnectedFriendChatMsg);                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,946) /* FMulticastInlineDelegate */ __um(GameLobbyJoinRequested);                             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,947) /* FMulticastInlineDelegate */ __um(GameOverlayActivated);                               // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,948) /* FMulticastInlineDelegate */ __um(GameRichPresenceJoinRequested);                      // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,949) /* FMulticastInlineDelegate */ __um(GameServerChangeRequested);                          // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,950) /* FMulticastInlineDelegate */ __um(PersonaStateChange);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,951) /* FMulticastInlineDelegate */ __um(SetPersonaNameResponse);                             // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,952) /* FMulticastInlineDelegate */ __um(JoinClanChatRoomCompletionResult);                   // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,953) /* FMulticastInlineDelegate */ __um(ClanOfficerListResponse);                            // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,954) /* FMulticastInlineDelegate */ __um(DownloadClanActivityCountsResult);                   // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1E0];                                     // 0x0158   (0x01E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Friends.SetRichPresence
	// bool SetRichPresence(FString Key, FString Value);                                                                        // [0x1301c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetPlayedWith
	// void SetPlayedWith(FSteamID SteamIDUserPlayedWith);                                                                      // [0x1301b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetPersonaName
	// void SetPersonaName(FDelegateProperty& Callback, FString Name);                                                          // [0x1301a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetListenForFriendsMessages
	// bool SetListenForFriendsMessages(bool bInterceptEnabled);                                                                // [0x1301990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetInGameVoiceSpeaking
	// void SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking);                                                       // [0x13018d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SendClanChatMessage
	// bool SendClanChatMessage(FSteamID SteamIDClanChat, FString Text);                                                        // [0x13017a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestUserInformation
	// bool RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly);                                                // [0x13016d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestFriendRichPresence
	// void RequestFriendRichPresence(FSteamID SteamIDFriend);                                                                  // [0x1301650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestClanOfficerList
	// void RequestClanOfficerList(FDelegateProperty& Callback, FSteamID SteamIDClan);                                          // [0x1301550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ReplyToFriendMessage
	// bool ReplyToFriendMessage(FSteamID SteamIDFriend, FString MsgToSend);                                                    // [0x1301420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RegisterProtocolInOverlayBrowser
	// bool RegisterProtocolInOverlayBrowser(FString protocol);                                                                 // [0x1301330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.OpenClanChatWindowInSteam
	// bool OpenClanChatWindowInSteam(FSteamID SteamIDClanChat);                                                                // [0x13012a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.LeaveClanChatRoom
	// bool LeaveClanChatRoom(FSteamID SteamIDClan);                                                                            // [0x1301180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.JoinClanChatRoom
	// void JoinClanChatRoom(FDelegateProperty& Callback, FSteamID SteamIDClan);                                                // [0x1301080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsUserInSource
	// bool IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource);                                                       // [0x1300fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsFollowing
	// void IsFollowing(FDelegateProperty& Callback, FSteamID SteamID);                                                         // [0x1300eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanPublic
	// bool IsClanPublic(FSteamID SteamIDClan);                                                                                 // [0x1300e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanOfficialGameGroup
	// bool IsClanOfficialGameGroup(FSteamID SteamIDClan);                                                                      // [0x1300d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanChatWindowOpenInSteam
	// bool IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat);                                                              // [0x1300d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanChatAdmin
	// bool IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser);                                                    // [0x1300c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.InviteUserToGame
	// bool InviteUserToGame(FSteamID SteamIDFriend, FString ConnectString);                                                    // [0x1300b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.HasFriend
	// bool HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags);                                                 // [0x1300950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetUserRestrictions
	// TArray<ESteamUserRestriction> GetUserRestrictions();                                                                     // [0x13007b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetSmallFriendAvatar
	// class UTexture2D* GetSmallFriendAvatar(FSteamID SteamIDFriend);                                                          // [0x1300720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPlayerNickname_Pure
	// FString GetPlayerNickname_Pure(FSteamID SteamIDPlayer);                                                                  // [0x1300640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPlayerNickname
	// FString GetPlayerNickname(FSteamID SteamIDPlayer);                                                                       // [0x1300570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPersonaState_Pure
	// ESteamPersonaState GetPersonaState_Pure();                                                                               // [0x1300540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPersonaState
	// ESteamPersonaState GetPersonaState();                                                                                    // [0x1300540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPersonaName_Pure
	// FString GetPersonaName_Pure();                                                                                           // [0x13004b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPersonaName
	// FString GetPersonaName();                                                                                                // [0x1300430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetMediumFriendAvatar
	// class UTexture2D* GetMediumFriendAvatar(FSteamID SteamIDFriend);                                                         // [0x1300370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetLargeFriendAvatar
	// class UTexture2D* GetLargeFriendAvatar(FSteamID SteamIDFriend);                                                          // [0x1300100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendSteamLevel
	// int32_t GetFriendSteamLevel(FSteamID SteamIDFriend);                                                                     // [0x12ffaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupName
	// FString GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID);                                                        // [0x12ffe00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersList
	// void GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32_t MembersCount); // [0x12ffcd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersCount
	// int32_t GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID);                                                // [0x12ffc40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupIDByIndex
	// FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);                                                      // [0x12ffbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupCount
	// int32_t GetFriendsGroupCount();                                                                                          // [0x12ffb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyCount
	// int32_t GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend);                                                           // [0x12ffa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyByIndex
	// FString GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32_t Key);                                            // [0x12ff950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresence
	// FString GetFriendRichPresence(FSteamID SteamIDFriend, FString Key);                                                      // [0x12ff7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRelationship
	// ESteamFriendRelationship GetFriendRelationship(FSteamID SteamIDFriend);                                                  // [0x12ff750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaState
	// ESteamPersonaState GetFriendPersonaState(FSteamID SteamIDFriend);                                                        // [0x12ff6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaNameHistory
	// FString GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32_t PersonaName);                                        // [0x12ff5b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaName
	// FString GetFriendPersonaName(FSteamID SteamIDFriend);                                                                    // [0x12ff4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendMessage
	// int32_t GetFriendMessage(FSteamID SteamIDFriend, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType);  // [0x12ff360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendGamePlayed
	// bool GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, FSteamID& SteamIDLobby); // [0x12ff120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendFromSourceByIndex
	// FSteamID GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32_t Ifriend);                                            // [0x12ff050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCountFromSource
	// int32_t GetFriendCountFromSource(FSteamID SteamIDSource);                                                                // [0x12fefc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCount
	// int32_t GetFriendCount(TArray<ESteamFriendFlags> Flags);                                                                 // [0x12feee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCoplayTime
	// int32_t GetFriendCoplayTime(FSteamID SteamIDFriend);                                                                     // [0x12fee50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCoplayGame
	// int32_t GetFriendCoplayGame(FSteamID SteamIDFriend);                                                                     // [0x12fedc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendByIndex
	// FSteamID GetFriendByIndex(int32_t Ifriend, TArray<ESteamFriendFlags> Flags);                                             // [0x12feca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFollowerCount
	// void GetFollowerCount(FDelegateProperty& Callback, FSteamID SteamID);                                                    // [0x12feba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetCoplayFriendCount
	// int32_t GetCoplayFriendCount();                                                                                          // [0x12fe570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetCoplayFriend
	// FSteamID GetCoplayFriend(int32_t CoplayFriend);                                                                          // [0x12fe4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanTag
	// FString GetClanTag(FSteamID SteamIDClan);                                                                                // [0x12fe410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOwner
	// FSteamID GetClanOwner(FSteamID SteamIDClan);                                                                             // [0x12fe380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOfficerCount
	// int32_t GetClanOfficerCount(FSteamID SteamIDClan);                                                                       // [0x12fe2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOfficerByIndex
	// FSteamID GetClanOfficerByIndex(FSteamID SteamIDClan, int32_t Officer);                                                   // [0x12fe220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanName
	// FString GetClanName(FSteamID SteamIDClan);                                                                               // [0x12fe150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanCount
	// int32_t GetClanCount();                                                                                                  // [0x12fe120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanChatMessage
	// int32_t GetClanChatMessage(FSteamID SteamIDClanChat, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter); // [0x12fdf20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanChatMemberCount
	// int32_t GetClanChatMemberCount(FSteamID SteamIDClan);                                                                    // [0x12fde90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanByIndex
	// FSteamID GetClanByIndex(int32_t Clan);                                                                                   // [0x12fde00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanActivityCounts
	// bool GetClanActivityCounts(FSteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting);                   // [0x12fdc80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetChatMemberByIndex
	// FSteamID GetChatMemberByIndex(FSteamID SteamIDClan, int32_t User);                                                       // [0x12fdbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.EnumerateFollowingList
	// void EnumerateFollowingList(FDelegateProperty& Callback, int32_t StartIndex);                                            // [0x12fd630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.DownloadClanActivityCounts
	// void DownloadClanActivityCounts(FDelegateProperty& Callback, TArray<FSteamID> SteamIDClans);                             // [0x12fd4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.CloseClanChatWindowInSteam
	// bool CloseClanChatWindowInSteam(FSteamID SteamIDClanChat);                                                               // [0x12fd440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ClearRichPresence
	// void ClearRichPresence();                                                                                                // [0x12fd420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToWebPage
	// void ActivateGameOverlayToWebPage(FString URL, ESteamActivateGameOverlayToWebPageMode Mode);                             // [0x12fcda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToUser
	// void ActivateGameOverlayToUser(FString Dialog, FSteamID SteamID);                                                        // [0x12fcc70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToStore
	// void ActivateGameOverlayToStore(int32_t AppID, ESteamOverlayToStoreFlag Flag);                                           // [0x12fcbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
	// void ActivateGameOverlayInviteDialogConnectString(FString ConnectString);                                                // [0x12fca50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInvitedialog
	// void ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby);                                                             // [0x12fcb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlay
	// void ActivateGameOverlay(FString Dialog);                                                                                // [0x12fc970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,955) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
	// class USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(class UObject* WorldContextObject, FString Name, float Timeout); // [0x1305630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
	// void HandleCallback(FSetPersonaNameResponse& Data, bool bWasSuccessful);                                                 // [0x13050f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,956) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
	// void HandleCallback(FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);                                       // [0x1304b30] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
	// class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout); // [0x13047b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,957) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
	// class USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout); // [0x13053d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
	// void HandleCallback(FClanOfficerListResponse& Data, bool bWasSuccessful);                                                // [0x1304fe0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,958) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
	// class USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout); // [0x13052d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
	// void HandleCallback(FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);                                       // [0x1304ef0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,959) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
	// void HandleCallback(FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);                                          // [0x1304c10] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
	// class USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(class UObject* WorldContextObject, int32_t StartIndex, float Timeout); // [0x1304930] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,960) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
	// class USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x13051d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
	// void HandleCallback(FFriendsIsFollowing& Data, bool bWasSuccessful);                                                     // [0x1304e00] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,961) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
	// void HandleCallback(FFriendsGetFollowerCount& Data, bool bWasSuccessful);                                                // [0x1304d10] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
	// class USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x1304a30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,962) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0048   (0x0030)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
	// class USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(class UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout); // [0x13054d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
	// void HandleCallback();                                                                                                   // [0x13050d0] Final|Native|Public  
};

/// Class /Script/SteamCore.SteamGameSearch
/// Size: 0x01B8 (440 bytes) (0x000068 - 0x0001B8) align 8 MaxSize: 0x01B8
class USteamGameSearch : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,963) /* FMulticastInlineDelegate */ __um(SearchForGameProgressDelegate);                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,964) /* FMulticastInlineDelegate */ __um(SearchForGameResultDelegate);                        // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,965) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameProgressDelegate);              // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,966) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameResultDelegate);                // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,967) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameFinalResultDelegate);           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,968) /* FMulticastInlineDelegate */ __um(SubmitPlayerResultResultDelegate);                   // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,969) /* FMulticastInlineDelegate */ __um(EndGameResultDelegate);                              // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x00D8   (0x00E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameSearch.SubmitPlayerResult
	// ESteamGameSearchErrorCode SubmitPlayerResult(FString UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult); // [0x130af10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SetGameHostParams
	// ESteamGameSearchErrorCode SetGameHostParams(FString Key, TArray<FString> Values);                                        // [0x1309f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SetConnectionDetails
	// ESteamGameSearchErrorCode SetConnectionDetails(FString ConnectionDetails);                                               // [0x1309b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameWithLobby
	// ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax);           // [0x1309760] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameSolo
	// ESteamGameSearchErrorCode SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax);                                       // [0x1309690] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.RetrieveConnectionDetails
	// ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32_t NumConnectionDetails); // [0x1309550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.RequestPlayersForGame
	// ESteamGameSearchErrorCode RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize);              // [0x1309370] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.HostConfirmGameStart
	// ESteamGameSearchErrorCode HostConfirmGameStart(FString UniqueGameID);                                                    // [0x1309140] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.EndGameSearch
	// ESteamGameSearchErrorCode EndGameSearch();                                                                               // [0x13089f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.EndGame
	// ESteamGameSearchErrorCode EndGame(FString UniqueGameID);                                                                 // [0x13088f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.DeclineGame
	// ESteamGameSearchErrorCode DeclineGame();                                                                                 // [0x13087a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.CancelRequestPlayersForGame
	// ESteamGameSearchErrorCode CancelRequestPlayersForGame();                                                                 // [0x13084e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.AddGameSearchParams
	// ESteamGameSearchErrorCode AddGameSearchParams(FString KeyToFind, TArray<FString> ValuesToFind);                          // [0x1307eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.AcceptGame
	// ESteamGameSearchErrorCode AcceptGame();                                                                                  // [0x1307e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamGameServer
/// Size: 0x0158 (344 bytes) (0x000068 - 0x000158) align 8 MaxSize: 0x0158
class USteamGameServer : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,970) /* FMulticastInlineDelegate */ __um(GSPolicyResponse);                                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,971) /* FMulticastInlineDelegate */ __um(GSClientGroupStatus);                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,972) /* FMulticastInlineDelegate */ __um(GSValidateAuthTicketResponse);                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,973) /* FMulticastInlineDelegate */ __um(GSClientApprove);                                    // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,974) /* FMulticastInlineDelegate */ __um(GSClientDeny);                                       // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameServer.WasRestartRequested
	// bool WasRestartRequested();                                                                                              // [0x130b330] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.UserHasLicenseForApp
	// ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID);                                  // [0x130b260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorServerName
	// void SetSpectatorServerName(FString SpectatorServerName);                                                                // [0x130a9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorPort
	// void SetSpectatorPort(int32_t SpectatorPort);                                                                            // [0x130a950] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetServerName
	// void SetServerName(FString ServerName);                                                                                  // [0x130a860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetRegion
	// void SetRegion(FString Region);                                                                                          // [0x130a770] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetProduct
	// void SetProduct(FString Product);                                                                                        // [0x130a680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetPasswordProtected
	// void SetPasswordProtected(bool bPasswordProtected);                                                                      // [0x130a5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetModDir
	// void SetModDir(FString ModDir);                                                                                          // [0x130a500] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetMaxPlayerCount
	// void SetMaxPlayerCount(int32_t PlayersMax);                                                                              // [0x130a470] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetMapName
	// void SetMapName(FString MapName);                                                                                        // [0x130a380] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetKeyValue
	// void SetKeyValue(FString Key, FString Value);                                                                            // [0x130a200] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetHeartbeatInterval
	// void SetHeartbeatInterval(int32_t HeartbeatInterval);                                                                    // [0x130a170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameTags
	// void SetGameTags(FString GameTags);                                                                                      // [0x130a080] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameDescription
	// void SetGameDescription(FString GameDescription);                                                                        // [0x1309e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameData
	// void SetGameData(FString GameData);                                                                                      // [0x1309d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetDedicatedServer
	// void SetDedicatedServer(bool bDedicated);                                                                                // [0x1309c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetBotPlayerCount
	// void SetBotPlayerCount(int32_t BotPlayers);                                                                              // [0x1309b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetAdvertiseServerActive
	// void SetAdvertiseServerActive(bool bActive);                                                                             // [0x1309a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.RequestUserGroupStatus
	// bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup);                                                // [0x1309480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOnAnonymous
	// void LogOnAnonymous();                                                                                                   // [0x1309350] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOn
	// void LogOn(FString Token);                                                                                               // [0x1309260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOff
	// void LogOff();                                                                                                           // [0x1309240] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_PureCompact
	// FSteamID GetServerSteamID_PureCompact();                                                                                 // [0x1308c50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_Pure
	// FSteamID GetServerSteamID_Pure();                                                                                        // [0x1308c50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID
	// FSteamID GetServerSteamID();                                                                                             // [0x1308c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
	// FString GetServerPublicIP_PureCompact();                                                                                 // [0x1308b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_Pure
	// FString GetServerPublicIP_Pure();                                                                                        // [0x1308b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP
	// FString GetServerPublicIP();                                                                                             // [0x1308b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetAuthSessionTicket
	// FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                           // [0x1308a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ForceHeartbeat
	// void ForceHeartbeat();                                                                                                   // [0x1308a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.EndAuthSession
	// void EndAuthSession(FSteamID SteamID);                                                                                   // [0x1308860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.EnableHeartbeats
	// void EnableHeartbeats(bool bActive);                                                                                     // [0x13087d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
	// FSteamID CreateUnauthenticatedUserConnection();                                                                          // [0x1308760] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
	// void ComputeNewPlayerCompatibility(FDelegateProperty& Callback, FSteamID SteamIDNewPlayer);                              // [0x1308660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ClearAllKeyValues
	// void ClearAllKeyValues();                                                                                                // [0x1308510] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.CancelAuthTicket
	// void CancelAuthTicket(FSteamTicketHandle TicketHandle);                                                                  // [0x1308450] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BUpdateUserData
	// bool BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32_t Score);                                           // [0x1308190] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BSecure
	// bool BSecure();                                                                                                          // [0x1308160] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BLoggedOn
	// bool BLoggedOn();                                                                                                        // [0x1308130] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BeginAuthSession
	// ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID);                                    // [0x1308310] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.AssociateWithClan
	// void AssociateWithClan(FDelegateProperty& Callback, FSteamID SteamIDClan);                                               // [0x1308030] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.GameServerStats
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
class UGameServerStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,975) /* FMulticastInlineDelegate */ __um(GSStatsUnloaded);                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0078   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.GameServerStats.UpdateUserAvgRateStat
	// bool UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);             // [0x130b0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserStatInt
	// bool SetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t Data);                                                   // [0x130ad90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserStatFloat
	// bool SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data);                                                   // [0x130ac00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserAchievement
	// bool SetUserAchievement(FSteamID SteamIDUser, FString Name);                                                             // [0x130aad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ServerStoreUserStats
	// void ServerStoreUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                            // [0x1309970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ServerRequestUserStats
	// void ServerRequestUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                          // [0x1309870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserStatInt
	// bool GetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t& Data);                                                  // [0x1308fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserStatFloat
	// bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);                                                  // [0x1308e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserAchievement
	// bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);                                            // [0x1308c90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ClearUserAchievement
	// bool ClearUserAchievement(FSteamID SteamIDUser, FString Name);                                                           // [0x1308530] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Input
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UInput : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.Input.TriggerVibration
	// void TriggerVibration(FInputHandle Handle, char LeftSpeed, char RightSpeed);                                             // [0x130e7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TriggerRepeatedHapticPulse
	// void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec, char OffMicroSec, char Repeat, char Flags); // [0x130e5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TriggerHapticPulse
	// void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec);                  // [0x130e4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TranslateActionOrigin
	// TEnumAsByte<ESteamCoreInputActionOrigin> TranslateActionOrigin(ESteamCoreInputType DestinationInputType, TEnumAsByte<ESteamCoreInputActionOrigin> SourceOrigin); // [0x130e400] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.StopAnalogActionMomentum
	// void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);                                    // [0x130e330] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.Shutdown
	// bool Shutdown();                                                                                                         // [0x130e300] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ShowBindingPanel
	// bool ShowBindingPanel(FInputHandle Handle);                                                                              // [0x130e260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.SetLEDColor
	// void SetLEDColor(FInputHandle Handle, char ColorR, char ColorG, char ColorB, ESteamCoreInputLEDFlag Flags);              // [0x130e0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.Init
	// bool Init();                                                                                                             // [0x130e090] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetStringForXboxOrigin
	// FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);                                                             // [0x130dfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetStringForActionOrigin
	// FString GetStringForActionOrigin(TEnumAsByte<ESteamCoreInputActionOrigin> Origin);                                       // [0x130ded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetRemotePlaySessionID
	// int32_t GetRemotePlaySessionID(FInputHandle Handle);                                                                     // [0x130de30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetMotionData
	// FInputMotionData GetMotionData(FInputHandle Handle);                                                                     // [0x130dd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetInputTypeForHandle
	// ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle);                                                          // [0x130dce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGlyphForXboxOrigin
	// FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);                                                              // [0x130dc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGlyphForActionOrigin
	// FString GetGlyphForActionOrigin(TEnumAsByte<ESteamCoreInputActionOrigin> Origin);                                        // [0x130db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGamepadIndexForController
	// int32_t GetGamepadIndexForController(FInputHandle Handle);                                                               // [0x130da80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionOrigins
	// int32_t GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut); // [0x130d900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionHandle
	// FInputDigitalActionHandle GetDigitalActionHandle(FString PszActionName);                                                 // [0x130d810] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionData
	// FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);        // [0x130d730] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDeviceBindingRevision
	// bool GetDeviceBindingRevision(FInputHandle Handle, int32_t& Major, int32_t& Minor);                                      // [0x130d600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetCurrentActionSet
	// FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);                                                          // [0x130d570] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetControllerForGamepadIndex
	// FInputHandle GetControllerForGamepadIndex(int32_t Index);                                                                // [0x130d4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetConnectedControllers
	// int32_t GetConnectedControllers(TArray<FInputHandle>& OutHandles);                                                       // [0x130d420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionOrigins
	// int32_t GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut); // [0x130d2a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionHandle
	// FInputAnalogActionHandle GetAnalogActionHandle(FString PszActionName);                                                   // [0x130d1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionData
	// FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);            // [0x130d0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActiveActionSetLayers
	// int32_t GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);                              // [0x130cfd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActionSetHandle
	// FInputActionSetHandle GetActionSetHandle(FString ActionSetName);                                                         // [0x130cee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActionOriginFromXboxOrigin
	// TEnumAsByte<ESteamCoreInputActionOrigin> GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin); // [0x130ce10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.DeactivateAllActionSetLayers
	// void DeactivateAllActionSetLayers(FInputHandle Handle);                                                                  // [0x130cd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.DeactivateActionSetLayer
	// void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);                          // [0x130ccb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ActivateActionSetLayer
	// void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);                            // [0x130cbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ActivateActionSet
	// void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);                                      // [0x130cb10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Inventory
/// Size: 0x0188 (392 bytes) (0x000068 - 0x000188) align 8 MaxSize: 0x0188
class UInventory : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,976) /* FMulticastInlineDelegate */ __um(SteamInventoryResultReady);                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,977) /* FMulticastInlineDelegate */ __um(SteamInventoryDefinitionUpdate);                     // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,978) /* FMulticastInlineDelegate */ __um(SteamInventoryFullUpdate);                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,979) /* FMulticastInlineDelegate */ __um(SteamInventoryStartPurchaseResult);                  // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,980) /* FMulticastInlineDelegate */ __um(SteamInventoryRequestPricesResultDelegate);          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,981) /* FMulticastInlineDelegate */ __um(SteamInventoryEligiblePromoItemDefIDs);              // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC0];                                      // 0x00C8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Inventory.TriggerItemDrop
	// bool TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition);                                       // [0x1313090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.TransferItemQuantity
	// bool TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32_t Quantity, FSteamItemInstanceID ItemIDDest); // [0x1312f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SubmitUpdateProperties
	// bool SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle);                    // [0x1312e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.StartUpdateProperties
	// FSteamInventoryUpdateHandle StartUpdateProperties();                                                                     // [0x1312e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.StartPurchase
	// void StartPurchase(FDelegateProperty& Callback, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);               // [0x1312a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyString
	// bool SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, FString Value); // [0x1312830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyInt
	// bool SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, int32_t Value); // [0x1312690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyFloat
	// bool SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, float Value); // [0x13124f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyBool
	// bool SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, bool bValue); // [0x1312340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SerializeResult
	// bool SerializeResult(FSteamInventoryResult Handle, TArray<char>& Buffer);                                                // [0x1312250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RequestPrices
	// void RequestPrices(FDelegateProperty& Callback);                                                                         // [0x13120d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
	// void RequestEligiblePromoItemDefinitionsIDs(FDelegateProperty& Callback, FSteamID SteamID);                              // [0x1311ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RemoveProperty
	// bool RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName);              // [0x1311d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.LoadItemDefinitions
	// bool LoadItemDefinitions();                                                                                              // [0x1311d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GrantPromoItems
	// bool GrantPromoItems(FSteamInventoryResult& Result);                                                                     // [0x1311980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultTimestamp
	// int32_t GetResultTimestamp(FSteamInventoryResult Handle);                                                                // [0x13118f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultStatus
	// ESteamResult GetResultStatus(FSteamInventoryResult Handle);                                                              // [0x1311860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultItems
	// bool GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items);                                     // [0x1311740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultItemProperty
	// bool GetResultItemProperty(FSteamInventoryResult Handle, int32_t ItemIndex, FString PropertyName, FString& Value);       // [0x1311580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetNumItemsWithPrices
	// int32_t GetNumItemsWithPrices();                                                                                         // [0x1311550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemsWithPrices
	// bool GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32_t>& Prices, TArray<int32_t>& BasePrices);          // [0x13113c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemsByID
	// bool GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs);                     // [0x1311280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemPrice
	// bool GetItemPrice(FSteamItemDef ItemDef, int32_t& Price, int32_t& BasePrice);                                            // [0x1311150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemDefinitionProperty
	// bool GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& Value);                             // [0x1310fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemDefinitionIDs
	// bool GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs);                                                              // [0x1310f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
	// bool GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs);                               // [0x1310e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetAllItems
	// bool GetAllItems(FSteamInventoryResult& Handle);                                                                         // [0x1310d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GenerateItems
	// bool GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);             // [0x1310bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.ExchangeItems
	// bool ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32_t> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32_t> ArrayDestroyQuantity); // [0x13108c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.DestroyResult
	// void DestroyResult(FSteamInventoryResult Handle);                                                                        // [0x1310840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.DeserializeResult
	// bool DeserializeResult(FSteamInventoryResult& Result, TArray<char> Buffer, bool bReservedMustBeFalse);                   // [0x13106b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.ConsumeItem
	// bool ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32_t Quantity);                     // [0x1310590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.CheckResultSteamID
	// bool CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected);                                         // [0x13104c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.AddPromoItems
	// bool AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs);                                    // [0x1310380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.AddPromoItem
	// bool AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef);                                                 // [0x13102a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,982) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
	// class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x1311fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
	// void HandleCallback(FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);                                  // [0x1311a20] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,983) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
	// class USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(class UObject* WorldContextObject, float Timeout); // [0x1312180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
	// void HandleCallback(FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);                                      // [0x1311b10] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,984) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
	// class USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(class UObject* WorldContextObject, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity, float Timeout); // [0x1312c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
	// void HandleCallback(FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);                                      // [0x1311c10] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.Matchmaking
/// Size: 0x0218 (536 bytes) (0x000068 - 0x000218) align 8 MaxSize: 0x0218
class UMatchmaking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,985) /* FMulticastInlineDelegate */ __um(FavoritesListAccountsUpdated);                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,986) /* FMulticastInlineDelegate */ __um(FavoritesListChanged);                               // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,987) /* FMulticastInlineDelegate */ __um(LobbyChatMsg);                                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,988) /* FMulticastInlineDelegate */ __um(LobbyChatUpdate);                                    // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,989) /* FMulticastInlineDelegate */ __um(LobbyDataUpdate);                                    // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,990) /* FMulticastInlineDelegate */ __um(LobbyEnter);                                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,991) /* FMulticastInlineDelegate */ __um(LobbyGameCreated);                                   // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,992) /* FMulticastInlineDelegate */ __um(LobbyInvite);                                        // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,993) /* FMulticastInlineDelegate */ __um(LobbyKicked);                                        // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x120];                                     // 0x00F8   (0x0120)  MISSED


	/// Functions
	// Function /Script/SteamCore.Matchmaking.SetLobbyType
	// bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType);                                                     // [0x13194b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyOwner
	// bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner);                                                     // [0x13193e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberLimit
	// bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32_t MaxMembers);                                                     // [0x1319310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberData
	// void SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value);                                              // [0x1319170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyJoinable
	// bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable);                                                       // [0x13190a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyGameServer
	// void SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32_t GameServerPort, FSteamID SteamIDGameServer); // [0x1318f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyData
	// bool SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value);                                                    // [0x1318d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLinkedLobby
	// bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent);                                              // [0x1318c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SendLobbyChatMsg
	// bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message);                                                           // [0x1318b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RequestLobbyList
	// void RequestLobbyList(FDelegateProperty& Callback);                                                                      // [0x13189d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RequestLobbyData
	// bool RequestLobbyData(FSteamID SteamIDLobby);                                                                            // [0x1318940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RemoveFavoriteGame
	// bool RemoveFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags); // [0x1318710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.LeaveLobby
	// void LeaveLobby(FSteamID SteamIDLobby);                                                                                  // [0x1318460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.JoinLobby
	// void JoinLobby(FDelegateProperty& Callback, FSteamID SteamIDLobby);                                                      // [0x1318260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.InviteUserToLobby
	// bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee);                                                  // [0x1318190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetNumLobbyMembers
	// int32_t GetNumLobbyMembers(FSteamID SteamIDLobby);                                                                       // [0x1317e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyOwner
	// FSteamID GetLobbyOwner(FSteamID SteamIDLobby);                                                                           // [0x1317db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberLimit
	// int32_t GetLobbyMemberLimit(FSteamID SteamIDLobby);                                                                      // [0x1317d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberData
	// FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key);                                    // [0x1317b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberByIndex
	// FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32_t Member);                                                   // [0x1317ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyGameServer
	// bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32_t& GameServerPort, FSteamID& SteamIDGameServer); // [0x1317920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataCount
	// int32_t GetLobbyDataCount(FSteamID SteamIDLobby);                                                                        // [0x1317890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataByIndex
	// bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32_t LobbyData, FString& Key, FString& Value);                        // [0x13176f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyData
	// FString GetLobbyData(FSteamID SteamIDLobby, FString Key);                                                                // [0x1317580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyChatEntry
	// int32_t GetLobbyChatEntry(FSteamID SteamIDLobby, int32_t MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType); // [0x1317380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyByIndex
	// FSteamID GetLobbyByIndex(int32_t Lobby);                                                                                 // [0x13172f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGameCount
	// int32_t GetFavoriteGameCount();                                                                                          // [0x13172c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGame
	// bool GetFavoriteGame(int32_t Game, int32_t& AppID, FString& IP, int32_t& ConnectionPort, int32_t& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32_t& TimeLastPlayedOnServer); // [0x1317020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.DeleteLobbyData
	// bool DeleteLobbyData(FSteamID SteamIDLobby, FString Key);                                                                // [0x1316ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, ESteamLobbyType LobbyType, int32_t MaxMembers);                            // [0x13162e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListStringFilter
	// void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType);    // [0x1316130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
	// void AddRequestLobbyListResultCountFilter(int32_t MaxResults);                                                           // [0x13160b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
	// void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32_t ValueToMatch, ESteamLobbyComparison ComparisonType); // [0x1315f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
	// void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32_t ValueToBeCloseTo);                                   // [0x1315e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
	// void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);                                                    // [0x1315d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
	// void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);                                   // [0x1315d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
	// void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby);                                                  // [0x1315ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddFavoriteGame
	// int32_t AddFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer); // [0x1315a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,994) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
	// void HandleCallback(FCreateLobbyData& Data, bool bWasSuccessful);                                                        // [0x1317ed0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
	// class USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(class UObject* WorldContextObject, ESteamLobbyType LobbyType, int32_t MaxMembers, float Timeout); // [0x1316410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,995) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
	// class USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout); // [0x1318a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
	// void HandleCallback(FLobbyMatchList& Data, bool bWasSuccessful);                                                         // [0x13180b0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,996) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
	// class USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(class UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout); // [0x1318360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	// void HandleCallback(FJoinLobbyData& Data, bool bWasSuccessful);                                                          // [0x1317fc0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreCreateSession
/// Size: 0x0158 (344 bytes) (0x000038 - 0x000158) align 8 MaxSize: 0x0158
class USteamCoreCreateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,997) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,998) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x100];                                     // 0x0058   (0x0100)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
	// class USteamCoreCreateSession* CreateSteamCoreSession(class UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, FString SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout); // [0x1316560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFindSession
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class USteamCoreFindSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,999) /* FMulticastInlineDelegate */ __um(OnCallback);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0048   (0x0090)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFindSession.OnCompleted
	// void OnCompleted(bool bSuccessful);                                                                                      // [0x13185b0] Final|Native|Public  
	// Function /Script/SteamCore.SteamCoreFindSession.FindSteamCoreSessions
	// class USteamCoreFindSession* FindSteamCoreSessions(class UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32_t MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout); // [0x1316cc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreDestroySession
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreDestroySession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1000) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1001) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0058   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreDestroySession.OnCompleted
	// void OnCompleted(FName SessionName, bool bWasSuccessful);                                                                // [0x13184e0] Final|Native|Public  
	// Function /Script/SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
	// class USteamCoreDestroySession* DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout);               // [0x1316bf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUpdateSession
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class USteamCoreUpdateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1002) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
	// class USteamCoreUpdateSession* UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, FString SessionName, int32_t MaxPlayers); // [0x1319580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUpdateSession.OnCompleted
	// void OnCompleted(FName SessionName, bool bWasSuccessful);                                                                // [0x1318640] Final|Native|Public  
};

/// Class /Script/SteamCore.MatchmakingServers
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMatchmakingServers : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.MatchmakingServers.ServerRules
	// void ServerRules(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                            // [0x131f8d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestSpectatorServerList
	// void RequestSpectatorServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131f500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestLANServerList
	// void RequestLANServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131f130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestInternetServerList
	// void RequestInternetServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131ed60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestHistoryServerList
	// void RequestHistoryServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131e990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFriendsServerList
	// void RequestFriendsServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131e5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFavoritesServerList
	// void RequestFavoritesServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131e1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.PingServer
	// void PingServer(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                             // [0x131deb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1003) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
	// class USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(class UObject* WorldContextObject, FString IP, int32_t Port, float Timeout); // [0x131e040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
	// void HandleCallback(FGameServerItem& Data, bool bWasSuccessful);                                                         // [0x131da40] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.CancelPingQueries
	// void CancelPingQueries(class UObject* WorldContextObject);                                                               // [0x131d7d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1004) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1005) /* FMulticastInlineDelegate */ __um(OnRefreshCompleted);                                // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131f700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131f330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131ef60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131eb90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131e7c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x131e3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
	// void HandleServerListFinished();                                                                                         // [0x131de90] Final|Native|Private 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
	// void HandleCallback(FGameServerItem& Data);                                                                              // [0x131dbf0] Final|Native|Private|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.CancelServerListQueries
	// void CancelServerListQueries(class UObject* WorldContextObject);                                                         // [0x131d850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1006) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
	// class USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(class UObject* WorldContextObject, FString IP, int32_t QueryPort, float Timeout); // [0x131fa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
	// void HandleCallback(TArray<FGameServerRule>& Data, bool bWasSuccessful);                                                 // [0x131dd60] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.CancelServerRulesQueries
	// void CancelServerRulesQueries(class UObject* WorldContextObject);                                                        // [0x131d8d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.ServerFilter
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UServerFilter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/SteamCore.ServerFilter.GetFilters
	// TMap<FString, FString> GetFilters();                                                                                     // [0x131d950] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterWhitelisted
	// void AddFilterWhitelisted();                                                                                             // [0x131d7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterVersion
	// void AddFilterVersion(FString Value);                                                                                    // [0x131d6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterSecure
	// void AddFilterSecure();                                                                                                  // [0x131d6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterProxy
	// void AddFilterProxy();                                                                                                   // [0x131d680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterPassword
	// void AddFilterPassword();                                                                                                // [0x131d660] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterOr
	// void AddFilterOr(FString Value);                                                                                         // [0x131d570] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNotFull
	// void AddFilterNotFull();                                                                                                 // [0x131d550] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNotAppId
	// void AddFilterNotAppId(FString Value);                                                                                   // [0x131d460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNor
	// void AddFilterNor(FString Value);                                                                                        // [0x131d370] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNoPlayers
	// void AddFilterNoPlayers();                                                                                               // [0x131d350] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNand
	// void AddFilterNand(FString Value);                                                                                       // [0x131d260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterName
	// void AddFilterName(FString Value);                                                                                       // [0x131d170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterMap
	// void AddFilterMap(FString Value);                                                                                        // [0x131d080] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterLinux
	// void AddFilterLinux();                                                                                                   // [0x131d060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterHasPlayers
	// void AddFilterHasPlayers();                                                                                              // [0x131d040] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsNor
	// void AddFilterGameTagsNor(FString Value);                                                                                // [0x131cf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsAnd
	// void AddFilterGameTagsAnd(FString Value);                                                                                // [0x131ce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataOr
	// void AddFilterGameDataOr(FString Value);                                                                                 // [0x131cd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataNor
	// void AddFilterGameDataNor(FString Value);                                                                                // [0x131cc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataAnd
	// void AddFilterGameDataAnd(FString Value);                                                                                // [0x131cb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameAddr
	// void AddFilterGameAddr(FString Value);                                                                                   // [0x131caa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterDedicated
	// void AddFilterDedicated();                                                                                               // [0x131ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterAnd
	// void AddFilterAnd(FString Value);                                                                                        // [0x131c990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Music
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMusic : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1007) /* FMulticastInlineDelegate */ __um(PlaybackStatusHasChanged);                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1008) /* FMulticastInlineDelegate */ __um(VolumeHasChanged);                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Music.SetVolume
	// void SetVolume(float flVolume);                                                                                          // [0x1324400] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.PlayPrevious
	// void PlayPrevious();                                                                                                     // [0x1324080] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.PlayNext
	// void PlayNext();                                                                                                         // [0x1324060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.Play
	// void Play();                                                                                                             // [0x1324040] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.Pause
	// void Pause();                                                                                                            // [0x1324020] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.GetVolume
	// float GetVolume();                                                                                                       // [0x13237e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.GetPlaybackStatus
	// ESteamAudioPlaybackStatus GetPlaybackStatus();                                                                           // [0x13237b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.BIsPlaying
	// bool BIsPlaying();                                                                                                       // [0x1322160] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.bIsEnabled
	// bool bIsEnabled();                                                                                                       // [0x1321fb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Networking
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UNetworking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1009) /* FMulticastInlineDelegate */ __um(OnP2PSessionRequestDelegate);                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1010) /* FMulticastInlineDelegate */ __um(OnP2PSessionConnectFailDelegate);                   // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Networking.SendP2PPacket
	// bool SendP2PPacket(FSteamID SteamIDRemote, TArray<char> Data, ESteamP2PSend P2PSendType, int32_t Channel);               // [0x1324250] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.ReadP2PPacket
	// bool ReadP2PPacket(TArray<char>& Data, FSteamID& OutSteamIdRemote, int32_t MessageSize, int32_t Channel);                // [0x13240a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.IsP2PPacketAvailable
	// bool IsP2PPacketAvailable(int32_t& MessageSize, int32_t Channel);                                                        // [0x1323b10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.GetP2PSessionState
	// bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);                                 // [0x13236a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.CloseP2PSessionWithUser
	// bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);                                                                    // [0x1322630] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.CloseP2PChannelWithUser
	// bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32_t Channel);                                                   // [0x1322560] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.AllowP2PPacketRelay
	// bool AllowP2PPacketRelay(bool bAllow);                                                                                   // [0x1321dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.AcceptP2PSessionWithUser
	// bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);                                                                   // [0x1321d30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.NetworkingUtils
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UNetworkingUtils : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.NetworkingUtils.ParsePingLocationString
	// bool ParsePingLocationString(FString String, FSteamNetworkPingLocation& Result);                                         // [0x1323ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.InitRelayNetworkAccess
	// void InitRelayNetworkAccess();                                                                                           // [0x1323af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.GetLocalPingLocation
	// float GetLocalPingLocation(FSteamNetworkPingLocation& Result);                                                           // [0x1323510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
	// int32_t EstimatePingTimeFromLocalHost(FSteamNetworkPingLocation& RemoteLocation);                                        // [0x1322f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
	// int32_t EstimatePingTimeBetweenTwoLocations(FSteamNetworkPingLocation& Location1, FSteamNetworkPingLocation& Location2); // [0x1322e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.ConvertPingLocationToString
	// void ConvertPingLocationToString(FSteamNetworkPingLocation& Location, FString& String);                                  // [0x13226d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.CheckPingDataUpToDate
	// bool CheckPingDataUpToDate(float MaxAgeSeconds);                                                                         // [0x13224d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.ParentalSettings
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UParentalSettings : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockLocked
	// bool BIsParentalLockLocked();                                                                                            // [0x1322130] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockEnabled
	// bool BIsParentalLockEnabled();                                                                                           // [0x1322100] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureInBlockList
	// bool BIsFeatureInBlockList(ESteamParentalFeature Feature);                                                               // [0x1322070] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureBlocked
	// bool BIsFeatureBlocked(ESteamParentalFeature Feature);                                                                   // [0x1321fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsAppInBlockList
	// bool BIsAppInBlockList(int32_t AppID);                                                                                   // [0x1321f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsAppBlocked
	// bool BIsAppBlocked(int32_t AppID);                                                                                       // [0x1321e70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamParties
/// Size: 0x0188 (392 bytes) (0x000068 - 0x000188) align 8 MaxSize: 0x0188
class USteamParties : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1011) /* FMulticastInlineDelegate */ __um(JoinPartyDelegate);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1012) /* FMulticastInlineDelegate */ __um(CreateBeaconDelegate);                              // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1013) /* FMulticastInlineDelegate */ __um(ReservationNotificationDelegate);                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1014) /* FMulticastInlineDelegate */ __um(ChangeNumOpenSlotsDelegate);                        // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,1015) /* FMulticastInlineDelegate */ __um(AvailableBeaconLocationsDelegate);                  // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,1016) /* FMulticastInlineDelegate */ __um(ActiveBeaconsDelegate);                             // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC0];                                      // 0x00C8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamParties.OnReservationCompleted
	// void OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser);                                              // [0x1323e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.JoinParty
	// void JoinParty(FDelegateProperty& Callback, FPartyBeaconID BeaconID);                                                    // [0x1323c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetNumAvailableBeaconLocations
	// bool GetNumAvailableBeaconLocations(int32_t& NumLocations);                                                              // [0x1323600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetNumActiveBeacons
	// int32_t GetNumActiveBeacons();                                                                                           // [0x13235d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconLocationData
	// bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut); // [0x1323370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconDetails
	// bool GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata); // [0x13231a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconByIndex
	// FPartyBeaconID GetBeaconByIndex(int32_t Index);                                                                          // [0x1323110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetAvailableBeaconLocations
	// bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32_t MaxNumLocations);              // [0x1322ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.DestroyBeacon
	// bool DestroyBeacon(FPartyBeaconID BeaconID);                                                                             // [0x1322d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.CreateBeacon
	// void CreateBeacon(FDelegateProperty& Callback, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData); // [0x13227e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.ChangeNumOpenSlots
	// void ChangeNumOpenSlots(FDelegateProperty& Callback, FPartyBeaconID BeaconID, int32_t OpenSlots);                        // [0x1322250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.CancelReservation
	// void CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser);                                                   // [0x1322190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1017) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
	// class USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout); // [0x1323d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
	// void HandleCallback(FJoinPartyData& Data, bool bWasSuccessful);                                                          // [0x13239e0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1018) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
	// void HandleCallback(FCreateBeaconData& Data, bool bWasSuccessful);                                                       // [0x13238f0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
	// class USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(class UObject* WorldContextObject, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData, float Timeout); // [0x1322aa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1019) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
	// void HandleCallback(FChangeNumOpenSlotsData& Data, bool bWasSuccessful);                                                 // [0x1323810] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
	// class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, int32_t OpenSlots, float Timeout); // [0x1322380] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.RemotePlay
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class URemotePlay : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1020) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionConnected);                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1021) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionDisconnected);                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemotePlay.GetSessionSteamID
	// FSteamID GetSessionSteamID(int32_t SessionId);                                                                           // [0x1327bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionId
	// int32_t GetSessionId(int32_t SessionIndex);                                                                              // [0x1327b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionCount
	// int32_t GetSessionCount();                                                                                               // [0x1327b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionClientName
	// FString GetSessionClientName(int32_t SessionId);                                                                         // [0x1327a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionClientFormFactor
	// ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32_t SessionId);                                                // [0x1327980] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
	// bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);                                                              // [0x1326390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.BGetSessionClientResolution
	// bool BGetSessionClientResolution(int32_t SessionId, int32_t& ResolutionX, int32_t& ResolutionY);                         // [0x1326260] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.RemoteStorage
/// Size: 0x0128 (296 bytes) (0x000068 - 0x000128) align 8 MaxSize: 0x0128
class URemoteStorage : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1022) /* FMulticastInlineDelegate */ __um(RemoteStorageUnsubscribePublishedFileResult);       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1023) /* FMulticastInlineDelegate */ __um(RemoteStorageSubscribePublishedFileResult);         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1024) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileUnsubscribed);            // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1025) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileSubscribed);              // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x80];                                      // 0x00A8   (0x0080)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemoteStorage.UGCRead
	// int32_t UGCRead(FSteamUGCHandle Content, TArray<char>& OutData, int32_t DataToRead, int32_t Offset, ESteamUGCReadAction Action); // [0x13285b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.UGCDownloadToLocation
	// void UGCDownloadToLocation(FDelegateProperty& Callback, FSteamUGCHandle Content, FString Location, int32_t Priority);    // [0x13283e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.UGCDownload
	// void UGCDownload(FDelegateProperty& Callback, FSteamUGCHandle Content, int32_t Priority);                                // [0x13282b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.SetSyncPlatforms
	// bool SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform);                                  // [0x1328180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.SetCloudEnabledForApp
	// void SetCloudEnabledForApp(bool bEnabled);                                                                               // [0x1328100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForApp
	// bool IsCloudEnabledForApp();                                                                                             // [0x13280d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForAccount
	// bool IsCloudEnabledForAccount();                                                                                         // [0x13280a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetUGCDownloadProgress
	// bool GetUGCDownloadProgress(FSteamUGCHandle Handle, int32_t& BytesDownloaded, int32_t& BytesExpected);                   // [0x1327f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetUGCDetails
	// bool GetUGCDetails(FSteamUGCHandle Handle, int32_t& AppID, FString& Name, int32_t& FileSizeInBytes, FSteamID& SteamIDOwner); // [0x1327d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetSyncPlatforms
	// ESteamRemoteStoragePlatform GetSyncPlatforms(FString File);                                                              // [0x1327c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetQuota
	// bool GetQuota(int32_t& TotalBytes, int32_t& AvailableBytes);                                                             // [0x1327890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileTimestamp
	// int32_t GetFileTimestamp(FString File);                                                                                  // [0x13277a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileSize
	// int32_t GetFileSize(FString File);                                                                                       // [0x13276b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileNameAndSize
	// FString GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes);                                                      // [0x1327590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileCount
	// int32_t GetFileCount();                                                                                                  // [0x1327560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCHandle
	// FSteamUGCHandle GetCachedUGCHandle(int32_t ICachedContent);                                                              // [0x13274d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCCount
	// int32_t GetCachedUGCCount();                                                                                             // [0x13274a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamWriteChunk
	// bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<char> Data);                                     // [0x1327370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamOpen
	// FUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);                                                             // [0x1327280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamClose
	// bool FileWriteStreamClose(FUGCFileWriteStreamHandle Handle);                                                             // [0x13271f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamCancel
	// bool FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle);                                                            // [0x1327160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteAsync
	// void FileWriteAsync(FDelegateProperty& Callback, FString File, TArray<char> Data);                                       // [0x1326f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWrite
	// bool FileWrite(FString File, TArray<char> Data);                                                                         // [0x1326e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileShare
	// void FileShare(FDelegateProperty& Callback, FString File);                                                               // [0x1326cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileReadAsyncComplete
	// bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<char>& Buffer, int32_t BytesToRead);     // [0x1326b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileReadAsync
	// void FileReadAsync(FDelegateProperty& Callback, FString File, int32_t Offset, int32_t BytesToRead);                      // [0x1326980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileRead
	// int32_t FileRead(FString File, TArray<char>& Buffer, int32_t DataToRead);                                                // [0x13267f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FilePersisted
	// bool FilePersisted(FString File);                                                                                        // [0x1326700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileForget
	// bool FileForget(FString File);                                                                                           // [0x1326610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileExists
	// bool FileExists(FString File);                                                                                           // [0x1326520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileDelete
	// bool FileDelete(FString File);                                                                                           // [0x1326430] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Screenshots
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UScreenshots : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1026) /* FMulticastInlineDelegate */ __um(ScreenshotReady);                                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1027) /* FMulticastInlineDelegate */ __um(ScreenshotRequested);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Screenshots.WriteScreenshot
	// FScreenshotHandle WriteScreenshot(TArray<char> PubRGB, int32_t Width, int32_t Height);                                   // [0x1330f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TriggerScreenshot
	// void TriggerScreenshot();                                                                                                // [0x1330b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TagUser
	// bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);                                                                // [0x1330a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TagPublishedFile
	// bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);                                       // [0x13309b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.SetLocation
	// bool SetLocation(FScreenshotHandle Handle, FString Location);                                                            // [0x132f6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.IsScreenshotsHooked
	// bool IsScreenshotsHooked();                                                                                              // [0x132e260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.HookScreenshots
	// void HookScreenshots(bool bHook);                                                                                        // [0x132e1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.AddVRScreenshotToLibrary
	// FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString Filename, FString VRFileName);          // [0x132bec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.AddScreenshotToLibrary
	// FScreenshotHandle AddScreenshotToLibrary(FString Filename, FString ThumbnailFilename, int32_t Width, int32_t Height);    // [0x132bcd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.UGC
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UUGC : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1028) /* FMulticastInlineDelegate */ __um(ItemInstalled);                                     // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1029) /* FMulticastInlineDelegate */ __um(DownloadItemResult);                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.UGC.UpdateItemPreviewVideo
	// bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32_t Index, FString PreviewVideo);                               // [0x1330dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.UpdateItemPreviewFile
	// bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32_t Index, FString PreviewFile);                                 // [0x1330c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.UnsubscribeItem
	// void UnsubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                     // [0x1330b70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SuspendDownloads
	// void SuspendDownloads(bool bSuspend);                                                                                    // [0x1330930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SubscribeItem
	// void SubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                       // [0x1330830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SubmitItemUpdate
	// void SubmitItemUpdate(FDelegateProperty& Callback, FUGCUpdateHandle Handle, FString ChangeNote);                         // [0x13306a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTrackingForAllItems
	// void StopPlaytimeTrackingForAllItems(FDelegateProperty& Callback);                                                       // [0x13305f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTracking
	// void StopPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileIDs);                       // [0x1330490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartPlaytimeTracking
	// void StartPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileID);                       // [0x1330330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartItemUpdate
	// FUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, FPublishedFileID PublishedFileID);                               // [0x1330270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetUserItemVote
	// void SetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);                       // [0x1330140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetSearchText
	// bool SetSearchText(FUGCQueryHandle Handle, FString SearchText);                                                          // [0x1330010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnTotalOnly
	// bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly);                                                  // [0x132ff40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnPlaytimeStats
	// bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32_t Days);                                                       // [0x132fe70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnOnlyIDs
	// bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs);                                                      // [0x132fda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnMetadata
	// bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata);                                                    // [0x132fcd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnLongDescription
	// bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription);                                      // [0x132fc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnKeyValueTags
	// bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags);                                            // [0x132fb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnChildren
	// bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren);                                                    // [0x132fa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnAdditionalPreviews
	// bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews);                                // [0x132f990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetRankedByTrendDays
	// bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32_t Days);                                                         // [0x132f8c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetMatchAnyTag
	// bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag);                                                          // [0x132f7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetLanguage
	// bool SetLanguage(FUGCQueryHandle Handle, FString Language);                                                              // [0x132f590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemVisibility
	// bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);                  // [0x132f4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemUpdateLanguage
	// bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language);                                                   // [0x132f390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemTitle
	// bool SetItemTitle(FUGCUpdateHandle Handle, FString Title);                                                               // [0x132f260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemTags
	// bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);                                                         // [0x132f140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemPreview
	// bool SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile);                                                       // [0x132f010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemMetadata
	// bool SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData);                                                         // [0x132eee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemDescription
	// bool SetItemDescription(FUGCUpdateHandle Handle, FString Description);                                                   // [0x132edb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemContent
	// bool SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder);                                                     // [0x132ec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetCloudFileNameFilter
	// bool SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName);                                         // [0x132eb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetAllowLegacyUpload
	// bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload);                                             // [0x132ea80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetAllowCachedResponse
	// bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32_t MaxAgeSeconds);                                              // [0x132e9b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SendQueryUGCRequest
	// void SendQueryUGCRequest(FDelegateProperty& Callback, FUGCQueryHandle Handle);                                           // [0x132e8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemPreview
	// bool RemoveItemPreview(FUGCUpdateHandle Handle, int32_t Index);                                                          // [0x132e7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemKeyValueTags
	// bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key);                                                       // [0x132e6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemFromFavorites
	// void RemoveItemFromFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);              // [0x132e580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveDependency
	// void RemoveDependency(FDelegateProperty& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x132e450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveAppDependency
	// void RemoveAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);                  // [0x132e320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.ReleaseQueryUGCRequest
	// bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle);                                                                     // [0x132e290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetUserItemVote
	// void GetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                     // [0x132e0e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetSubscribedItems
	// int32_t GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries);                              // [0x132dfe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCTagDisplayName
	// bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value);                 // [0x132de80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCTag
	// bool GetQueryUGCTag(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value);                            // [0x132dd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCStatistic
	// bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32_t Index, ESteamItemStatistic StatType, FString& StatValue);      // [0x132dbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCResult
	// bool GetQueryUGCResult(FUGCQueryHandle Handle, int32_t Index, FSteamUGCDetails& Details);                                // [0x132d9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCPreviewURL
	// bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32_t Index, FString& URL);                                         // [0x132d8a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumTags
	// int32_t GetQueryUGCNumTags(FUGCQueryHandle Handle, int32_t Index);                                                       // [0x132d7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumKeyValueTags
	// int32_t GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32_t Index);                                               // [0x132d700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
	// int32_t GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32_t Index);                                         // [0x132d630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCMetadata
	// bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32_t Index, FString& MetaData, int32_t MetadataSize);                // [0x132d4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCKeyValueTag
	// bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, FString& Key, FString& Value); // [0x132d300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCChildren
	// bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32_t Index, TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries); // [0x132d190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCAdditionalPreview
	// bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType); // [0x132cf60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetNumSubscribedItems
	// int32_t GetNumSubscribedItems();                                                                                         // [0x132cf30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemUpdateProgress
	// ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32_t& BytesProcessed, int32_t& BytesTotal);     // [0x132ce00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemState
	// int32_t GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);                                 // [0x132cd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemInstallInfo
	// bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32_t& SizeOnDisk, FString& Folder, int32_t& Timestamp);     // [0x132cb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemDownloadInfo
	// bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32_t& BytesDownloaded, int32_t& BytesTotal);               // [0x132ca50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetAppDependencies
	// void GetAppDependencies(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                  // [0x132c950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.DownloadItem
	// bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority);                                                 // [0x132c880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.DeleteItem
	// void DeleteItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                          // [0x132c780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryUserUGCRequest
	// FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x132c560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryUGCDetailsRequest
	// FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);                                 // [0x132c470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryAllUGCRequest
	// FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x132c2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateItem
	// void CreateItem(FDelegateProperty& Callback, int32_t ConsumerAppID, ESteamWorkshopFileType FileType);                    // [0x132c1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.BInitWorkshopForGameServer
	// bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, FString Folder);                                                // [0x132c070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredTagGroup
	// bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);                                             // [0x132bbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredTag
	// bool AddRequiredTag(FUGCQueryHandle Handle, FString TagName);                                                            // [0x132ba80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredKeyValueTag
	// bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value);                                         // [0x132b8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemToFavorites
	// void AddItemToFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);                   // [0x132b7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemPreviewVideo
	// bool AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID);                                                      // [0x132b670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemPreviewFile
	// bool AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type);                       // [0x132b500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemKeyValueTag
	// bool AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value);                                            // [0x132b350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddExcludedTag
	// bool AddExcludedTag(FUGCQueryHandle Handle, FString TagName);                                                            // [0x132b220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddDependency
	// void AddDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x132b0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddAppDependency
	// void AddAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);                     // [0x132afc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1030) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
	// class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout); // [0x1335630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
	// void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);                                             // [0x1334940] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1031) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
	// class USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x13354b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
	// void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);                                             // [0x1334860] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1032) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
	// class USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x1335330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
	// void HandleCallback(FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);                                            // [0x1334780] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1033) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
	// class USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout); // [0x13359a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	// void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);                              // [0x1334c00] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1034) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
	// class USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout); // [0x13358a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	// void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);                              // [0x1334b10] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1035) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
	// class USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout); // [0x1334f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	// void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);                                           // [0x13343b0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1036) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
	// void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);                                           // [0x1333c10] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
	// class USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout); // [0x1333430] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1037) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
	// void HandleCallback(FGetUserItemVoteResult& Data, bool bWasSuccessful);                                                  // [0x13341d0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
	// class USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x1333a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1038) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
	// class USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout); // [0x13351d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
	// void HandleCallback(FSetUserItemVoteResult& Data, bool bWasSuccessful);                                                  // [0x1334690] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1039) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
	// class USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(class UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout); // [0x1335700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	// void HandleCallback(FSubmitItemUpdateResult& Data, bool bWasSuccessful);                                                 // [0x1334a20] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1040) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
	// void HandleCallback(FCreateItemResult& Data, bool bWasSuccessful);                                                       // [0x1333df0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
	// class USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(class UObject* WorldContextObject, int32_t ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout); // [0x1333570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1041) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
	// class USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(class UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout); // [0x13350d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
	// void HandleCallback(FSteamUGCQueryCompleted& Data, bool bWasSuccessful);                                                 // [0x1334590] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1042) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
	// void HandleCallback(FAddAppDependencyResult& Data, bool bWasSuccessful);                                                 // [0x1333b20] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
	// class USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout); // [0x1333190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1043) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
	// class USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout); // [0x1334cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
	// void HandleCallback(FRemoveAppDependencyResult& Data, bool bWasSuccessful);                                              // [0x13342c0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1044) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
	// void HandleCallback(FAddUGCDependencyResult& Data, bool bWasSuccessful);                                                 // [0x1333d00] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
	// class USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout); // [0x13332e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1045) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
	// class USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout); // [0x1334e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
	// void HandleCallback(FRemoveUGCDependencyResult& Data, bool bWasSuccessful);                                              // [0x13344a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1046) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
	// void HandleCallback(FUGCDeleteItemResult& Data, bool bWasSuccessful);                                                    // [0x1333ee0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
	// class USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x13336c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1047) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
	// void HandleCallback(FGetAppDependenciesResult& Data, bool bWasSuccessful);                                               // [0x13340c0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
	// class USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x1333920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1048) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
	// void HandleCallback(FDownloadItemResult& Data, bool bWasSuccessful);                                                     // [0x1333fd0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
	// class USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout); // [0x13337c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.User
/// Size: 0x0278 (632 bytes) (0x000068 - 0x000278) align 8 MaxSize: 0x0278
class UUser : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1049) /* FMulticastInlineDelegate */ __um(ClientGameServerDeny);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1050) /* FMulticastInlineDelegate */ __um(GameWebCallback);                                   // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1051) /* FMulticastInlineDelegate */ __um(GetAuthSessionTicketResponse);                      // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1052) /* FMulticastInlineDelegate */ __um(IPCFailure);                                        // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,1053) /* FMulticastInlineDelegate */ __um(LicensesUpdated);                                   // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,1054) /* FMulticastInlineDelegate */ __um(MicroTxnAuthorizationResponse);                     // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,1055) /* FMulticastInlineDelegate */ __um(SteamServerConnectFailure);                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,1056) /* FMulticastInlineDelegate */ __um(SteamServersConnected);                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,1057) /* FMulticastInlineDelegate */ __um(SteamServersDisconnected);                          // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,1058) /* FMulticastInlineDelegate */ __um(ValidateAuthTicketResponse);                        // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,1059) /* FMulticastInlineDelegate */ __um(EncryptedAppTicketResponse);                        // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0x160];                                     // 0x0118   (0x0160)  MISSED


	/// Functions
	// Function /Script/SteamCore.User.UserHasLicenseForApp
	// ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID);                                  // [0x1338cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.StopVoiceRecording
	// void StopVoiceRecording();                                                                                               // [0x1338ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.StartVoiceRecording
	// void StartVoiceRecording();                                                                                              // [0x1338c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.RequestStoreAuthURL
	// void RequestStoreAuthURL(FDelegateProperty& Callback, FString RedirectURL);                                              // [0x1338b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.RequestEncryptedAppTicket
	// void RequestEncryptedAppTicket(FDelegateProperty& Callback, TArray<char> DataToInclude);                                 // [0x13389d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetVoiceOptimalSampleRate
	// int32_t GetVoiceOptimalSampleRate();                                                                                     // [0x13389a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetVoice
	// ESteamVoiceResult GetVoice(TArray<char>& DestBuffer, int32_t& BytesWritten);                                             // [0x1338890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetSteamID_Pure
	// FSteamID GetSteamID_Pure();                                                                                              // [0x1338850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.User.GetSteamID
	// FSteamID GetSteamID();                                                                                                   // [0x1338810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetPlayerSteamLevel
	// int32_t GetPlayerSteamLevel();                                                                                           // [0x13387e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetGameBadgeLevel
	// int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);                                                                   // [0x1338710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetEncryptedAppTicket
	// bool GetEncryptedAppTicket(TArray<char>& Ticket);                                                                        // [0x1338660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetAvailableVoice
	// ESteamVoiceResult GetAvailableVoice(int32_t& CompressedBytes, int32_t& UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate); // [0x1338530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetAuthSessionTicket
	// FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                           // [0x1338480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.EndAuthSession
	// void EndAuthSession(FSteamID SteamID);                                                                                   // [0x1338400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.DecompressVoice
	// ESteamVoiceResult DecompressVoice(TArray<char>& CompressedBuffer, int32_t DesiredSampleRate, TArray<char>& DestBuffer);  // [0x13382a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.CancelAuthTicket
	// void CancelAuthTicket(FSteamTicketHandle TicketHandle);                                                                  // [0x1338220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BLoggedOn
	// bool BLoggedOn();                                                                                                        // [0x13380c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsTwoFactorEnabled
	// bool BIsTwoFactorEnabled();                                                                                              // [0x1338090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneVerified
	// bool BIsPhoneVerified();                                                                                                 // [0x1338060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneRequiringVerification
	// bool BIsPhoneRequiringVerification();                                                                                    // [0x1338030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneIdentifying
	// bool BIsPhoneIdentifying();                                                                                              // [0x1338000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsBehindNAT
	// bool BIsBehindNAT();                                                                                                     // [0x1337fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BeginAuthSession
	// ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID);                                    // [0x13380f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.AdvertiseGame
	// void AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32_t ServerPort);                                    // [0x1337e70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1060) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
	// class USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<char> DataToInclude, float Timeout); // [0x133efa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
	// void HandleCallback(FEncryptedAppTicketResponse& Data, bool bWasSuccessful);                                             // [0x133e2b0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1061) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
	// class USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(class UObject* WorldContextObject, FString RedirectURL, float Timeout); // [0x133f4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
	// void HandleCallback(FStoreAuthURLResponse& Data, bool bWasSuccessful);                                                   // [0x133e390] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.UserStats
/// Size: 0x0158 (344 bytes) (0x000068 - 0x000158) align 8 MaxSize: 0x0158
class UUserStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1062) /* FMulticastInlineDelegate */ __um(UserAchievementIconFetched);                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1063) /* FMulticastInlineDelegate */ __um(UserAchievementStored);                             // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1064) /* FMulticastInlineDelegate */ __um(UserStatsReceived);                                 // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1065) /* FMulticastInlineDelegate */ __um(UserStatsStored);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,1066) /* FMulticastInlineDelegate */ __um(UserStatsUnloaded);                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.UserStats.UploadLeaderboardScore
	// void UploadLeaderboardScore(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x133fdd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.UpdateAvgRateStat
	// bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);                                       // [0x133fc40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.StoreStats
	// bool StoreStats();                                                                                                       // [0x133fc10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetStatInt
	// bool SetStatInt(FString Name, int32_t Data);                                                                             // [0x133fae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetStatFloat
	// bool SetStatFloat(FString Name, float Data);                                                                             // [0x133f9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetAchievement
	// bool SetAchievement(FString Name);                                                                                       // [0x133f8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.ResetAllStats
	// bool ResetAllStats(bool bAchievementsToo);                                                                               // [0x133f820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestUserStats
	// void RequestUserStats(FDelegateProperty& Callback, FSteamID SteamID);                                                    // [0x133f620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalStats
	// void RequestGlobalStats(FDelegateProperty& Callback, int32_t HistoryDays);                                               // [0x133f2a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalAchievementPercentages
	// void RequestGlobalAchievementPercentages(FDelegateProperty& Callback);                                                   // [0x133f120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestCurrentStats
	// bool RequestCurrentStats();                                                                                              // [0x133ef70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.IndicateAchievementProgress
	// bool IndicateAchievementProgress(FString Name, int32_t CurrentProgress, int32_t MaxProgress);                            // [0x133edf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserStatInteger
	// bool GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32_t& Data);                                              // [0x133e130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserStatFloat
	// bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);                                                  // [0x133dfb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserAchievementAndUnlockTime
	// bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32_t& UnlockTime);          // [0x133ddf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserAchievement
	// bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);                                            // [0x133dc70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetStatInt
	// bool GetStatInt(FString Name, int32_t& Data);                                                                            // [0x133db30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetStatFloat
	// bool GetStatFloat(FString Name, float& Data);                                                                            // [0x133d9f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback);                                                             // [0x133d870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNumAchievements
	// int32_t GetNumAchievements();                                                                                            // [0x133d840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNextMostAchievedAchievementInfo
	// int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, FString& Name, float& Percent, bool& bAchieved);    // [0x133d6b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetMostAchievedAchievementInfo
	// int32_t GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved);                                  // [0x133d550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardSortMethod
	// ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard);                                // [0x133d4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardName
	// FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard);                                                          // [0x133d3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardEntryCount
	// int32_t GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard);                                                    // [0x133d360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardDisplayType
	// ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard);                              // [0x133d2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatInt
	// bool GetGlobalStatInt(FString StatName, int32_t& Data);                                                                  // [0x133d190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryInt
	// int32_t GetGlobalStatHistoryInt(FString StatName, int32_t HistoryDays, TArray<int32_t>& Data);                           // [0x133d000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryFloat
	// int32_t GetGlobalStatHistoryFloat(FString StatName, int32_t HistoryDays, TArray<float>& Data);                           // [0x133ce70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatFloat
	// bool GetGlobalStatFloat(FString StatName, float& Data);                                                                  // [0x133cd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetDownloadedLeaderboardEntry
	// bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32_t Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32_t> Details, TArray<int32_t>& outDetails); // [0x133cb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimitsFloat
	// bool GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress);                            // [0x133c960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimits
	// bool GetAchievementProgressLimits(FString Name, int32_t& MinProgress, int32_t& MaxProgress);                             // [0x133c7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementName
	// FString GetAchievementName(int32_t Achievement);                                                                         // [0x133c6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementIcon
	// class UTexture2D* GetAchievementIcon(FString Name);                                                                      // [0x133c600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementDisplayAttribute
	// FString GetAchievementDisplayAttribute(FString Name, FString Key);                                                       // [0x133c450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementAndUnlockTime
	// bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32_t& UnlockTime);                                    // [0x133c2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementAchievedPercent
	// bool GetAchievementAchievedPercent(FString Name, float& Percent);                                                        // [0x133c170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievement
	// bool GetAchievement(FString Name, bool& bAchieved);                                                                      // [0x133c030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType); // [0x133bc70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.FindLeaderboard
	// void FindLeaderboard(FDelegateProperty& Callback, FString LeaderboardName);                                              // [0x133b990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
	// void DownloadLeaderboardEntriesForUsers(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users); // [0x133b660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntries
	// void DownloadLeaderboardEntries(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x133b2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.ClearAchievement
	// bool ClearAchievement(FString Name);                                                                                     // [0x133b1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.AttachLeaderboardUGC
	// void AttachLeaderboardUGC(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);      // [0x133af70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1067) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
	// void HandleCallback(FLeaderboardFindResult& Data, bool bWasSuccessful);                                                  // [0x133e850] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
	// class USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, float Timeout); // [0x133baf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1068) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
	// void HandleCallback(FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);                                            // [0x133e580] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
	// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32_t RangeStart, int32_t RangeEnd, float Timeout); // [0x133b490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1069) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
	// class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(class UObject* WorldContextObject, int32_t HistoryDays, float Timeout); // [0x133f3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
	// void HandleCallback(FGlobalStatsReceived& Data, bool bWasSuccessful);                                                    // [0x133e760] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1070) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
	// class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout); // [0x133f1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
	// void HandleCallback(FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);                                      // [0x133eb10] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1071) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
	// void HandleCallback(FNumberOfCurrentPlayers& Data, bool bWasSuccessful);                                                 // [0x133ea30] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	// class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout); // [0x133d920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1072) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
	// class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails, float Timeout); // [0x133ffe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
	// void HandleCallback(FLeaderboardScoreUploaded& Data, bool bWasSuccessful);                                               // [0x133ecf0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1073) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
	// void HandleCallback(FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);                                            // [0x133e940] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	// class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout); // [0x133be40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1074) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
	// class USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x133f720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	// void HandleCallback(FRequestUserStatsData& Data, bool bWasSuccessful);                                                   // [0x133ec00] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1075) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
	// void HandleCallback(FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);                                    // [0x133e670] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
	// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout); // [0x133b7f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1076) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
	// void HandleCallback(FAttachLeaderboardUGCData& Data, bool bWasSuccessful);                                               // [0x133e490] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
	// class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout); // [0x133b0a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreVoice
/// Size: 0x04A0 (1184 bytes) (0x0004A0 - 0x0004A0) align 16 MaxSize: 0x04A0
class USteamCoreVoice : public USoundWaveProcedural
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamCoreVoice.DestroySteamCoreVoice
	// void DestroySteamCoreVoice(class USteamCoreVoice* Obj);                                                                  // [0x1343b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
	// class USteamCoreVoice* ConstructSteamCoreVoice(int32_t AudioSampleRate);                                                 // [0x1343af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreVoice.AddAudioBuffer
	// void AddAudioBuffer(TArray<char>& Buffer);                                                                               // [0x13434f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreAsyncActionListenForControllerChange : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,1077) /* FMulticastInlineDelegate */ __um(OnControllerChanged);                               // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange.ListenForControllerChange
	// class USteamCoreAsyncActionListenForControllerChange* ListenForControllerChange(class UObject* WorldContextObject);      // [0x1345ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange.HandleCallback
	// void HandleCallback(bool bIsConnected, int32_t PlatformUserId, int32_t UserId);                                          // [0x1344cf0] Final|Native|Public  
};

/// Class /Script/SteamCore.SteamUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamUtilities.WriteBytesToFile
	// bool WriteBytesToFile(bool bOverwriteIfExists, FString AbsoluteFilePath, TArray<char>& DataBuffer);                      // [0x1346a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
	// void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result);       // [0x13468f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals
	// bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B);                                         // [0x1346820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.ReadFileToBytes
	// TArray<char> ReadFileToBytes(FString AbsoluteFilePath);                                                                  // [0x1346740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_NotEquals
	// bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);                                                  // [0x1346670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
	// void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result);                   // [0x1343e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals
	// bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);                                                     // [0x1343d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.NotEqual
	// bool NotEqual(FSteamID A, FSteamID B);                                                                                   // [0x1346670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeUGCHandle
	// FSteamUGCHandle MakeUGCHandle(FString Value);                                                                            // [0x1345f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeTicketHandle
	// FSteamTicketHandle MakeTicketHandle(FString Value);                                                                      // [0x1346580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeString
	// FSteamSessionSetting MakeString(FString Value);                                                                          // [0x13463c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSteamID
	// FSteamID MakeSteamID(FString Value);                                                                                     // [0x1345f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSteamGameID
	// FSteamGameID MakeSteamGameID(FString Value);                                                                             // [0x1345f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchString
	// FSteamSessionSearchSetting MakeSearchString(FString Value);                                                              // [0x1346240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchInteger
	// FSteamSessionSearchSetting MakeSearchInteger(ESteamComparisonOp ComparisonOperator, int32_t Value);                      // [0x1346120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchBool
	// FSteamSessionSearchSetting MakeSearchBool(bool bValue);                                                                  // [0x1346040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakePublishedFileID
	// FPublishedFileID MakePublishedFileID(FString Value);                                                                     // [0x1345f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeInventoryUpdateHandle
	// FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value);                                                    // [0x1345f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeInteger
	// FSteamSessionSetting MakeInteger(int32_t Value);                                                                         // [0x1345e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeBool
	// FSteamSessionSetting MakeBool(bool bValue);                                                                              // [0x1345cd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.ListenForSteamMessages
	// void ListenForSteamMessages(FDelegateProperty& Callback);                                                                // [0x1345c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.K2_IsPlayerInSession
	// bool K2_IsPlayerInSession(int32_t LocalUserNum);                                                                         // [0x1345b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.K2_HexToString
	// FString K2_HexToString(TArray<char> Array);                                                                              // [0x13459f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.K2_HexToBytes
	// TArray<char> K2_HexToBytes(FString String);                                                                              // [0x13458c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsValid
	// bool IsValid(FSteamID SteamID);                                                                                          // [0x1345830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsUsingP2PRelays
	// bool IsUsingP2PRelays();                                                                                                 // [0x1345800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid_Exec
	// void IsUGCHandleValid_Exec(FSteamUGCHandle Handle, ESteamCoreValid& Result);                                             // [0x1345730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid
	// bool IsUGCHandleValid(FSteamUGCHandle Handle);                                                                           // [0x13456a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
	// void IsSteamTicketHandleValid_Exec(FSteamTicketHandle Handle, ESteamCoreValid& Result);                                  // [0x13455d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid
	// bool IsSteamTicketHandleValid(FSteamTicketHandle Handle);                                                                // [0x1345540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamServerInitialized
	// bool IsSteamServerInitialized();                                                                                         // [0x1345510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
	// void IsSteamInventoryUpdateHandleValid_Exec(FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result);                // [0x1345440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
	// bool IsSteamInventoryUpdateHandleValid(FSteamInventoryUpdateHandle Handle);                                              // [0x13453c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamIDValid_Exec
	// void IsSteamIDValid_Exec(FSteamID SteamID, ESteamCoreValid& Result);                                                     // [0x1345270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamAvailable
	// bool IsSteamAvailable();                                                                                                 // [0x1345240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsRecalculatingPing
	// bool IsRecalculatingPing();                                                                                              // [0x1345210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
	// void IsPublishedFileIDValid_Exec(FPublishedFileID Handle, ESteamCoreValid& Result);                                      // [0x1345140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid
	// bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID);                                                           // [0x13450b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsLobby
	// bool IsLobby(FSteamID SteamID);                                                                                          // [0x1345020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid_Exec
	// void IsGameIDValid_Exec(FSteamGameID GameID, ESteamCoreValid& Result);                                                   // [0x1344f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid
	// bool IsGameIDValid(FSteamGameID GameID);                                                                                 // [0x1344e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetType
	// ESteamAttributeType GetType(FSteamSessionSetting Settings);                                                              // [0x1344b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetString
	// bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue);                                          // [0x1344890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetSteamIdFromPlayerState
	// FSteamID GetSteamIdFromPlayerState(class APlayerState* PlayerState);                                                     // [0x1344800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetPublicIp
	// void GetPublicIp(FDelegateProperty& Callback);                                                                           // [0x1344760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetPingFromHostData
	// int32_t GetPingFromHostData(FHostPingData& Data);                                                                        // [0x13446b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetInteger
	// bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32_t& OutValue);                                         // [0x1344420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetHostPingData
	// FHostPingData GetHostPingData();                                                                                         // [0x13443a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetGameEngineInitialized
	// bool GetGameEngineInitialized();                                                                                         // [0x1344370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetBool
	// bool GetBool(FSteamSessionSetting Settings, FString& Key, bool& OutValue);                                               // [0x13440e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetAccountType
	// ESteamAccountType GetAccountType(FSteamID SteamID);                                                                      // [0x1344050] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.FromUnixTimestamp
	// FDateTime FromUnixTimestamp(FString Timestamp);                                                                          // [0x1343f10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.Equal_Exec
	// void Equal_Exec(FSteamID A, FSteamID B, ESteamCoreIdentical& Result);                                                    // [0x1343e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.Equal
	// bool Equal(FSteamID A, FSteamID B);                                                                                      // [0x1343d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.EncryptString
	// FString EncryptString(FString String);                                                                                   // [0x1343c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.ConstructServerFilter
	// class UServerFilter* ConstructServerFilter(class UObject* WorldContextObject);                                           // [0x1343a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.BreakUGCHandle
	// FString BreakUGCHandle(FSteamUGCHandle Handle);                                                                          // [0x13438c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakTicketHandle
	// FString BreakTicketHandle(FSteamTicketHandle Handle);                                                                    // [0x1343990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakSteamID
	// FString BreakSteamID(FSteamID SteamID);                                                                                  // [0x13438c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakSteamGameID
	// FString BreakSteamGameID(FSteamGameID SteamID);                                                                          // [0x13438c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakPublishedFileID
	// FString BreakPublishedFileID(FPublishedFileID FileID);                                                                   // [0x13438c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakInventoryUpdateHandle
	// FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);                                                  // [0x13437f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BP_StringToBytes
	// TArray<char> BP_StringToBytes(FString String);                                                                           // [0x13436c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BP_BytesToString
	// FString BP_BytesToString(TArray<char> Array);                                                                            // [0x13435a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SteamCore.Utils
/// Size: 0x0158 (344 bytes) (0x000068 - 0x000158) align 8 MaxSize: 0x0158
class UUtils : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1078) /* FMulticastInlineDelegate */ __um(CheckFileSignature);                                // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1079) /* FMulticastInlineDelegate */ __um(GamepadTextInputDismissed);                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1080) /* FMulticastInlineDelegate */ __um(IPCountry);                                         // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1081) /* FMulticastInlineDelegate */ __um(LowBatteryPower);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,1082) /* FMulticastInlineDelegate */ __um(SteamShutdown);                                     // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Utils.StartVRDashboard
	// void StartVRDashboard();                                                                                                 // [0x13671c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.ShowGamepadTextInput
	// bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32_t CharMax, FString ExistingText); // [0x1366f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetVRHeadsetStreamingEnabled
	// void SetVRHeadsetStreamingEnabled(bool bEnabled);                                                                        // [0x1366f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetOverlayNotificationPosition
	// void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);                                    // [0x1366ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetOverlayNotificationInset
	// void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);                                        // [0x1366de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsVRHeadsetStreamingEnabled
	// bool IsVRHeadsetStreamingEnabled();                                                                                      // [0x1366db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamRunningOnSteamDeck
	// bool IsSteamRunningOnSteamDeck();                                                                                        // [0x1366d80] Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamRunningInVR
	// bool IsSteamRunningInVR();                                                                                               // [0x1366d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamInBigPictureMode
	// bool IsSteamInBigPictureMode();                                                                                          // [0x1366d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamChinaLauncher
	// bool IsSteamChinaLauncher();                                                                                             // [0x1366cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsOverlayEnabled
	// bool IsOverlayEnabled();                                                                                                 // [0x1366cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.InitFilterText
	// bool InitFilterText();                                                                                                   // [0x1366bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSteamUILanguage
	// FString GetSteamUILanguage();                                                                                            // [0x1366af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetServerRealTime
	// int32_t GetServerRealTime();                                                                                             // [0x1366ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSecondsSinceComputerActive
	// int32_t GetSecondsSinceComputerActive();                                                                                 // [0x1366a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSecondsSinceAppActive
	// int32_t GetSecondsSinceAppActive();                                                                                      // [0x1366a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetIPCountry
	// FString GetIPCountry();                                                                                                  // [0x1366650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetIPCCallCount
	// int32_t GetIPCCallCount();                                                                                               // [0x1366620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetImageSize
	// bool GetImageSize(int32_t iImage, int32_t& Width, int32_t& Height);                                                      // [0x13667c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetImageRGBA
	// bool GetImageRGBA(int32_t iImage, TArray<char>& OutBuffer);                                                              // [0x13666d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextLength
	// int32_t GetEnteredGamepadTextLength();                                                                                   // [0x13665f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextInput
	// bool GetEnteredGamepadTextInput(FString& Text);                                                                          // [0x1366540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetCurrentBatteryPower
	// int32_t GetCurrentBatteryPower();                                                                                        // [0x1366510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetConnectedUniverse
	// ESteamUniverse GetConnectedUniverse();                                                                                   // [0x13664e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetAppID_Pure
	// int32_t GetAppID_Pure();                                                                                                 // [0x13664b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Utils.GetAppID
	// int32_t GetAppID();                                                                                                      // [0x13664b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.BOverlayNeedsPresent
	// bool BOverlayNeedsPresent();                                                                                             // [0x1366480] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Video
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVideo : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,1083) /* FMulticastInlineDelegate */ __um(GetOPFSettingsResult);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1084) /* FMulticastInlineDelegate */ __um(GetVideoURLResult);                                 // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Video.IsBroadcasting
	// bool IsBroadcasting(int32_t& NumViewers);                                                                                // [0x1366c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetVideoURL
	// void GetVideoURL(int32_t VideoAppID);                                                                                    // [0x1366b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetOPFStringForApp
	// bool GetOPFStringForApp(int32_t VideoAppID, FString& OutBuffer);                                                         // [0x1366970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetOPFSettings
	// void GetOPFSettings(int32_t VideoAppID);                                                                                 // [0x13668f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SteamCore.EndGameResultCallback
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEndGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            UniqueGameID;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamSessionSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamSessionSetting
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/SteamCore.SteamSessionResult
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 MaxSize: 0x0130
struct FSteamSessionResult
{ 
	FBlueprintSessionResult                            Result;                                                     // 0x0000   (0x0120)  
	TArray<FSteamSessionSetting>                       SessionSettings;                                            // 0x0120   (0x0010)  
};

/// Struct /Script/SteamCore.PublishedFileID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPublishedFileID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AddAppDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAddAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.UserFavoriteItemsListChanged
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUserFavoriteItemsListChanged
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bWasAddRequest;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.AddUGCDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAddUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.AssociateWithClanResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FAssociateWithClanResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamLeaderboard
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamLeaderboard
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AttachLeaderboardUGCData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttachLeaderboardUGCData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SteamID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AvatarImageLoaded
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarImageLoaded
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	class UTexture2D*                                  Image;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/SteamCore.ChangeNumOpenSlotsData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FChangeNumOpenSlotsData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.CheckFileSignature
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FCheckFileSignature
{ 
	ESteamCheckFileSignature                           CheckFileSignature;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.ClanOfficerListResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FClanOfficerListResponse
{ 
	FSteamID                                           SteamIDClan;                                                // 0x0000   (0x0008)  
	int32_t                                            Officers;                                                   // 0x0008   (0x0004)  
	bool                                               bSuccess;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.ClientGameServerDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FClientGameServerDeny
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            GameServerIP;                                               // 0x0008   (0x0010)  
	int32_t                                            GameServerPort;                                             // 0x0018   (0x0004)  
	bool                                               BSecure;                                                    // 0x001C   (0x0001)  
	ESteamDenyReason                                   Reason;                                                     // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.ComputeNewPlayerCompatibilityResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FComputeNewPlayerCompatibilityResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PlayersThatDontLikeCandidate;                               // 0x0004   (0x0004)  
	int32_t                                            PlayersThatCandidateDoesntLike;                             // 0x0008   (0x0004)  
	int32_t                                            ClanPlayersThatDontLikeCandidate;                           // 0x000C   (0x0004)  
	FSteamID                                           SteamIDCandidate;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.PartyBeaconID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPartyBeaconID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.CreateBeaconData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateBeaconData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.CreateItemResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCreateItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.CreateLobbyData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateLobbyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.UGCDeleteItemResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUGCDeleteItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.DLCInstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDLCInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.DownloadClanActivityCountsResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FDownloadClanActivityCountsResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.DownloadItemResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FDownloadItemResult
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SteamLeaderboardEntries
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamLeaderboardEntries
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloaded
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLeaderboardScoresDownloaded
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloadedForUsers
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLeaderboardScoresDownloadedForUsers
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.FriendsEnumerateFollowingList
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFriendsEnumerateFollowingList
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSteamID>                                   SteamIDs;                                                   // 0x0008   (0x0010)  
	int32_t                                            Results;                                                    // 0x0018   (0x0004)  
	int32_t                                            TotalResult;                                                // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.FavoritesListAccountsUpdated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FFavoritesListAccountsUpdated
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.FavoritesListChanged
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FFavoritesListChanged
{ 
	FString                                            IP;                                                         // 0x0000   (0x0010)  
	int32_t                                            QueryPort;                                                  // 0x0010   (0x0004)  
	int32_t                                            ConnectionPort;                                             // 0x0014   (0x0004)  
	int32_t                                            AppID;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<ESteamFavoriteFlags>                        Flags;                                                      // 0x0020   (0x0010)  
	bool                                               bAdd;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0038   (0x0008)  
};

/// Struct /Script/SteamCore.FileDetailsResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FFileDetailsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            FileSize;                                                   // 0x0004   (0x0004)  
	FString                                            SHA;                                                        // 0x0008   (0x0010)  
	TArray<int32_t>                                    Flags;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.RemoteStorageFileReadAsyncComplete
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoteStorageFileReadAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Read;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamUGCHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageFileShareResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRemoteStorageFileShareResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    File;                                                       // 0x0008   (0x0008)  
	FString                                            Filename;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.RemoteStorageFileWriteAsyncComplete
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRemoteStorageFileWriteAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.LeaderboardFindResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLeaderboardFindResult
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FindOrCreateLeaderboardData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFindOrCreateLeaderboardData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FriendRichPresenceUpdate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFriendRichPresenceUpdate
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedChatJoin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameConnectedChatJoin
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameConnectedChatLeave
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameConnectedChatLeave
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	bool                                               bKicked;                                                    // 0x0010   (0x0001)  
	bool                                               bDropped;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedClanChatMsg
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameConnectedClanChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDClanChat;                                            // 0x0008   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedFriendChatMsg
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameConnectedFriendChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameLobbyJoinRequested
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameLobbyJoinRequested
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDFriend;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameOverlayActivated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameOverlayActivated
{ 
	bool                                               bActive;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GamepadTextInputDismissed
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGamepadTextInputDismissed
{ 
	bool                                               bSubmitted;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubmittedText;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GameRichPresenceJoinRequested
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameRichPresenceJoinRequested
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	FString                                            Connect;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.GameServerChangeRequested
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerChangeRequested
{ 
	FString                                            Server;                                                     // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GameWebCallback
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameWebCallback
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.GetAppDependenciesResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGetAppDependenciesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	TArray<int32_t>                                    AppIDs;                                                     // 0x0010   (0x0010)  
	int32_t                                            NumAppDependencies;                                         // 0x0020   (0x0004)  
	int32_t                                            TotalNumAppDependencies;                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.SteamTicketHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamTicketHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GetAuthSessionTicketResponse
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGetAuthSessionTicketResponse
{ 
	FSteamTicketHandle                                 AuthTicket;                                                 // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.FriendsGetFollowerCount
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFriendsGetFollowerCount
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.NumberOfCurrentPlayers
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNumberOfCurrentPlayers
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Players;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GetOPFSettingsResult
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGetOPFSettingsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GetUserItemVoteResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVotedUp;                                                   // 0x0009   (0x0001)  
	bool                                               bVotedDown;                                                 // 0x000A   (0x0001)  
	bool                                               bVoteSkipped;                                               // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GetVideoURLResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGetVideoURLResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
	FString                                            URL;                                                        // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.GSClientApprove
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSClientApprove
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	FSteamID                                           OwnerSteamID;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GSClientDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGSClientDeny
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamDenyReason                                   DenyReason;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            OptionalText;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GSClientGroupStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGSClientGroupStatus
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGroup;                                               // 0x0008   (0x0008)  
	bool                                               bMember;                                                    // 0x0010   (0x0001)  
	bool                                               bOfficer;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.GSPolicyResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGSPolicyResponse
{ 
	bool                                               BSecure;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GSStatsUnloaded
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGSStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.ValidateAuthTicketResponse
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FValidateAuthTicketResponse
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamAuthSessionResponse                          AuthSessionResponse;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           OwnerSteamID;                                               // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.IPCFailure
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FIPCFailure
{ 
	ESteamFailureType                                  FailureType;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.IPCountry
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FIPCountry
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.FriendsIsFollowing
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFriendsIsFollowing
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	bool                                               bIsFollowing;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.ItemInstalled
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FItemInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.JoinClanChatRoomCompletionResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FJoinClanChatRoomCompletionResult
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.JoinLobbyData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FJoinLobbyData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               Blocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.JoinPartyData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FJoinPartyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
	FSteamID                                           SteamIDBeaconOwner;                                         // 0x0010   (0x0008)  
	FString                                            ConnectString;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.LicensesUpdated
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLicensesUpdated
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.LobbyChatMsg
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyChatMsg
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	ESteamChatEntryType                                ChatEntryType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            ChatID;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/SteamCore.LobbyChatUpdate
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLobbyChatUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUserChanged;                                         // 0x0008   (0x0008)  
	FSteamID                                           SteamIDMakingChange;                                        // 0x0010   (0x0008)  
	TArray<ESteamChatMemberStateChange>                ChatMemberStateChange;                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.LobbyDataUpdate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyDataUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDMember;                                              // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyEnterData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLobbyEnterData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               Blocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.LobbyGameCreated
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLobbyGameCreated
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGameServer;                                          // 0x0008   (0x0008)  
	FString                                            IP;                                                         // 0x0010   (0x0010)  
	int32_t                                            Port;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamGameID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamGameID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LobbyInviteData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyInviteData
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
	FSteamGameID                                       GameID;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.LobbyKickedData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyKickedData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDAdmin;                                               // 0x0008   (0x0008)  
	bool                                               bKickedDueToDisconnect;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LowBatteryPower
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FLowBatteryPower
{ 
	int32_t                                            MinutesBatteryLeft;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.MicroTxnAuthorizationResponse
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMicroTxnAuthorizationResponse
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            OrderID;                                                    // 0x0008   (0x0010)  
	bool                                               bAuthorized;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.P2PSessionConnectFail
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FP2PSessionConnectFail
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.P2PSessionRequest
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FP2PSessionRequest
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.PersonaStateChange
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPersonaStateChange
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	TArray<ESteamPersonaChange>                        Flags;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamServerAddr
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FSteamServerAddr
{ 
	FString                                            IP;                                                         // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	int32_t                                            QueryPort;                                                  // 0x0014   (0x0004)  
	FString                                            ConnectionAddressString;                                    // 0x0018   (0x0010)  
	FString                                            SteamP2PAddr;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SteamCore.GameServerItem
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameServerItem
{ 
	FString                                            ServerName;                                                 // 0x0000   (0x0010)  
	FString                                            MapName;                                                    // 0x0010   (0x0010)  
	FString                                            GameDescription;                                            // 0x0020   (0x0010)  
	FString                                            GameTags;                                                   // 0x0030   (0x0010)  
	FSteamServerAddr                                   SteamServerAddr;                                            // 0x0040   (0x0038)  
	int32_t                                            Ping;                                                       // 0x0078   (0x0004)  
	int32_t                                            Players;                                                    // 0x007C   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0080   (0x0004)  
	int32_t                                            BotPlayers;                                                 // 0x0084   (0x0004)  
	int32_t                                            ServerVersion;                                              // 0x0088   (0x0004)  
	bool                                               bPassword;                                                  // 0x008C   (0x0001)  
	bool                                               BSecure;                                                    // 0x008D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x22];                                      // 0x008E   (0x0022)  MISSED
};

/// Struct /Script/SteamCore.PlaybackStatusHasChanged
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FPlaybackStatusHasChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileSubscribed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStoragePublishedFileSubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileUnsubscribed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStoragePublishedFileUnsubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageSubscribePublishedFileResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStorageSubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageUnsubscribePublishedFileResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRemoteStorageUnsubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoveAppDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoveAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoveUGCDependencyResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRemoveUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.SteamInventoryEligiblePromoItemDefIDs
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamInventoryEligiblePromoItemDefIDs
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            NumEligiblePromoItemDefs;                                   // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.EncryptedAppTicketResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FEncryptedAppTicketResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GlobalAchievementPercentagesReady
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGlobalAchievementPercentagesReady
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.GlobalStatsReceived
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGlobalStatsReceived
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyMatchList
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FLobbyMatchList
{ 
	int32_t                                            LobbiesMatching;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.RequestUserStatsData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRequestUserStatsData
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.ReservationNotificationData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FReservationNotificationData
{ 
	FPartyBeaconID                                     BeaconID;                                                   // 0x0000   (0x0008)  
	FSteamID                                           SteamIDJoiner;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.ScreenshotHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FScreenshotHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotReady
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FScreenshotReady
{ 
	FScreenshotHandle                                  Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotRequested
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FScreenshotRequested
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.UGCQueryHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCQueryHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCQueryCompleted
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamUGCQueryCompleted
{ 
	FUGCQueryHandle                                    Handle;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NumResultsReturned;                                         // 0x000C   (0x0004)  
	int32_t                                            TotalMatchingResults;                                       // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.GSStatsReceived
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSStatsReceived
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameServerRule
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerRule
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GSStatsStored
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGSStatsStored
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.SetPersonaNameResponse
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FSetPersonaNameResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bSuccess;                                                   // 0x0001   (0x0001)  
	bool                                               bLocalSuccess;                                              // 0x0002   (0x0001)  
};

/// Struct /Script/SteamCore.SetUserItemVoteResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVoteUp;                                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.StartPlaytimeTrackingResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FStartPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamAppInstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamAppInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamAppUninstalled
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamAppUninstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryResult
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamInventoryResult
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryFullUpdate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamInventoryFullUpdate
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryRequestPricesResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamInventoryRequestPricesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Currency;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamInventoryResultReady
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSteamInventoryResultReady
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryStartPurchaseResult
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamInventoryStartPurchaseResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            OrderID;                                                    // 0x0008   (0x0010)  
	FString                                            TransactionId;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionConnected
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamRemotePlaySessionConnected
{ 
	int32_t                                            SessionId;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionDisconnected
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamRemotePlaySessionDisconnected
{ 
	int32_t                                            SessionId;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamServerConnectFailure
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FSteamServerConnectFailure
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bStillRetrying;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.SteamServersConnected
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamServersConnected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamServersDisconnected
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamServersDisconnected
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamShutdown
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamShutdown
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.StopPlaytimeTrackingResult
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FStopPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.StoreAuthURLResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FStoreAuthURLResponse
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SubmitItemUpdateResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSubmitItemUpdateResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageDownloadUGCResult
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRemoteStorageDownloadUGCResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    FileHandle;                                                 // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	int32_t                                            SizeInBytes;                                                // 0x0014   (0x0004)  
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0028   (0x0008)  
};

/// Struct /Script/SteamCore.LeaderboardScoreUploaded
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLeaderboardScoreUploaded
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0008   (0x0008)  
	int32_t                                            Score;                                                      // 0x0010   (0x0004)  
	bool                                               bScoreChanged;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            GlobalRankNew;                                              // 0x0018   (0x0004)  
	int32_t                                            GlobalRankPrevious;                                         // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.UserAchievementIconFetched
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FUserAchievementIconFetched
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	FString                                            AchievementName;                                            // 0x0008   (0x0010)  
	bool                                               bAchieved;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UTexture2D*                                  Icon;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.UserAchievementStored
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FUserAchievementStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	bool                                               bGroupAchievement;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            AchievementName;                                            // 0x0010   (0x0010)  
	int32_t                                            CurrentProgress;                                            // 0x0020   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.UserStatsReceived
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FUserStatsReceived
{ 
	FSteamID                                           GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.UserStatsStored
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUserStatsStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.UserStatsUnloaded
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUserStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.VolumeHasChanged
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FVolumeHasChanged
{ 
	float                                              Volume;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameFinalResultCallback
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRequestPlayersForGameFinalResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
	FString                                            UniqueGameID;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameProgressCallback
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRequestPlayersForGameProgressCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameResultCallback
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRequestPlayersForGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            SearchID;                                                   // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayerFound;                                         // 0x0018   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0020   (0x0008)  
	ESteamPlayerAcceptState                            PlayerAcceptState;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            PlayerIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            TotalPlayersFound;                                          // 0x0030   (0x0004)  
	int32_t                                            TotalPlayersAcceptedGame;                                   // 0x0034   (0x0004)  
	int32_t                                            SuggestedTeamIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            UniqueGameID;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/SteamCore.SearchForGameProgressCallback
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSearchForGameProgressCallback
{ 
	FString                                            SearchID;                                                   // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FSteamID                                           LobbyId;                                                    // 0x0018   (0x0008)  
	FSteamID                                           SteamIDEndedSearch;                                         // 0x0020   (0x0008)  
	int32_t                                            SecondsRemainingEstimate;                                   // 0x0028   (0x0004)  
	int32_t                                            PlayersSearching;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/SteamCore.SearchForGameResultCallback
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSearchForGameResultCallback
{ 
	FString                                            SearchID;                                                   // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            CountPlayersInGame;                                         // 0x0014   (0x0004)  
	int32_t                                            CountAcceptedGame;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSteamID                                           SteamIDHost;                                                // 0x0020   (0x0008)  
	bool                                               bFinalCallback;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SubmitPlayerResultResultCallback
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubmitPlayerResultResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            UniqueGameID;                                               // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayer;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SteamCore.SteamFriendsGroupID
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FSteamFriendsGroupID
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.InputAnalogActionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FInputAnalogActionData
{ 
	ESteamCoreInputSourceMode                          Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              X;                                                          // 0x0004   (0x0004)  
	float                                              Y;                                                          // 0x0008   (0x0004)  
	bool                                               bActive;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.InputDigitalActionData
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FInputDigitalActionData
{ 
	bool                                               bState;                                                     // 0x0000   (0x0001)  
	bool                                               bActive;                                                    // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.InputMotionData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FInputMotionData
{ 
	float                                              RotQuatX;                                                   // 0x0000   (0x0004)  
	float                                              RotQuatY;                                                   // 0x0004   (0x0004)  
	float                                              RotQuatZ;                                                   // 0x0008   (0x0004)  
	float                                              RotQuatW;                                                   // 0x000C   (0x0004)  
	float                                              PosAccelX;                                                  // 0x0010   (0x0004)  
	float                                              PosAccelY;                                                  // 0x0014   (0x0004)  
	float                                              PosAccelZ;                                                  // 0x0018   (0x0004)  
	float                                              RotVelX;                                                    // 0x001C   (0x0004)  
	float                                              RotVelY;                                                    // 0x0020   (0x0004)  
	float                                              RotVelZ;                                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.InputHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputActionSetHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputActionSetHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputDigitalActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputDigitalActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputAnalogActionHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FInputAnalogActionHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamItemInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamItemInstanceID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamItemDef
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSteamItemDef
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamItemDetails
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamItemDetails
{ 
	FSteamItemInstanceID                               InstanceId;                                                 // 0x0000   (0x0008)  
	FSteamItemDef                                      Definition;                                                 // 0x0008   (0x0004)  
	int32_t                                            Quantity;                                                   // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,1085) /* TArray<TEnumAsByte<ESteamCoreItemFlags>> */ __um(Flags);                             // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.SteamP2PSessionState
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamP2PSessionState
{ 
	bool                                               bConnectionActive;                                          // 0x0000   (0x0001)  
	bool                                               bConnecting;                                                // 0x0001   (0x0001)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0002   (0x0001)  
	bool                                               bUsingRelay;                                                // 0x0003   (0x0001)  
	int32_t                                            BytesQueuedForSend;                                         // 0x0004   (0x0004)  
	int32_t                                            PacketsQueuedForSend;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            RemoteIP;                                                   // 0x0010   (0x0010)  
	int32_t                                            RemotePort;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamNetworkPingLocation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSteamNetworkPingLocation
{ 
	FString                                            Location;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamParentalSettingsChanged
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSteamParentalSettingsChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamPartyBeaconLocation
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSteamPartyBeaconLocation
{ 
	ESteamPartiesBeaconLocationType                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            LocationId;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.UGCFileWriteStreamHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCFileWriteStreamHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryUpdateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSteamInventoryUpdateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.HostPingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FHostPingData
{ 
	FString                                            HostString;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamSessionSearchSetting
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamSessionSearchSetting
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCDetails
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FSteamUGCDetails
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	ESteamWorkshopFileType                             FileType;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CreatorAppID;                                               // 0x000C   (0x0004)  
	int32_t                                            ConsumerAppID;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0018   (0x0010)  
	FString                                            Description;                                                // 0x0028   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0038   (0x0008)  
	int32_t                                            TimeCreated;                                                // 0x0040   (0x0004)  
	int32_t                                            TimeUpdated;                                                // 0x0044   (0x0004)  
	int32_t                                            TimeAddedToUserList;                                        // 0x0048   (0x0004)  
	ESteamRemoteStoragePublishedFileVisibility         Visibility;                                                 // 0x004C   (0x0001)  
	bool                                               bBanned;                                                    // 0x004D   (0x0001)  
	bool                                               bAcceptedForUse;                                            // 0x004E   (0x0001)  
	bool                                               bTagsTruncated;                                             // 0x004F   (0x0001)  
	TArray<FString>                                    Tags;                                                       // 0x0050   (0x0010)  
	FSteamUGCHandle                                    File;                                                       // 0x0060   (0x0008)  
	FSteamUGCHandle                                    PreviewFile;                                                // 0x0068   (0x0008)  
	FString                                            Filename;                                                   // 0x0070   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0080   (0x0004)  
	int32_t                                            PreviewFileSize;                                            // 0x0084   (0x0004)  
	FString                                            URL;                                                        // 0x0088   (0x0010)  
	int32_t                                            VotesUp;                                                    // 0x0098   (0x0004)  
	int32_t                                            VotesDown;                                                  // 0x009C   (0x0004)  
	float                                              Score;                                                      // 0x00A0   (0x0004)  
	int32_t                                            NumChildren;                                                // 0x00A4   (0x0004)  
};

/// Struct /Script/SteamCore.UGCUpdateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUGCUpdateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamLeaderboardEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamLeaderboardEntry
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	int32_t                                            GlobalRank;                                                 // 0x0008   (0x0004)  
	int32_t                                            Score;                                                      // 0x000C   (0x0004)  
	int32_t                                            Details;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FSteamUGCHandle                                    UGCHandle;                                                  // 0x0018   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USteamCoreSubsystem) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAppList) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UApps) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(USteamCoreAsyncAction) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(USteamCoreAppsAsyncActionGetFileDetails) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(ASteamCoreGameMode) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(USteamCore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamCoreSettings) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UFriends) == 0x0338); // 824 bytes (0x000068 - 0x000338)
static_assert(sizeof(USteamCoreFriendsAsyncActionSetPersonaName) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionDownloadClanActivityCounts) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionRequestClanOfficerList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionJoinClanChatRoom) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionEnumerateFollowingList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionIsFollowing) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionGetFollowerCount) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreFriendsAsyncActionRequestUserInformation) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamGameSearch) == 0x01B8); // 440 bytes (0x000068 - 0x0001B8)
static_assert(sizeof(USteamGameServer) == 0x0158); // 344 bytes (0x000068 - 0x000158)
static_assert(sizeof(UGameServerStats) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(UInput) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UInventory) == 0x0188); // 392 bytes (0x000068 - 0x000188)
static_assert(sizeof(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreInventoryAsyncActionRequestPricesResult) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreInventoryAsyncActionStartPurchaseResult) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UMatchmaking) == 0x0218); // 536 bytes (0x000068 - 0x000218)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionCreateLobby) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionRequestLobbyList) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingAsyncActionJoinLobby) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreCreateSession) == 0x0158); // 344 bytes (0x000038 - 0x000158)
static_assert(sizeof(USteamCoreFindSession) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(USteamCoreDestroySession) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamCoreUpdateSession) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UMatchmakingServers) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionPingServer) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionRequestServerList) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(USteamCoreMatchmakingServersAsyncActionServerRules) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UServerFilter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMusic) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UNetworking) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UNetworkingUtils) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UParentalSettings) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(USteamParties) == 0x0188); // 392 bytes (0x000068 - 0x000188)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionJoinParty) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionCreateBeacon) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(URemotePlay) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(URemoteStorage) == 0x0128); // 296 bytes (0x000068 - 0x000128)
static_assert(sizeof(UScreenshots) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UUGC) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionStopPlaytimeTracking) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionStartPlaytimeTracking) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionUnsubscribeItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSubscribeItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveItemFromFavorites) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddItemToFavorites) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionGetUserItemVote) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSetUserItemVote) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSubmitItemUpdate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionCreateItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionSendQueryUGCRequest) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddAppDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveAppDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionAddUGCDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionRemoveUGCDependency) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionDeleteItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionGetAppDependencies) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUGCAsyncActionDownloadItem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UUser) == 0x0278); // 632 bytes (0x000068 - 0x000278)
static_assert(sizeof(USteamCoreUserAsyncActionRequestEncryptedAppTicket) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserAsyncActionRequestStoreAuthURL) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UUserStats) == 0x0158); // 344 bytes (0x000068 - 0x000158)
static_assert(sizeof(USteamCoreUserStatsAsyncActionFindLeaderboard) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionUploadLeaderboardScore) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionRequestUserStats) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamCoreVoice) == 0x04A0); // 1184 bytes (0x0004A0 - 0x0004A0)
static_assert(sizeof(USteamCoreAsyncActionListenForControllerChange) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(USteamUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUtils) == 0x0158); // 344 bytes (0x000068 - 0x000158)
static_assert(sizeof(UVideo) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FEndGameResultCallback) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamSessionSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamSessionResult) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FPublishedFileID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAddAppDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUserFavoriteItemsListChanged) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAddUGCDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssociateWithClanResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamLeaderboard) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAttachLeaderboardUGCData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAvatarImageLoaded) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FChangeNumOpenSlotsData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FCheckFileSignature) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FClanOfficerListResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClientGameServerDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FComputeNewPlayerCompatibilityResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPartyBeaconID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCreateBeaconData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCreateItemResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCreateLobbyData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUGCDeleteItemResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDLCInstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDownloadClanActivityCountsResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDownloadItemResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamLeaderboardEntries) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLeaderboardScoresDownloaded) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLeaderboardScoresDownloadedForUsers) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFriendsEnumerateFollowingList) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFavoritesListAccountsUpdated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFavoritesListChanged) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FFileDetailsResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRemoteStorageFileReadAsyncComplete) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamUGCHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRemoteStorageFileShareResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRemoteStorageFileWriteAsyncComplete) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLeaderboardFindResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFindOrCreateLeaderboardData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFriendRichPresenceUpdate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameConnectedChatJoin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameConnectedChatLeave) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameConnectedClanChatMsg) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameConnectedFriendChatMsg) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameLobbyJoinRequested) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameOverlayActivated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGamepadTextInputDismissed) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameRichPresenceJoinRequested) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameServerChangeRequested) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameWebCallback) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetAppDependenciesResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamTicketHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGetAuthSessionTicketResponse) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFriendsGetFollowerCount) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNumberOfCurrentPlayers) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGetOPFSettingsResult) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGetUserItemVoteResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetVideoURLResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGSClientApprove) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGSClientDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGSClientGroupStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGSPolicyResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGSStatsUnloaded) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FValidateAuthTicketResponse) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FIPCFailure) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FIPCountry) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFriendsIsFollowing) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FItemInstalled) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FJoinClanChatRoomCompletionResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FJoinLobbyData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FJoinPartyData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLicensesUpdated) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLobbyChatMsg) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyChatUpdate) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLobbyDataUpdate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyEnterData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLobbyGameCreated) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamGameID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLobbyInviteData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLobbyKickedData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLowBatteryPower) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMicroTxnAuthorizationResponse) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FP2PSessionConnectFail) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FP2PSessionRequest) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPersonaStateChange) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamServerAddr) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameServerItem) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FPlaybackStatusHasChanged) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRemoteStoragePublishedFileSubscribed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStoragePublishedFileUnsubscribed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStorageSubscribePublishedFileResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStorageUnsubscribePublishedFileResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoveAppDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRemoveUGCDependencyResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamInventoryEligiblePromoItemDefIDs) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEncryptedAppTicketResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGlobalAchievementPercentagesReady) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGlobalStatsReceived) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLobbyMatchList) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRequestUserStatsData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReservationNotificationData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FScreenshotHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FScreenshotReady) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FScreenshotRequested) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FUGCQueryHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamUGCQueryCompleted) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGSStatsReceived) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameServerRule) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGSStatsStored) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSetPersonaNameResponse) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FSetUserItemVoteResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStartPlaytimeTrackingResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamAppInstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamAppUninstalled) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamInventoryResult) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamInventoryFullUpdate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamInventoryRequestPricesResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamInventoryResultReady) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamInventoryStartPurchaseResult) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamRemotePlaySessionConnected) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamRemotePlaySessionDisconnected) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamServerConnectFailure) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FSteamServersConnected) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamServersDisconnected) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamShutdown) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FStopPlaytimeTrackingResult) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FStoreAuthURLResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubmitItemUpdateResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteStorageDownloadUGCResult) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLeaderboardScoreUploaded) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUserAchievementIconFetched) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUserAchievementStored) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUserStatsReceived) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUserStatsStored) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUserStatsUnloaded) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVolumeHasChanged) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRequestPlayersForGameFinalResultCallback) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRequestPlayersForGameProgressCallback) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRequestPlayersForGameResultCallback) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSearchForGameProgressCallback) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSearchForGameResultCallback) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSubmitPlayerResultResultCallback) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamFriendsGroupID) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FInputAnalogActionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInputDigitalActionData) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FInputMotionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FInputHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputActionSetHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputDigitalActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputAnalogActionHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamItemInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamItemDef) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSteamItemDetails) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamP2PSessionState) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamNetworkPingLocation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamParentalSettingsChanged) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamPartyBeaconLocation) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUGCFileWriteStreamHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamInventoryUpdateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHostPingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamSessionSearchSetting) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamUGCDetails) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FUGCUpdateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamLeaderboardEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(USteamCoreAsyncAction, m_WorldContextObject) == 0x0030);
static_assert(offsetof(USteamCoreSettings, GameVersion) == 0x0050);
static_assert(offsetof(FEndGameResultCallback, Result) == 0x0000);
static_assert(offsetof(FEndGameResultCallback, UniqueGameID) == 0x0008);
static_assert(offsetof(FSteamSessionResult, Result) == 0x0000);
static_assert(offsetof(FSteamSessionResult, SessionSettings) == 0x0120);
static_assert(offsetof(FAddAppDependencyResult, Result) == 0x0000);
static_assert(offsetof(FAddAppDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FUserFavoriteItemsListChanged, PublishedFileID) == 0x0000);
static_assert(offsetof(FUserFavoriteItemsListChanged, Result) == 0x0008);
static_assert(offsetof(FAddUGCDependencyResult, Result) == 0x0000);
static_assert(offsetof(FAddUGCDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FAddUGCDependencyResult, ChildPublishedFileId) == 0x0010);
static_assert(offsetof(FAssociateWithClanResult, Result) == 0x0000);
static_assert(offsetof(FAttachLeaderboardUGCData, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FAttachLeaderboardUGCData, Result) == 0x0008);
static_assert(offsetof(FAvatarImageLoaded, SteamID) == 0x0000);
static_assert(offsetof(FAvatarImageLoaded, Image) == 0x0008);
static_assert(offsetof(FChangeNumOpenSlotsData, Result) == 0x0000);
static_assert(offsetof(FCheckFileSignature, CheckFileSignature) == 0x0000);
static_assert(offsetof(FClanOfficerListResponse, SteamIDClan) == 0x0000);
static_assert(offsetof(FClientGameServerDeny, GameServerIP) == 0x0008);
static_assert(offsetof(FClientGameServerDeny, Reason) == 0x001D);
static_assert(offsetof(FComputeNewPlayerCompatibilityResult, Result) == 0x0000);
static_assert(offsetof(FComputeNewPlayerCompatibilityResult, SteamIDCandidate) == 0x0010);
static_assert(offsetof(FCreateBeaconData, Result) == 0x0000);
static_assert(offsetof(FCreateBeaconData, BeaconID) == 0x0008);
static_assert(offsetof(FCreateItemResult, Result) == 0x0000);
static_assert(offsetof(FCreateItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FCreateLobbyData, Result) == 0x0000);
static_assert(offsetof(FCreateLobbyData, SteamIDLobby) == 0x0008);
static_assert(offsetof(FUGCDeleteItemResult, Result) == 0x0000);
static_assert(offsetof(FUGCDeleteItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FDownloadItemResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FDownloadItemResult, Result) == 0x0010);
static_assert(offsetof(FLeaderboardScoresDownloaded, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FLeaderboardScoresDownloaded, SteamLeaderboardEntries) == 0x0008);
static_assert(offsetof(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries) == 0x0008);
static_assert(offsetof(FFriendsEnumerateFollowingList, Result) == 0x0000);
static_assert(offsetof(FFriendsEnumerateFollowingList, SteamIDs) == 0x0008);
static_assert(offsetof(FFavoritesListAccountsUpdated, Result) == 0x0000);
static_assert(offsetof(FFavoritesListChanged, IP) == 0x0000);
static_assert(offsetof(FFavoritesListChanged, Flags) == 0x0020);
static_assert(offsetof(FFavoritesListChanged, SteamID) == 0x0038);
static_assert(offsetof(FFileDetailsResult, Result) == 0x0000);
static_assert(offsetof(FFileDetailsResult, SHA) == 0x0008);
static_assert(offsetof(FFileDetailsResult, Flags) == 0x0018);
static_assert(offsetof(FRemoteStorageFileReadAsyncComplete, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageFileShareResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageFileShareResult, File) == 0x0008);
static_assert(offsetof(FRemoteStorageFileShareResult, Filename) == 0x0010);
static_assert(offsetof(FRemoteStorageFileWriteAsyncComplete, Result) == 0x0000);
static_assert(offsetof(FLeaderboardFindResult, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FFindOrCreateLeaderboardData, SteamLeaderboard) == 0x0000);
static_assert(offsetof(FFriendRichPresenceUpdate, SteamIDFriend) == 0x0000);
static_assert(offsetof(FGameConnectedChatJoin, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FGameConnectedChatJoin, SteamIDUser) == 0x0008);
static_assert(offsetof(FGameConnectedChatLeave, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FGameConnectedChatLeave, SteamIDUser) == 0x0008);
static_assert(offsetof(FGameConnectedClanChatMsg, SteamIDUser) == 0x0000);
static_assert(offsetof(FGameConnectedClanChatMsg, SteamIDClanChat) == 0x0008);
static_assert(offsetof(FGameConnectedFriendChatMsg, SteamIDUser) == 0x0000);
static_assert(offsetof(FGameLobbyJoinRequested, SteamIDLobby) == 0x0000);
static_assert(offsetof(FGameLobbyJoinRequested, SteamIDFriend) == 0x0008);
static_assert(offsetof(FGameRichPresenceJoinRequested, SteamIDFriend) == 0x0000);
static_assert(offsetof(FGameRichPresenceJoinRequested, Connect) == 0x0008);
static_assert(offsetof(FGameServerChangeRequested, Server) == 0x0000);
static_assert(offsetof(FGameServerChangeRequested, Password) == 0x0010);
static_assert(offsetof(FGameWebCallback, URL) == 0x0000);
static_assert(offsetof(FGetAppDependenciesResult, Result) == 0x0000);
static_assert(offsetof(FGetAppDependenciesResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FGetAppDependenciesResult, AppIDs) == 0x0010);
static_assert(offsetof(FGetAuthSessionTicketResponse, AuthTicket) == 0x0000);
static_assert(offsetof(FGetAuthSessionTicketResponse, Result) == 0x0004);
static_assert(offsetof(FFriendsGetFollowerCount, Result) == 0x0000);
static_assert(offsetof(FFriendsGetFollowerCount, SteamID) == 0x0008);
static_assert(offsetof(FGetOPFSettingsResult, Result) == 0x0000);
static_assert(offsetof(FGetUserItemVoteResult, PublishedFileID) == 0x0000);
static_assert(offsetof(FGetUserItemVoteResult, Result) == 0x0008);
static_assert(offsetof(FGetVideoURLResult, Result) == 0x0000);
static_assert(offsetof(FGetVideoURLResult, URL) == 0x0008);
static_assert(offsetof(FGSClientApprove, SteamID) == 0x0000);
static_assert(offsetof(FGSClientApprove, OwnerSteamID) == 0x0008);
static_assert(offsetof(FGSClientDeny, SteamID) == 0x0000);
static_assert(offsetof(FGSClientDeny, DenyReason) == 0x0008);
static_assert(offsetof(FGSClientDeny, OptionalText) == 0x0010);
static_assert(offsetof(FGSClientGroupStatus, SteamIDUser) == 0x0000);
static_assert(offsetof(FGSClientGroupStatus, SteamIDGroup) == 0x0008);
static_assert(offsetof(FGSStatsUnloaded, SteamIDUser) == 0x0000);
static_assert(offsetof(FValidateAuthTicketResponse, SteamID) == 0x0000);
static_assert(offsetof(FValidateAuthTicketResponse, AuthSessionResponse) == 0x0008);
static_assert(offsetof(FValidateAuthTicketResponse, OwnerSteamID) == 0x0010);
static_assert(offsetof(FIPCFailure, FailureType) == 0x0000);
static_assert(offsetof(FFriendsIsFollowing, Result) == 0x0000);
static_assert(offsetof(FFriendsIsFollowing, SteamID) == 0x0008);
static_assert(offsetof(FItemInstalled, PublishedFileID) == 0x0008);
static_assert(offsetof(FJoinClanChatRoomCompletionResult, SteamIDClanChat) == 0x0000);
static_assert(offsetof(FJoinClanChatRoomCompletionResult, ChatRoomEnterResponse) == 0x0008);
static_assert(offsetof(FJoinLobbyData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FJoinLobbyData, ChatRoomEnterResponse) == 0x0009);
static_assert(offsetof(FJoinPartyData, Result) == 0x0000);
static_assert(offsetof(FJoinPartyData, BeaconID) == 0x0008);
static_assert(offsetof(FJoinPartyData, SteamIDBeaconOwner) == 0x0010);
static_assert(offsetof(FJoinPartyData, ConnectString) == 0x0018);
static_assert(offsetof(FLobbyChatMsg, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyChatMsg, SteamIDUser) == 0x0008);
static_assert(offsetof(FLobbyChatMsg, ChatEntryType) == 0x0010);
static_assert(offsetof(FLobbyChatUpdate, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyChatUpdate, SteamIDUserChanged) == 0x0008);
static_assert(offsetof(FLobbyChatUpdate, SteamIDMakingChange) == 0x0010);
static_assert(offsetof(FLobbyChatUpdate, ChatMemberStateChange) == 0x0018);
static_assert(offsetof(FLobbyDataUpdate, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyDataUpdate, SteamIDMember) == 0x0008);
static_assert(offsetof(FLobbyEnterData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyEnterData, ChatRoomEnterResponse) == 0x0009);
static_assert(offsetof(FLobbyGameCreated, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyGameCreated, SteamIDGameServer) == 0x0008);
static_assert(offsetof(FLobbyGameCreated, IP) == 0x0010);
static_assert(offsetof(FLobbyInviteData, SteamIDUser) == 0x0000);
static_assert(offsetof(FLobbyInviteData, SteamIDLobby) == 0x0008);
static_assert(offsetof(FLobbyInviteData, GameID) == 0x0010);
static_assert(offsetof(FLobbyKickedData, SteamIDLobby) == 0x0000);
static_assert(offsetof(FLobbyKickedData, SteamIDAdmin) == 0x0008);
static_assert(offsetof(FMicroTxnAuthorizationResponse, OrderID) == 0x0008);
static_assert(offsetof(FP2PSessionConnectFail, SteamIDRemote) == 0x0000);
static_assert(offsetof(FP2PSessionConnectFail, P2PSessionError) == 0x0008);
static_assert(offsetof(FP2PSessionRequest, SteamIDRemote) == 0x0000);
static_assert(offsetof(FPersonaStateChange, SteamID) == 0x0000);
static_assert(offsetof(FPersonaStateChange, Flags) == 0x0008);
static_assert(offsetof(FSteamServerAddr, IP) == 0x0000);
static_assert(offsetof(FSteamServerAddr, ConnectionAddressString) == 0x0018);
static_assert(offsetof(FSteamServerAddr, SteamP2PAddr) == 0x0028);
static_assert(offsetof(FGameServerItem, ServerName) == 0x0000);
static_assert(offsetof(FGameServerItem, MapName) == 0x0010);
static_assert(offsetof(FGameServerItem, GameDescription) == 0x0020);
static_assert(offsetof(FGameServerItem, GameTags) == 0x0030);
static_assert(offsetof(FGameServerItem, SteamServerAddr) == 0x0040);
static_assert(offsetof(FRemoteStoragePublishedFileSubscribed, PublishedFileID) == 0x0000);
static_assert(offsetof(FRemoteStoragePublishedFileUnsubscribed, PublishedFileID) == 0x0000);
static_assert(offsetof(FRemoteStorageSubscribePublishedFileResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageSubscribePublishedFileResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoteStorageUnsubscribePublishedFileResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageUnsubscribePublishedFileResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoveAppDependencyResult, Result) == 0x0000);
static_assert(offsetof(FRemoveAppDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoveUGCDependencyResult, Result) == 0x0000);
static_assert(offsetof(FRemoveUGCDependencyResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoveUGCDependencyResult, ChildPublishedFileId) == 0x0010);
static_assert(offsetof(FSteamInventoryEligiblePromoItemDefIDs, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryEligiblePromoItemDefIDs, SteamID) == 0x0008);
static_assert(offsetof(FEncryptedAppTicketResponse, Result) == 0x0000);
static_assert(offsetof(FGlobalAchievementPercentagesReady, GameID) == 0x0000);
static_assert(offsetof(FGlobalAchievementPercentagesReady, Result) == 0x0008);
static_assert(offsetof(FGlobalStatsReceived, GameID) == 0x0000);
static_assert(offsetof(FGlobalStatsReceived, Result) == 0x0008);
static_assert(offsetof(FRequestUserStatsData, GameID) == 0x0000);
static_assert(offsetof(FRequestUserStatsData, Result) == 0x0008);
static_assert(offsetof(FRequestUserStatsData, SteamIDUser) == 0x0010);
static_assert(offsetof(FReservationNotificationData, BeaconID) == 0x0000);
static_assert(offsetof(FReservationNotificationData, SteamIDJoiner) == 0x0008);
static_assert(offsetof(FScreenshotReady, Handle) == 0x0000);
static_assert(offsetof(FScreenshotReady, Result) == 0x0004);
static_assert(offsetof(FSteamUGCQueryCompleted, Handle) == 0x0000);
static_assert(offsetof(FSteamUGCQueryCompleted, Result) == 0x0008);
static_assert(offsetof(FGSStatsReceived, Result) == 0x0000);
static_assert(offsetof(FGSStatsReceived, SteamIDUser) == 0x0008);
static_assert(offsetof(FGameServerRule, Name) == 0x0000);
static_assert(offsetof(FGameServerRule, Value) == 0x0010);
static_assert(offsetof(FGSStatsStored, Result) == 0x0000);
static_assert(offsetof(FGSStatsStored, SteamIDUser) == 0x0008);
static_assert(offsetof(FSetPersonaNameResponse, Result) == 0x0000);
static_assert(offsetof(FSetUserItemVoteResult, PublishedFileID) == 0x0000);
static_assert(offsetof(FSetUserItemVoteResult, Result) == 0x0008);
static_assert(offsetof(FStartPlaytimeTrackingResult, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryFullUpdate, Handle) == 0x0000);
static_assert(offsetof(FSteamInventoryRequestPricesResult, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryRequestPricesResult, Currency) == 0x0008);
static_assert(offsetof(FSteamInventoryResultReady, Handle) == 0x0000);
static_assert(offsetof(FSteamInventoryResultReady, Result) == 0x0004);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, Result) == 0x0000);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, OrderID) == 0x0008);
static_assert(offsetof(FSteamInventoryStartPurchaseResult, TransactionId) == 0x0018);
static_assert(offsetof(FSteamServerConnectFailure, Result) == 0x0000);
static_assert(offsetof(FSteamServersDisconnected, Result) == 0x0000);
static_assert(offsetof(FStopPlaytimeTrackingResult, Result) == 0x0000);
static_assert(offsetof(FStoreAuthURLResponse, URL) == 0x0000);
static_assert(offsetof(FSubmitItemUpdateResult, Result) == 0x0000);
static_assert(offsetof(FSubmitItemUpdateResult, PublishedFileID) == 0x0008);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, Result) == 0x0000);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, FileHandle) == 0x0008);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, Filename) == 0x0018);
static_assert(offsetof(FRemoteStorageDownloadUGCResult, SteamIDOwner) == 0x0028);
static_assert(offsetof(FLeaderboardScoreUploaded, SteamLeaderboard) == 0x0008);
static_assert(offsetof(FUserAchievementIconFetched, GameID) == 0x0000);
static_assert(offsetof(FUserAchievementIconFetched, AchievementName) == 0x0008);
static_assert(offsetof(FUserAchievementIconFetched, Icon) == 0x0020);
static_assert(offsetof(FUserAchievementStored, GameID) == 0x0000);
static_assert(offsetof(FUserAchievementStored, AchievementName) == 0x0010);
static_assert(offsetof(FUserStatsReceived, GameID) == 0x0000);
static_assert(offsetof(FUserStatsReceived, Result) == 0x0008);
static_assert(offsetof(FUserStatsReceived, SteamID) == 0x0010);
static_assert(offsetof(FUserStatsStored, GameID) == 0x0000);
static_assert(offsetof(FUserStatsStored, Result) == 0x0008);
static_assert(offsetof(FUserStatsUnloaded, SteamIDUser) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameFinalResultCallback, UniqueGameID) == 0x0018);
static_assert(offsetof(FRequestPlayersForGameProgressCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameProgressCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameResultCallback, Result) == 0x0000);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SearchID) == 0x0008);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SteamIDPlayerFound) == 0x0018);
static_assert(offsetof(FRequestPlayersForGameResultCallback, SteamIDLobby) == 0x0020);
static_assert(offsetof(FRequestPlayersForGameResultCallback, PlayerAcceptState) == 0x0028);
static_assert(offsetof(FRequestPlayersForGameResultCallback, UniqueGameID) == 0x0040);
static_assert(offsetof(FSearchForGameProgressCallback, SearchID) == 0x0000);
static_assert(offsetof(FSearchForGameProgressCallback, Result) == 0x0010);
static_assert(offsetof(FSearchForGameProgressCallback, LobbyId) == 0x0018);
static_assert(offsetof(FSearchForGameProgressCallback, SteamIDEndedSearch) == 0x0020);
static_assert(offsetof(FSearchForGameResultCallback, SearchID) == 0x0000);
static_assert(offsetof(FSearchForGameResultCallback, Result) == 0x0010);
static_assert(offsetof(FSearchForGameResultCallback, SteamIDHost) == 0x0020);
static_assert(offsetof(FSubmitPlayerResultResultCallback, Result) == 0x0000);
static_assert(offsetof(FSubmitPlayerResultResultCallback, UniqueGameID) == 0x0008);
static_assert(offsetof(FSubmitPlayerResultResultCallback, SteamIDPlayer) == 0x0018);
static_assert(offsetof(FInputAnalogActionData, Mode) == 0x0000);
static_assert(offsetof(FSteamItemDetails, InstanceId) == 0x0000);
static_assert(offsetof(FSteamItemDetails, Definition) == 0x0008);
static_assert(offsetof(FSteamP2PSessionState, P2PSessionError) == 0x0002);
static_assert(offsetof(FSteamP2PSessionState, RemoteIP) == 0x0010);
static_assert(offsetof(FSteamNetworkPingLocation, Location) == 0x0000);
static_assert(offsetof(FSteamPartyBeaconLocation, Type) == 0x0000);
static_assert(offsetof(FSteamPartyBeaconLocation, LocationId) == 0x0008);
static_assert(offsetof(FHostPingData, HostString) == 0x0000);
static_assert(offsetof(FSteamUGCDetails, PublishedFileID) == 0x0000);
static_assert(offsetof(FSteamUGCDetails, Result) == 0x0008);
static_assert(offsetof(FSteamUGCDetails, FileType) == 0x0009);
static_assert(offsetof(FSteamUGCDetails, Title) == 0x0018);
static_assert(offsetof(FSteamUGCDetails, Description) == 0x0028);
static_assert(offsetof(FSteamUGCDetails, SteamIDOwner) == 0x0038);
static_assert(offsetof(FSteamUGCDetails, Visibility) == 0x004C);
static_assert(offsetof(FSteamUGCDetails, Tags) == 0x0050);
static_assert(offsetof(FSteamUGCDetails, File) == 0x0060);
static_assert(offsetof(FSteamUGCDetails, PreviewFile) == 0x0068);
static_assert(offsetof(FSteamUGCDetails, Filename) == 0x0070);
static_assert(offsetof(FSteamUGCDetails, URL) == 0x0088);
static_assert(offsetof(FSteamLeaderboardEntry, SteamID) == 0x0000);
static_assert(offsetof(FSteamLeaderboardEntry, UGCHandle) == 0x0018);
