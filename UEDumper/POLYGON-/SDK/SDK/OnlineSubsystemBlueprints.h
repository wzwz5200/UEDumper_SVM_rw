
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

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineDataAdvertisementType_
/// Size: 0x01 (1 bytes)
enum class EOnlineDataAdvertisementType_ : uint8_t
{
	EOnlineDataAdvertisementType___DontAdvertise                                     = 0,
	EOnlineDataAdvertisementType___ViaPingOnly                                       = 1,
	EOnlineDataAdvertisementType___ViaOnlineService                                  = 2,
	EOnlineDataAdvertisementType___ViaOnlineServiceAndPing                           = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineKeyValuePairDataType_
/// Size: 0x01 (1 bytes)
enum class EOnlineKeyValuePairDataType_ : uint8_t
{
	EOnlineKeyValuePairDataType___Empty                                              = 0,
	EOnlineKeyValuePairDataType___Int32                                              = 1,
	EOnlineKeyValuePairDataType___UInt32_NotSupported                                = 2,
	EOnlineKeyValuePairDataType___Int64                                              = 3,
	EOnlineKeyValuePairDataType___UInt64_NotSupported                                = 4,
	EOnlineKeyValuePairDataType___Double_NotSupported                                = 5,
	EOnlineKeyValuePairDataType___String                                             = 6,
	EOnlineKeyValuePairDataType___Float                                              = 7,
	EOnlineKeyValuePairDataType___Blob_NotSupported                                  = 8,
	EOnlineKeyValuePairDataType___Bool                                               = 9,
	EOnlineKeyValuePairDataType___Json_NotSupported                                  = 10
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineLoginStatus
/// Size: 0x01 (1 bytes)
enum class EOnlineLoginStatus : uint8_t
{
	EOnlineLoginStatus__NotLoggedIn                                                  = 0,
	EOnlineLoginStatus__UsingLocalProfile                                            = 1,
	EOnlineLoginStatus__LoggedIn                                                     = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineActivityOutcome_
/// Size: 0x01 (1 bytes)
enum class EOnlineActivityOutcome_ : uint8_t
{
	EOnlineActivityOutcome___Completed                                               = 0,
	EOnlineActivityOutcome___Failed                                                  = 1,
	EOnlineActivityOutcome___Cancelled                                               = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineUserPrivilege
/// Size: 0x01 (1 bytes)
enum class EOnlineUserPrivilege : uint8_t
{
	EOnlineUserPrivilege__CanPlay                                                    = 0,
	EOnlineUserPrivilege__CanPlayOnline                                              = 1,
	EOnlineUserPrivilege__CanCommunicateOnline                                       = 2,
	EOnlineUserPrivilege__CanUseUserGeneratedContent                                 = 3,
	EOnlineUserPrivilege__CanUserCrossPlay                                           = 4
};

/// Enum /Script/OnlineSubsystemBlueprints.ECreatePartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ECreatePartyCompletionResult_ : uint8_t
{
	ECreatePartyCompletionResult___UnknownClientFailure                              = 156,
	ECreatePartyCompletionResult___AlreadyInPartyOfSpecifiedType                     = 157,
	ECreatePartyCompletionResult___AlreadyCreatingParty                              = 158,
	ECreatePartyCompletionResult___AlreadyInParty                                    = 159,
	ECreatePartyCompletionResult___FailedToCreateMucRoom                             = 160,
	ECreatePartyCompletionResult___NoResponse                                        = 161,
	ECreatePartyCompletionResult___LoggedOut                                         = 162,
	ECreatePartyCompletionResult___NotPrimaryUser                                    = 163,
	ECreatePartyCompletionResult___UnknownInternalFailure                            = 0,
	ECreatePartyCompletionResult___Succeeded                                         = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EJoinPartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EJoinPartyCompletionResult_ : uint8_t
{
	EJoinPartyCompletionResult___UnknownClientFailure                                = 156,
	EJoinPartyCompletionResult___BadBuild                                            = 157,
	EJoinPartyCompletionResult___InvalidAccessKey                                    = 158,
	EJoinPartyCompletionResult___AlreadyInLeadersJoiningList                         = 159,
	EJoinPartyCompletionResult___AlreadyInLeadersPartyRoster                         = 160,
	EJoinPartyCompletionResult___NoSpace                                             = 161,
	EJoinPartyCompletionResult___NotApproved                                         = 162,
	EJoinPartyCompletionResult___RequesteeNotMember                                  = 163,
	EJoinPartyCompletionResult___RequesteeNotLeader                                  = 164,
	EJoinPartyCompletionResult___NoResponse                                          = 165,
	EJoinPartyCompletionResult___LoggedOut                                           = 166,
	EJoinPartyCompletionResult___UnableToRejoin                                      = 167,
	EJoinPartyCompletionResult___IncompatiblePlatform                                = 168,
	EJoinPartyCompletionResult___AlreadyJoiningParty                                 = 169,
	EJoinPartyCompletionResult___AlreadyInParty                                      = 170,
	EJoinPartyCompletionResult___JoinInfoInvalid                                     = 171,
	EJoinPartyCompletionResult___AlreadyInPartyOfSpecifiedType                       = 172,
	EJoinPartyCompletionResult___MessagingFailure                                    = 173,
	EJoinPartyCompletionResult___GameSpecificReason                                  = 174,
	EJoinPartyCompletionResult___UnknownInternalFailure                              = 0,
	EJoinPartyCompletionResult___Succeeded                                           = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EKickMemberCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EKickMemberCompletionResult_ : uint8_t
{
	EKickMemberCompletionResult___UnknownClientFailure                               = 156,
	EKickMemberCompletionResult___UnknownParty                                       = 157,
	EKickMemberCompletionResult___LocalMemberNotMember                               = 158,
	EKickMemberCompletionResult___LocalMemberNotLeader                               = 159,
	EKickMemberCompletionResult___RemoteMemberNotMember                              = 160,
	EKickMemberCompletionResult___MessagingFailure                                   = 161,
	EKickMemberCompletionResult___NoResponse                                         = 162,
	EKickMemberCompletionResult___LoggedOut                                          = 163,
	EKickMemberCompletionResult___UnknownInternalFailure                             = 0,
	EKickMemberCompletionResult___Succeeded                                          = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ELeavePartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ELeavePartyCompletionResult_ : uint8_t
{
	ELeavePartyCompletionResult___UnknownClientFailure                               = 156,
	ELeavePartyCompletionResult___NoResponse                                         = 157,
	ELeavePartyCompletionResult___LoggedOut                                          = 158,
	ELeavePartyCompletionResult___UnknownParty                                       = 159,
	ELeavePartyCompletionResult___LeavePending                                       = 160,
	ELeavePartyCompletionResult___UnknownLocalUser                                   = 161,
	ELeavePartyCompletionResult___NotMember                                          = 162,
	ELeavePartyCompletionResult___MessagingFailure                                   = 163,
	ELeavePartyCompletionResult___UnknownTransportFailure                            = 164,
	ELeavePartyCompletionResult___UnknownInternalFailure                             = 0,
	ELeavePartyCompletionResult___Succeeded                                          = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EPromoteMemberCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EPromoteMemberCompletionResult_ : uint8_t
{
	EPromoteMemberCompletionResult___UnknownClientFailure                            = 156,
	EPromoteMemberCompletionResult___UnknownServiceFailure                           = 157,
	EPromoteMemberCompletionResult___UnknownParty                                    = 158,
	EPromoteMemberCompletionResult___LocalMemberNotMember                            = 159,
	EPromoteMemberCompletionResult___LocalMemberNotLeader                            = 160,
	EPromoteMemberCompletionResult___PromotionAlreadyPending                         = 161,
	EPromoteMemberCompletionResult___TargetIsSelf                                    = 162,
	EPromoteMemberCompletionResult___TargetNotMember                                 = 163,
	EPromoteMemberCompletionResult___MessagingFailure                                = 164,
	EPromoteMemberCompletionResult___NoResponse                                      = 165,
	EPromoteMemberCompletionResult___LoggedOut                                       = 166,
	EPromoteMemberCompletionResult___UnknownInternalFailure                          = 0,
	EPromoteMemberCompletionResult___Succeeded                                       = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ESendPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ESendPartyInvitationCompletionResult_ : uint8_t
{
	ESendPartyInvitationCompletionResult___NotLoggedIn                               = 156,
	ESendPartyInvitationCompletionResult___InvitePending                             = 157,
	ESendPartyInvitationCompletionResult___AlreadyInParty                            = 158,
	ESendPartyInvitationCompletionResult___PartyFull                                 = 159,
	ESendPartyInvitationCompletionResult___NoPermission                              = 160,
	ESendPartyInvitationCompletionResult___RateLimited                               = 161,
	ESendPartyInvitationCompletionResult___UnknownInternalFailure                    = 0,
	ESendPartyInvitationCompletionResult___Succeeded                                 = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EUpdateConfigCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EUpdateConfigCompletionResult_ : uint8_t
{
	EUpdateConfigCompletionResult___UnknownClientFailure                             = 156,
	EUpdateConfigCompletionResult___UnknownParty                                     = 157,
	EUpdateConfigCompletionResult___LocalMemberNotMember                             = 158,
	EUpdateConfigCompletionResult___LocalMemberNotLeader                             = 159,
	EUpdateConfigCompletionResult___RemoteMemberNotMember                            = 160,
	EUpdateConfigCompletionResult___MessagingFailure                                 = 161,
	EUpdateConfigCompletionResult___NoResponse                                       = 162,
	EUpdateConfigCompletionResult___UnknownInternalFailure                           = 0,
	EUpdateConfigCompletionResult___Succeeded                                        = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnJoinSessionCompleteResult_
/// Size: 0x01 (1 bytes)
enum class EOnJoinSessionCompleteResult_ : uint8_t
{
	EOnJoinSessionCompleteResult___Success                                           = 0,
	EOnJoinSessionCompleteResult___SessionIsFull                                     = 1,
	EOnJoinSessionCompleteResult___SessionDoesNotExist                               = 2,
	EOnJoinSessionCompleteResult___CouldNotRetrieveAddress                           = 3,
	EOnJoinSessionCompleteResult___AlreadyInSession                                  = 4,
	EOnJoinSessionCompleteResult___UnknownError                                      = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EVoiceChatResult_
/// Size: 0x01 (1 bytes)
enum class EVoiceChatResult_ : uint8_t
{
	EVoiceChatResult___Success                                                       = 0,
	EVoiceChatResult___InvalidState                                                  = 1,
	EVoiceChatResult___NotInitialized                                                = 2,
	EVoiceChatResult___NotConnected                                                  = 3,
	EVoiceChatResult___NotLoggedIn                                                   = 4,
	EVoiceChatResult___NotPermitted                                                  = 5,
	EVoiceChatResult___Throttled                                                     = 6,
	EVoiceChatResult___InvalidArgument                                               = 7,
	EVoiceChatResult___CredentialsInvalid                                            = 8,
	EVoiceChatResult___CredentialsExpired                                            = 9,
	EVoiceChatResult___ClientTimeout                                                 = 10,
	EVoiceChatResult___ServerTimeout                                                 = 11,
	EVoiceChatResult___DnsFailure                                                    = 12,
	EVoiceChatResult___ConnectionFailure                                             = 13,
	EVoiceChatResult___ImplementationError                                           = 14
};

/// Enum /Script/OnlineSubsystemBlueprints.EPartySystemPermissions
/// Size: 0x01 (1 bytes)
enum class EPartySystemPermissions : uint8_t
{
	EPartySystemPermissions__Noone                                                   = 0,
	EPartySystemPermissions__Leader                                                  = 1,
	EPartySystemPermissions__Friends                                                 = 2,
	EPartySystemPermissions__Anyone                                                  = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EJoinRequestAction_
/// Size: 0x01 (1 bytes)
enum class EJoinRequestAction_ : uint8_t
{
	EJoinRequestAction___Manual                                                      = 0,
	EJoinRequestAction___AutoApprove                                                 = 1,
	EJoinRequestAction___AutoReject                                                  = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EMemberExitedReason_
/// Size: 0x01 (1 bytes)
enum class EMemberExitedReason_ : uint8_t
{
	EMemberExitedReason___Unknown                                                    = 0,
	EMemberExitedReason___Left                                                       = 1,
	EMemberExitedReason___Removed                                                    = 2,
	EMemberExitedReason___Kicked                                                     = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EPartyState_
/// Size: 0x01 (1 bytes)
enum class EPartyState_ : uint8_t
{
	EPartyState___None                                                               = 0,
	EPartyState___CreatePending                                                      = 1,
	EPartyState___JoinPending                                                        = 2,
	EPartyState___RejoinPending                                                      = 3,
	EPartyState___LeavePending                                                       = 4,
	EPartyState___Active                                                             = 5,
	EPartyState___Disconnected                                                       = 6,
	EPartyState___CleanUp                                                            = 7
};

/// Enum /Script/OnlineSubsystemBlueprints.EMemberConnectionStatus_
/// Size: 0x01 (1 bytes)
enum class EMemberConnectionStatus_ : uint8_t
{
	EMemberConnectionStatus___Uninitialized                                          = 0,
	EMemberConnectionStatus___Disconnected                                           = 1,
	EMemberConnectionStatus___Initializing                                           = 2,
	EMemberConnectionStatus___Connected                                              = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.FOnlineUserPresenceStatusState
/// Size: 0x01 (1 bytes)
enum class FOnlineUserPresenceStatusState : uint8_t
{
	FOnlineUserPresenceStatusState__Online                                           = 0,
	FOnlineUserPresenceStatusState__Offline                                          = 1,
	FOnlineUserPresenceStatusState__Away                                             = 2,
	FOnlineUserPresenceStatusState__ExtendedAway                                     = 3,
	FOnlineUserPresenceStatusState__DoNotDisturb                                     = 4,
	FOnlineUserPresenceStatusState__Chat                                             = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.ESessionFailure_
/// Size: 0x01 (1 bytes)
enum class ESessionFailure_ : uint8_t
{
	ESessionFailure___ServiceConnectionLost                                          = 0
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnSessionParticipantLeftReason_
/// Size: 0x01 (1 bytes)
enum class EOnSessionParticipantLeftReason_ : uint8_t
{
	EOnSessionParticipantLeftReason___Left                                           = 0,
	EOnSessionParticipantLeftReason___Disconnected                                   = 1,
	EOnSessionParticipantLeftReason___Kicked                                         = 2,
	EOnSessionParticipantLeftReason___Closed                                         = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EPlatformMessageType_
/// Size: 0x01 (1 bytes)
enum class EPlatformMessageType_ : uint8_t
{
	EPlatformMessageType___EmptyStore                                                = 0,
	EPlatformMessageType___ChatRestricted                                            = 1,
	EPlatformMessageType___UGCRestricted                                             = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EInviteStatus_
/// Size: 0x01 (1 bytes)
enum class EInviteStatus_ : uint8_t
{
	EInviteStatus___Unknown                                                          = 0,
	EInviteStatus___Accepted                                                         = 1,
	EInviteStatus___PendingInbound                                                   = 2,
	EInviteStatus___PendingOutbound                                                  = 3,
	EInviteStatus___Blocked                                                          = 4,
	EInviteStatus___Suggested                                                        = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EShowPrivilegeResolveUI_
/// Size: 0x01 (1 bytes)
enum class EShowPrivilegeResolveUI_ : uint8_t
{
	EShowPrivilegeResolveUI___Default                                                = 0,
	EShowPrivilegeResolveUI___Show                                                   = 1,
	EShowPrivilegeResolveUI___NotShow                                                = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineLobbySearchQueryFilterComparator_
/// Size: 0x01 (1 bytes)
enum class EOnlineLobbySearchQueryFilterComparator_ : uint8_t
{
	EOnlineLobbySearchQueryFilterComparator___Equal                                  = 0,
	EOnlineLobbySearchQueryFilterComparator___NotEqual                               = 1,
	EOnlineLobbySearchQueryFilterComparator___LessThan                               = 2,
	EOnlineLobbySearchQueryFilterComparator___LessThanOrEqual                        = 3,
	EOnlineLobbySearchQueryFilterComparator___GreaterThan                            = 4,
	EOnlineLobbySearchQueryFilterComparator___GreaterThanOrEqual                     = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineCachedResult_
/// Size: 0x01 (1 bytes)
enum class EOnlineCachedResult_ : uint8_t
{
	EOnlineCachedResult___Success                                                    = 0,
	EOnlineCachedResult___NotFound                                                   = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ERequestPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ERequestPartyInvitationCompletionResult_ : uint8_t
{
	ERequestPartyInvitationCompletionResult___NotLoggedIn                            = 156,
	ERequestPartyInvitationCompletionResult___InvitePending                          = 157,
	ERequestPartyInvitationCompletionResult___AlreadyInParty                         = 158,
	ERequestPartyInvitationCompletionResult___PartyFull                              = 159,
	ERequestPartyInvitationCompletionResult___NoPermission                           = 160,
	ERequestPartyInvitationCompletionResult___UnknownInternalFailure                 = 0,
	ERequestPartyInvitationCompletionResult___Succeeded                              = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EAcceptPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EAcceptPartyInvitationCompletionResult_ : uint8_t
{
	EAcceptPartyInvitationCompletionResult___NotLoggedIn                             = 156,
	EAcceptPartyInvitationCompletionResult___InvitePending                           = 157,
	EAcceptPartyInvitationCompletionResult___AlreadyInParty                          = 158,
	EAcceptPartyInvitationCompletionResult___PartyFull                               = 159,
	EAcceptPartyInvitationCompletionResult___NoPermission                            = 160,
	EAcceptPartyInvitationCompletionResult___UnknownInternalFailure                  = 0,
	EAcceptPartyInvitationCompletionResult___Succeeded                               = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ERejectPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ERejectPartyInvitationCompletionResult_ : uint8_t
{
	ERejectPartyInvitationCompletionResult___NotLoggedIn                             = 156,
	ERejectPartyInvitationCompletionResult___InvitePending                           = 157,
	ERejectPartyInvitationCompletionResult___AlreadyInParty                          = 158,
	ERejectPartyInvitationCompletionResult___PartyFull                               = 159,
	ERejectPartyInvitationCompletionResult___NoPermission                            = 160,
	ERejectPartyInvitationCompletionResult___UnknownInternalFailure                  = 0,
	ERejectPartyInvitationCompletionResult___Succeeded                               = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EInvitationResponse_
/// Size: 0x01 (1 bytes)
enum class EInvitationResponse_ : uint8_t
{
	EInvitationResponse___UnknownFailure                                             = 0,
	EInvitationResponse___BadBuild                                                   = 1,
	EInvitationResponse___Rejected                                                   = 2,
	EInvitationResponse___Accepted                                                   = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EPurchaseTransactionState_
/// Size: 0x01 (1 bytes)
enum class EPurchaseTransactionState_ : uint8_t
{
	EPurchaseTransactionState___NotStarted                                           = 0,
	EPurchaseTransactionState___Processing                                           = 1,
	EPurchaseTransactionState___Purchased                                            = 2,
	EPurchaseTransactionState___Failed                                               = 3,
	EPurchaseTransactionState___Deferred                                             = 4,
	EPurchaseTransactionState___Canceled                                             = 5,
	EPurchaseTransactionState___Restored                                             = 6,
	EPurchaseTransactionState___NotAllowed                                           = 7,
	EPurchaseTransactionState___Invalid                                              = 8
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineSessionState_
/// Size: 0x01 (1 bytes)
enum class EOnlineSessionState_ : uint8_t
{
	EOnlineSessionState___NoSession                                                  = 0,
	EOnlineSessionState___Creating                                                   = 1,
	EOnlineSessionState___Pending                                                    = 2,
	EOnlineSessionState___Starting                                                   = 3,
	EOnlineSessionState___InProgress                                                 = 4,
	EOnlineSessionState___Ending                                                     = 5,
	EOnlineSessionState___Ended                                                      = 6,
	EOnlineSessionState___Destroying                                                 = 7
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineAsyncTaskState_
/// Size: 0x01 (1 bytes)
enum class EOnlineAsyncTaskState_ : uint8_t
{
	EOnlineAsyncTaskState___NotStarted                                               = 0,
	EOnlineAsyncTaskState___InProgress                                               = 1,
	EOnlineAsyncTaskState___Done                                                     = 2,
	EOnlineAsyncTaskState___Failed                                                   = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineComparisonOp_
/// Size: 0x01 (1 bytes)
enum class EOnlineComparisonOp_ : uint8_t
{
	EOnlineComparisonOp___Equals                                                     = 0,
	EOnlineComparisonOp___NotEquals                                                  = 1,
	EOnlineComparisonOp___GreaterThan                                                = 2,
	EOnlineComparisonOp___GreaterThanEquals                                          = 3,
	EOnlineComparisonOp___LessThan                                                   = 4,
	EOnlineComparisonOp___LessThanEquals                                             = 5,
	EOnlineComparisonOp___Near                                                       = 6,
	EOnlineComparisonOp___In                                                         = 7,
	EOnlineComparisonOp___NotIn                                                      = 8
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineStatModificationType_
/// Size: 0x01 (1 bytes)
enum class EOnlineStatModificationType_ : uint8_t
{
	EOnlineStatModificationType___Unknown                                            = 0,
	EOnlineStatModificationType___Sum                                                = 1,
	EOnlineStatModificationType___Set                                                = 2,
	EOnlineStatModificationType___Largest                                            = 3,
	EOnlineStatModificationType___Smallest                                           = 4
};

/// Enum /Script/OnlineSubsystemBlueprints.EVoiceChatChannelType_
/// Size: 0x01 (1 bytes)
enum class EVoiceChatChannelType_ : uint8_t
{
	EVoiceChatChannelType___NonPositional                                            = 0,
	EVoiceChatChannelType___Positional                                               = 1,
	EVoiceChatChannelType___Echo                                                     = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EVoiceChatTransmitMode_
/// Size: 0x01 (1 bytes)
enum class EVoiceChatTransmitMode_ : uint8_t
{
	EVoiceChatTransmitMode___None                                                    = 0,
	EVoiceChatTransmitMode___All                                                     = 1,
	EVoiceChatTransmitMode___Channel                                                 = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EVoiceChatAttenuationModel_
/// Size: 0x01 (1 bytes)
enum class EVoiceChatAttenuationModel_ : uint8_t
{
	EVoiceChatAttenuationModel___None                                                = 0,
	EVoiceChatAttenuationModel___InverseByDistance                                   = 1,
	EVoiceChatAttenuationModel___LinearByDistance                                    = 2,
	EVoiceChatAttenuationModel___ExponentialByDistance                               = 3
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineAchievementsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnAchievementUnlocked);                              // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbbc290] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievements
	// EOnlineCachedResult_ GetCachedAchievements(FUniqueNetIdRepl PlayerId, TArray<FOnlineAchievementBP>& OutAchievements);    // [0xbba9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievementDescription
	// EOnlineCachedResult_ GetCachedAchievementDescription(FString AchievementId, FOnlineAchievementDescBP& OutAchievementDesc); // [0xbba7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievement
	// EOnlineCachedResult_ GetCachedAchievement(FUniqueNetIdRepl PlayerId, FString AchievementId, FOnlineAchievementBP& OutAchievement); // [0xbba530] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemWriteAchievements
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineAchievementsSubsystemWriteAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(OnAchievementsWritten);                              // 0x0040   (0x0010)  
	class UOnlineAchievementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0030)  
	class UOnlineAchievementsWrite*                    __Store__WriteObject;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemWriteAchievements.WriteAchievements
	// class UOnlineAchievementsSubsystemWriteAchievements* WriteAchievements(class UOnlineAchievementsSubsystem* Subsystem, FUniqueNetIdRepl PlayerId, class UOnlineAchievementsWrite* WriteObject); // [0xbbd670] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineAchievementsSubsystemQueryAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(OnQueryAchievementsComplete);                        // 0x0040   (0x0010)  
	class UOnlineAchievementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements.QueryAchievements
	// class UOnlineAchievementsSubsystemQueryAchievements* QueryAchievements(class UOnlineAchievementsSubsystem* Subsystem, FUniqueNetIdRepl PlayerId); // [0xbbcc10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineAchievementsSubsystemQueryAchievementDescriptions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(OnQueryAchievementsComplete);                        // 0x0040   (0x0010)  
	class UOnlineAchievementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions.QueryAchievementDescriptions
	// class UOnlineAchievementsSubsystemQueryAchievementDescriptions* QueryAchievementDescriptions(class UOnlineAchievementsSubsystem* Subsystem, FUniqueNetIdRepl PlayerId); // [0xbbca30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineAvatarSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbbc2c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlineAvatarSubsystemGetAvatar : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(OnGetAvatarComplete);                                // 0x0040   (0x0010)  
	class UOnlineAvatarSubsystem*                      __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x0098   (0x0030)  
	class UTexture*                                    __Store__DefaultTexture;                                    // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar.GetAvatar
	// class UOnlineAvatarSubsystemGetAvatar* GetAvatar(class UOnlineAvatarSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl TargetUserId, class UTexture* DefaultTexture); // [0xbb9ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatarUrl
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UOnlineAvatarSubsystemGetAvatarUrl : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(OnGetAvatarUrlComplete);                             // 0x0040   (0x0010)  
	class UOnlineAvatarSubsystem*                      __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x0098   (0x0030)  
	FString                                            __Store__DefaultAvatarUrl;                                  // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatarUrl.GetAvatarUrl
	// class UOnlineAvatarSubsystemGetAvatarUrl* GetAvatarUrl(class UOnlineAvatarSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl TargetUserId, FString DefaultAvatarUrl); // [0xbba1c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem
/// Size: 0x0190 (400 bytes) (0x000030 - 0x000190) align 8 MaxSize: 0x0190
class UOnlineChatSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x0030   (0x00C0)  MISSED
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(OnChatRoomCreated);                                  // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnChatRoomConfigured);                               // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnChatRoomJoinPublic);                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnChatRoomJoinPrivate);                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(OnChatRoomExit);                                     // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberJoin);                               // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberExit);                               // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberUpdate);                             // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(OnChatRoomMessageReceived);                          // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnChatPrivateMessageReceived);                       // 0x0180   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.SendRoomChat
	// bool SendRoomChat(FUniqueNetIdRepl UserId, FString RoomId, FString MsgBody);                                             // [0xbbd3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.SendPrivateChat
	// bool SendPrivateChat(FUniqueNetIdRepl UserId, FUniqueNetIdRepl RecipientId, FString MsgBody);                            // [0xbbd080] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.JoinPublicRoom
	// bool JoinPublicRoom(FUniqueNetIdRepl UserId, FString RoomId, FString Nickname, FChatRoomConfigBP ChatRoomConfig);        // [0xbbc6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.JoinPrivateRoom
	// bool JoinPrivateRoom(FUniqueNetIdRepl UserId, FString RoomId, FString Nickname, FChatRoomConfigBP ChatRoomConfig);       // [0xbbc350] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbbc2f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.IsChatAllowed
	// bool IsChatAllowed(FUniqueNetIdRepl UserId, FUniqueNetIdRepl RecipientId);                                               // [0xbbbfd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetRoomInfo
	// FChatRoomInfoBP GetRoomInfo(FUniqueNetIdRepl UserId, FString RoomId);                                                    // [0xbbbc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetMembers
	// bool GetMembers(FUniqueNetIdRepl UserId, FString RoomId, TArray<FChatRoomMemberBP>& OutMembers);                         // [0xbbb980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetMember
	// FChatRoomMemberBP GetMember(FUniqueNetIdRepl UserId, FString RoomId, FUniqueNetIdRepl MemberId);                         // [0xbbb5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetLastMessages
	// bool GetLastMessages(FUniqueNetIdRepl UserId, FString RoomId, int32_t NumMessages, TArray<FChatMessageBP>& OutMessages); // [0xbbb290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetJoinedRooms
	// void GetJoinedRooms(FUniqueNetIdRepl UserId, TArray<FString>& OutRooms);                                                 // [0xbbb060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.ExitRoom
	// bool ExitRoom(FUniqueNetIdRepl UserId, FString RoomId);                                                                  // [0xbb99f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.DumpChatState
	// void DumpChatState();                                                                                                    // [0xbb99d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.CreateRoom
	// bool CreateRoom(FUniqueNetIdRepl UserId, FString RoomId, FString Nickname, FChatRoomConfigBP ChatRoomConfig);            // [0xbb9660] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.ConfigureRoom
	// bool ConfigureRoom(FUniqueNetIdRepl UserId, FString RoomId, FChatRoomConfigBP ChatRoomConfig);                           // [0xbb9380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineEntitlementsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnQueryEntitlementsComplete);                        // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbbc320] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetItemEntitlement
	// class UOnlineEntitlement* GetItemEntitlement(FUniqueNetIdRepl UserId, FString ItemId);                                   // [0xbbae30] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetEntitlement
	// class UOnlineEntitlement* GetEntitlement(FUniqueNetIdRepl UserId, FString EntitlementId);                                // [0xbbac00] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetAllEntitlements
	// void GetAllEntitlements(FUniqueNetIdRepl UserId, FString Namespace, TArray<UOnlineEntitlement*>& OutUserEntitlements);   // [0xbb9c20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.PagedQueryBP
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPagedQueryBP
{ 
	int32_t                                            Start;                                                      // 0x0000   (0x0004)  
	int32_t                                            Count;                                                      // 0x0004   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystemQueryEntitlements
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineEntitlementsSubsystemQueryEntitlements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(OnQueryEntitlementsComplete);                        // 0x0040   (0x0010)  
	class UOnlineEntitlementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  
	FString                                            __Store__Namespace;                                         // 0x00A0   (0x0010)  
	FPagedQueryBP                                      __Store__Page;                                              // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystemQueryEntitlements.QueryEntitlements
	// class UOnlineEntitlementsSubsystemQueryEntitlements* QueryEntitlements(class UOnlineEntitlementsSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Namespace, FPagedQueryBP Page); // [0xbbcdf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEventsSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineEventsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEventsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbc5bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandlerRegistration
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FExternalUIFlowHandlerRegistration
{ 
	class UObject*                                     Interface;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem
/// Size: 0x0170 (368 bytes) (0x000030 - 0x000170) align 8 MaxSize: 0x0170
class UOnlineExternalUISubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	TArray<FExternalUIFlowHandlerRegistration>         FlowHandlers;                                               // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x00B8   (0x00A8)  MISSED
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(OnExternalUIChange);                                 // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowPlatformMessageBox
	// bool ShowPlatformMessageBox(FUniqueNetIdRepl UserId, EPlatformMessageType_ MessageType);                                 // [0xbc7a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowLeaderboardUI
	// bool ShowLeaderboardUI(FString LeaderboardName);                                                                         // [0xbc77c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowInviteUI
	// bool ShowInviteUI(int32_t LocalUserNum, FName SessionName);                                                              // [0xbc76f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowFriendsUI
	// bool ShowFriendsUI(int32_t LocalUserNum);                                                                                // [0xbc7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAchievementsUI
	// bool ShowAchievementsUI(int32_t LocalUserNum);                                                                           // [0xbc75b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAccountUpgradeUI
	// bool ShowAccountUpgradeUI(FUniqueNetIdRepl UniqueId);                                                                    // [0xbc7410] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportExitInGameStoreUI
	// void ReportExitInGameStoreUI();                                                                                          // [0xbc6ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportEnterInGameStoreUI
	// void ReportEnterInGameStoreUI();                                                                                         // [0xbc6ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.RemoveLoginFlowHandler
	// void RemoveLoginFlowHandler(TScriptInterface<Class>& Handler);                                                           // [0xbc6a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.NotifyLoginRedirectURL
	// FLoginFlowResultBP NotifyLoginRedirectURL(int32_t RequestId, FString URL);                                               // [0xbc5e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.LoginFlowComplete
	// void LoginFlowComplete(int32_t RequestId, FLoginFlowResultBP Result);                                                    // [0xbc5c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbc5be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.CloseWebURL
	// bool CloseWebURL();                                                                                                      // [0xbc4780] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.AddLoginFlowHandler
	// void AddLoginFlowHandler(TScriptInterface<Class>& Handler);                                                              // [0xbc41d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineExternalUISubsystemShowLoginUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(OnLoginUIClosed);                                    // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__ControllerIndex;                                   // 0x0068   (0x0004)  
	bool                                               __Store__bShowOnlineOnly;                                   // 0x006C   (0x0001)  
	bool                                               __Store__bShowSkipButton;                                   // 0x006D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x006E   (0x0002)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI.ShowLoginUI
	// class UOnlineExternalUISubsystemShowLoginUI* ShowLoginUI(class UOnlineExternalUISubsystem* Subsystem, int32_t ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton); // [0xbc78c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineExternalUISubsystemShowAccountCreationUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnAccountCreationUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__ControllerIndex;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI.ShowAccountCreationUI
	// class UOnlineExternalUISubsystemShowAccountCreationUI* ShowAccountCreationUI(class UOnlineExternalUISubsystem* Subsystem, int32_t ControllerIndex); // [0xbc7340] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowWebUrlParameters
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FShowWebUrlParameters
{ 
	bool                                               Embedded;                                                   // 0x0000   (0x0001)  
	bool                                               ShowCloseButton;                                            // 0x0001   (0x0001)  
	bool                                               ShowBackground;                                             // 0x0002   (0x0001)  
	bool                                               HideCursor;                                                 // 0x0003   (0x0001)  
	bool                                               ResetCookies;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            OffsetX;                                                    // 0x0008   (0x0004)  
	int32_t                                            OffsetY;                                                    // 0x000C   (0x0004)  
	int32_t                                            SizeX;                                                      // 0x0010   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0014   (0x0004)  
	TArray<FString>                                    AllowedDomains;                                             // 0x0018   (0x0010)  
	FString                                            CallbackPath;                                               // 0x0028   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineExternalUISubsystemShowWebURL : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(OnShowWebUrlClosed);                                 // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__Url;                                               // 0x0068   (0x0010)  
	FShowWebUrlParameters                              __Store__ShowParams;                                        // 0x0078   (0x0038)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL.ShowWebURL
	// class UOnlineExternalUISubsystemShowWebURL* ShowWebURL(class UOnlineExternalUISubsystem* Subsystem, FString URL, FShowWebUrlParameters ShowParams); // [0xbc84a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlineExternalUISubsystemShowProfileUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnProfileUIClosed);                                  // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__Requestor;                                         // 0x0068   (0x0030)  
	FUniqueNetIdRepl                                   __Store__Requestee;                                         // 0x0098   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI.ShowProfileUI
	// class UOnlineExternalUISubsystemShowProfileUI* ShowProfileUI(class UOnlineExternalUISubsystem* Subsystem, FUniqueNetIdRepl Requestor, FUniqueNetIdRepl Requestee); // [0xbc7c10] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowStoreParameters
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FShowStoreParameters
{ 
	FString                                            Category;                                                   // 0x0000   (0x0010)  
	FString                                            ProductId;                                                  // 0x0010   (0x0010)  
	bool                                               AddToCart;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineExternalUISubsystemShowStoreUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(OnShowStoreUIClosed);                                // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FShowStoreParameters                               __Store__ShowParams;                                        // 0x0070   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI.ShowStoreUI
	// class UOnlineExternalUISubsystemShowStoreUI* ShowStoreUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FShowStoreParameters ShowParams); // [0xbc82e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineMessagePayloadData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FOnlineMessagePayloadData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowSendMessageParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FShowSendMessageParameters
{ 
	FText                                              DisplayTitle;                                               // 0x0000   (0x0018)  
	TMap<FString, FString>                             DisplayTitle_Loc;                                           // 0x0018   (0x0050)  
	FText                                              DisplayMessage;                                             // 0x0068   (0x0018)  
	FText                                              DisplayDetails;                                             // 0x0080   (0x0018)  
	TMap<FString, FString>                             DisplayDetails_Loc;                                         // 0x0098   (0x0050)  
	FOnlineMessagePayloadData                          DataPayload;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            MaxRecipients;                                              // 0x00EC   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI
/// Size: 0x0160 (352 bytes) (0x000030 - 0x000160) align 8 MaxSize: 0x0160
class UOnlineExternalUISubsystemShowSendMessageUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(OnShowSendMessageUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FShowSendMessageParameters                         __Store__ShowParams;                                        // 0x0070   (0x00F0)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI.ShowSendMessageUI
	// class UOnlineExternalUISubsystemShowSendMessageUI* ShowSendMessageUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FShowSendMessageParameters ShowParams); // [0xbc8180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI
/// Size: 0x0190 (400 bytes) (0x000030 - 0x000190) align 8 MaxSize: 0x0190
class UOnlineExternalUISubsystemShowSendMessageToUserUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(OnShowSendMessageUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__Recipient;                                         // 0x0070   (0x0030)  
	FShowSendMessageParameters                         __Store__ShowParams;                                        // 0x00A0   (0x00F0)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI.ShowSendMessageToUserUI
	// class UOnlineExternalUISubsystemShowSendMessageToUserUI* ShowSendMessageToUserUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl Recipient, FShowSendMessageParameters ShowParams); // [0xbc7ef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem
/// Size: 0x0258 (600 bytes) (0x000030 - 0x000258) align 8 MaxSize: 0x0258
class UOnlineFriendsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x128];                                     // 0x0030   (0x0128)  MISSED
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(OnFriendsChange);                                    // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnOutgoingInviteSent);                               // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,515) /* FMulticastInlineDelegate */ __um(OnInviteReceived);                                   // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,516) /* FMulticastInlineDelegate */ __um(OnInviteAccepted);                                   // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,517) /* FMulticastInlineDelegate */ __um(OnInviteRejected);                                   // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,518) /* FMulticastInlineDelegate */ __um(OnInviteAborted);                                    // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,519) /* FMulticastInlineDelegate */ __um(OnFriendRemoved);                                    // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,520) /* FMulticastInlineDelegate */ __um(OnRejectInviteComplete);                             // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,521) /* FMulticastInlineDelegate */ __um(OnDeleteFriendComplete);                             // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,522) /* FMulticastInlineDelegate */ __um(OnBlockedPlayerComplete);                            // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,523) /* FMulticastInlineDelegate */ __um(OnUnblockedPlayerComplete);                          // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,524) /* FMulticastInlineDelegate */ __um(OnBlockListChange);                                  // 0x0208   (0x0010)  
	SDK_UNDEFINED(16,525) /* FMulticastInlineDelegate */ __um(OnQueryRecentPlayersComplete);                       // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,526) /* FMulticastInlineDelegate */ __um(OnQueryBlockedPlayersComplete);                      // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,527) /* FMulticastInlineDelegate */ __um(OnRecentPlayersAdded);                               // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,528) /* FMulticastInlineDelegate */ __um(OnFriendSettingsUpdated);                            // 0x0248   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbc5c10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsFriend
	// bool IsFriend(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                                        // [0xbc5950] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetRecentPlayers
	// bool GetRecentPlayers(FUniqueNetIdRepl UserId, FString Namespace, TArray<UOnlineRecentPlayerRef*>& OutRecentPlayers);    // [0xbc56d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendsList
	// bool GetFriendsList(int32_t LocalUserNum, FString ListName, TArray<UOnlineFriendRef*>& OutFriends);                      // [0xbc5540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendSettings
	// bool GetFriendSettings(FUniqueNetIdRepl UserId, TMap<FString, FOnlineFriendSettingsSourceDataConfig>& OutSettings);      // [0xbc52e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriend
	// class UOnlineFriendRef* GetFriend(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                    // [0xbc5080] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetBlockedPlayers
	// bool GetBlockedPlayers(FUniqueNetIdRepl UserId, TArray<UOnlineUserRef*>& OutBlockedPlayers);                             // [0xbc4e70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpRecentPlayers
	// void DumpRecentPlayers();                                                                                                // [0xbc4e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpBlockedPlayers
	// void DumpBlockedPlayers();                                                                                               // [0xbc4e30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineFriendsSubsystemReadFriendsList : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,529) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,530) /* FMulticastInlineDelegate */ __um(OnReadFriendsListComplete);                          // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__ListName;                                          // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList.ReadFriendsList
	// class UOnlineFriendsSubsystemReadFriendsList* ReadFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FString ListName); // [0xbc6620] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineFriendsSubsystemDeleteFriendsList : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,531) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,532) /* FMulticastInlineDelegate */ __um(OnDeleteFriendsListComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__ListName;                                          // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList.DeleteFriendsList
	// class UOnlineFriendsSubsystemDeleteFriendsList* DeleteFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FString ListName); // [0xbc4cd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemSendInvite : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,533) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,534) /* FMulticastInlineDelegate */ __um(OnSendInviteComplete);                               // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite.SendInvite
	// class UOnlineFriendsSubsystemSendInvite* SendInvite(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0xbc6af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemAcceptInvite : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,535) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,536) /* FMulticastInlineDelegate */ __um(OnAcceptInviteComplete);                             // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite.AcceptInvite
	// class UOnlineFriendsSubsystemAcceptInvite* AcceptInvite(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0xbc3f40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemRejectInvite
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineFriendsSubsystemRejectInvite : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,537) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,538) /* FMulticastInlineDelegate */ __um(OnRejectInviteComplete);                             // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0078   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemRejectInvite.RejectInvite
	// class UOnlineFriendsSubsystemRejectInvite* RejectInvite(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0xbc6780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineFriendsSubsystemSetFriendAlias : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,539) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,540) /* FMulticastInlineDelegate */ __um(OnSetFriendAliasComplete);                           // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A0   (0x0010)  
	FString                                            __Store__Alias;                                             // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias.SetFriendAlias
	// class UOnlineFriendsSubsystemSetFriendAlias* SetFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName, FString Alias); // [0xbc6d80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemDeleteFriendAlias : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,542) /* FMulticastInlineDelegate */ __um(OnDeleteFriendAliasComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias.DeleteFriendAlias
	// class UOnlineFriendsSubsystemDeleteFriendAlias* DeleteFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0xbc4a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriend
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineFriendsSubsystemDeleteFriend : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,543) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,544) /* FMulticastInlineDelegate */ __um(OnDeleteFriendComplete);                             // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0078   (0x0030)  
	FString                                            __Store__ListName;                                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriend.DeleteFriend
	// class UOnlineFriendsSubsystemDeleteFriend* DeleteFriend(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0xbc47b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ReportPlayedWithUserInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FReportPlayedWithUserInfo
{ 
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0000   (0x0030)  
	FString                                            PresenceStr;                                                // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineFriendsSubsystemAddRecentPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,545) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(OnAddRecentPlayersComplete);                         // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	TArray<FReportPlayedWithUserInfo>                  __Store__InRecentPlayers;                                   // 0x0098   (0x0010)  
	FString                                            __Store__ListName;                                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers.AddRecentPlayers
	// class UOnlineFriendsSubsystemAddRecentPlayers* AddRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId, TArray<FReportPlayedWithUserInfo> InRecentPlayers, FString ListName); // [0xbc4270] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryRecentPlayers
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemQueryRecentPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,547) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,548) /* FMulticastInlineDelegate */ __um(OnQueryRecentPlayersComplete);                       // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  
	FString                                            __Store__Namespace;                                         // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryRecentPlayers.QueryRecentPlayers
	// class UOnlineFriendsSubsystemQueryRecentPlayers* QueryRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Namespace); // [0xbc63c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemBlockPlayer
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemBlockPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(OnBlockedPlayerComplete);                            // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0078   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemBlockPlayer.BlockPlayer
	// class UOnlineFriendsSubsystemBlockPlayer* BlockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl PlayerId); // [0xbc4570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemUnblockPlayer
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemUnblockPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,552) /* FMulticastInlineDelegate */ __um(OnUnblockedPlayerComplete);                          // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0078   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemUnblockPlayer.UnblockPlayer
	// class UOnlineFriendsSubsystemUnblockPlayer* UnblockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl PlayerId); // [0xbc86f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryBlockedPlayers
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineFriendsSubsystemQueryBlockedPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,553) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,554) /* FMulticastInlineDelegate */ __um(OnQueryBlockedPlayersComplete);                      // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryBlockedPlayers.QueryBlockedPlayers
	// class UOnlineFriendsSubsystemQueryBlockedPlayers* QueryBlockedPlayers(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId); // [0xbc6000] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineFriendsSubsystemQueryFriendSettings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,555) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,556) /* FMulticastInlineDelegate */ __um(OnSettingsOperationComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings.QueryFriendSettings
	// class UOnlineFriendsSubsystemQueryFriendSettings* QueryFriendSettings(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbc61e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemSetFriendSettings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,557) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,558) /* FMulticastInlineDelegate */ __um(OnSetFriendSettingsComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FString                                            __Store__Source;                                            // 0x0098   (0x0010)  
	bool                                               __Store__bNeverShowAgain;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings.SetFriendSettings
	// class UOnlineFriendsSubsystemSetFriendSettings* SetFriendSettings(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Source, bool bNeverShowAgain); // [0xbc70a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineGameActivitySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,559) /* FMulticastInlineDelegate */ __um(OnGameActivityActivationRequested);                  // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.UpdatePlayerLocation
	// void UpdatePlayerLocation(FUniqueNetIdRepl LocalUserId, FOnlineActivityPlayerLocationBP& ActivityPlayerLocation);        // [0xbcfc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbcda80] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/OnlineSubsystemBlueprints.VariantDataBP
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FVariantDataBP
{ 
	EOnlineKeyValuePairDataType_                       Type;                                                       // 0x0000   (0x0001)  
	bool                                               AsBool;                                                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            AsInt;                                                      // 0x0004   (0x0004)  
	float                                              AsFloat;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            AsInt64;                                                    // 0x0010   (0x0008)  
	FString                                            AsString;                                                   // 0x0018   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemStartActivity
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class UOnlineGameActivitySubsystemStartActivity : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,560) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(OnStartActivityComplete);                            // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ActivityId;                                        // 0x0098   (0x0010)  
	TMap<FString, FVariantDataBP>                      __Store__Parms;                                             // 0x00A8   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemStartActivity.StartActivity
	// class UOnlineGameActivitySubsystemStartActivity* StartActivity(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ActivityId, TMap<FString, FVariantDataBP> Params); // [0xbcf900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemEndActivity
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UOnlineGameActivitySubsystemEndActivity : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,562) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,563) /* FMulticastInlineDelegate */ __um(OnEndActivityComplete);                              // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ActivityId;                                        // 0x0098   (0x0010)  
	EOnlineActivityOutcome_                            __Store__ActivityOutcome;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	TMap<FString, FVariantDataBP>                      __Store__Parms;                                             // 0x00B0   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemEndActivity.EndActivity
	// class UOnlineGameActivitySubsystemEndActivity* EndActivity(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ActivityId, EOnlineActivityOutcome_ ActivityOutcome, TMap<FString, FVariantDataBP> Params); // [0xbcd680] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineGameActivitySubsystemResetAllActiveActivities : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,565) /* FMulticastInlineDelegate */ __um(OnResetAllActiveActivitiesComplete);                 // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities.ResetAllActiveActivities
	// class UOnlineGameActivitySubsystemResetAllActiveActivities* ResetAllActiveActivities(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbced90] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineActivityTasksToResetBP
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FOnlineActivityTasksToResetBP
{ 
	bool                                               bSet;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FString>                                    InProgressTasks;                                            // 0x0008   (0x0010)  
	TArray<FString>                                    CompletedTasks;                                             // 0x0018   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResumeActivity
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlineGameActivitySubsystemResumeActivity : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,566) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,567) /* FMulticastInlineDelegate */ __um(OnResumeActivityComplete);                           // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ActivityId;                                        // 0x0098   (0x0010)  
	FOnlineActivityTasksToResetBP                      __Store__TasksToReset;                                      // 0x00A8   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResumeActivity.ResumeActivity
	// class UOnlineGameActivitySubsystemResumeActivity* ResumeActivity(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ActivityId, FOnlineActivityTasksToResetBP TasksToReset); // [0xbcef70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineGameActivitySubsystemSetActivityAvailability : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,568) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,569) /* FMulticastInlineDelegate */ __um(OnSetActivityAvailabilityComplete);                  // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ActivityId;                                        // 0x0098   (0x0010)  
	bool                                               __Store__bEnabled;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability.SetActivityAvailability
	// class UOnlineGameActivitySubsystemSetActivityAvailability* SetActivityAvailability(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ActivityId, bool bEnabled); // [0xbcf2c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UOnlineGameActivitySubsystemSetActivityPriority : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,570) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,571) /* FMulticastInlineDelegate */ __um(OnSetActivityPriorityComplete);                      // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TMap<FString, int32_t>                             __Store__PrioritizedActivities;                             // 0x0098   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority.SetActivityPriority
	// class UOnlineGameActivitySubsystemSetActivityPriority* SetActivityPriority(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TMap<FString, int32_t> PrioritizedActivities); // [0xbcf560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineGameItemStatsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbcdab0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineGameItemStatsSubsystemItemUsage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,572) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,573) /* FMulticastInlineDelegate */ __um(OnItemUsageComplete);                                // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ItemUsedBy;                                        // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage.ItemUsage
	// class UOnlineGameItemStatsSubsystemItemUsage* ItemUsage(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ItemUsedBy, TArray<FString> ItemsUsed); // [0xbceab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlineGameItemStatsSubsystemItemImpact : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,574) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,575) /* FMulticastInlineDelegate */ __um(OnItemImpactComplete);                               // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__TargetActors;                                      // 0x0098   (0x0010)  
	FString                                            __Store__ImpactInitiatedBy;                                 // 0x00A8   (0x0010)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact.ItemImpact
	// class UOnlineGameItemStatsSubsystemItemImpact* ItemImpact(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> TargetActors, FString ImpactInitiatedBy, TArray<FString> ItemsUsed); // [0xbcddf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlineGameItemStatsSubsystemItemMitigation : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,576) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,577) /* FMulticastInlineDelegate */ __um(OnItemMitigationComplete);                           // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__ImpactItemsMitigated;                              // 0x00A8   (0x0010)  
	FString                                            __Store__ItemUsedBy;                                        // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation.ItemMitigation
	// class UOnlineGameItemStatsSubsystemItemMitigation* ItemMitigation(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> ItemsUsed, TArray<FString> ImpactItemsMitigated, FString ItemUsedBy); // [0xbce730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineGameItemStatsSubsystemItemAvailabilityChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,578) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,579) /* FMulticastInlineDelegate */ __um(OnItemAvailabilityChangeComplete);                   // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__AvailableItems;                                    // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__UnavailableItems;                                  // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange.ItemAvailabilityChange
	// class UOnlineGameItemStatsSubsystemItemAvailabilityChange* ItemAvailabilityChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> AvailableItems, TArray<FString> UnavailableItems); // [0xbcdb10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineGameItemStatsSubsystemItemInventoryChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,580) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,581) /* FMulticastInlineDelegate */ __um(OnItemInventoryChangeComplete);                      // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__ItemsToAdd;                                        // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__ItemsToRemove;                                     // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange.ItemInventoryChange
	// class UOnlineGameItemStatsSubsystemItemInventoryChange* ItemInventoryChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> ItemsToAdd, TArray<FString> ItemsToRemove); // [0xbce170] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineGameItemStatsSubsystemItemLoadoutChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,582) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,583) /* FMulticastInlineDelegate */ __um(OnItemLoadoutChangeComplete);                        // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__EquippedItems;                                     // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__UnequippedItems;                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange.ItemLoadoutChange
	// class UOnlineGameItemStatsSubsystemItemLoadoutChange* ItemLoadoutChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> EquippedItems, TArray<FString> UnequippedItems); // [0xbce450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineGroupsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.SetNamespace
	// void SetNamespace(FString Ns);                                                                                           // [0xbcf810] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbcdae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.GetNamespace
	// FString GetNamespace();                                                                                                  // [0xbcda00] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnlineHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsString
	// FString ReadFileDataAsString(class UFileData* FileData);                                                                 // [0xbd5700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsSaveGame
	// class USaveGame* ReadFileDataAsSaveGame(class UFileData* FileData);                                                      // [0xbd5670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.IsValid_PartyId
	// bool IsValid_PartyId(class UPartyId* A);                                                                                 // [0xbd5310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.IsValid_LobbyId
	// bool IsValid_LobbyId(class ULobbyId* A);                                                                                 // [0xbd5310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringBySearchResult
	// void GetResolvedConnectStringBySearchResult(class UOnlineSessionSubsystem* Subsystem, FOnlineSessionSearchResultBP SearchResult, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo); // [0xbd4b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringByName
	// void GetResolvedConnectStringByName(class UOnlineSessionSubsystem* Subsystem, FName SessionName, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo); // [0xbd4950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetPrimaryPartyType
	// int64_t GetPrimaryPartyType();                                                                                           // [0xbd4930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetPlayerStateUniqueNetId
	// FUniqueNetIdRepl GetPlayerStateUniqueNetId(class APlayerState* PlayerState);                                             // [0xbd4850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetCurrentSubsystemName
	// FName GetCurrentSubsystemName(class UObject* WorldContextObject);                                                        // [0xbd43b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetControllerUniqueNetId
	// FUniqueNetIdRepl GetControllerUniqueNetId(class APlayerController* PlayerController);                                    // [0xbd42d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdIsValid
	// bool FUniqueNetIdIsValid(FUniqueNetIdRepl InNetId);                                                                      // [0xbd3e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdGetType
	// FName FUniqueNetIdGetType(FUniqueNetIdRepl InNetId);                                                                     // [0xbd3c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_PartyIdPartyId
	// bool EqualEqual_PartyIdPartyId(class UPartyId* A, class UPartyId* B);                                                    // [0xbd3bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_LobbyIdLobbyId
	// bool EqualEqual_LobbyIdLobbyId(class ULobbyId* A, class ULobbyId* B);                                                    // [0xbd3bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl
	// bool EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(FUniqueNetIdRepl& InA, FUniqueNetIdRepl& InB);                          // [0xbd39a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateMutablePartyData
	// class UMutablePartyData* CreateMutablePartyData(class UReadablePartyData* ReadOnlyPartyData);                            // [0xbd37d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromString
	// class UFileData* CreateFileDataFromString(FString String);                                                               // [0xbd3730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromSaveGame
	// class UFileData* CreateFileDataFromSaveGame(class USaveGame* SaveGame);                                                  // [0xbd36a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.Conv_ULobbyIdToUOnlinePartyJoinInfo
	// class UOnlinePartyJoinInfo* Conv_ULobbyIdToUOnlinePartyJoinInfo(FUniqueNetIdRepl InLocalUserId, class UOnlinePartySubsystem* InPartySubsystem, class ULobbyId* InLobbyId); // [0xbd3490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.Conv_FUniqueNetIdReplToString
	// FString Conv_FUniqueNetIdReplToString(FUniqueNetIdRepl InNetId);                                                         // [0xbd32c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem
/// Size: 0x0130 (304 bytes) (0x000030 - 0x000130) align 8 MaxSize: 0x0130
class UOnlineIdentitySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xB0];                                      // 0x0030   (0x00B0)  MISSED
	SDK_UNDEFINED(16,584) /* FMulticastInlineDelegate */ __um(OnLoginChanged);                                     // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,585) /* FMulticastInlineDelegate */ __um(OnLoginStatusChanged);                               // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,586) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,587) /* FMulticastInlineDelegate */ __um(OnLogoutComplete);                                   // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,588) /* FMulticastInlineDelegate */ __um(OnLoginFlowLogout);                                  // 0x0120   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbd52b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUserAccount
	// class UUserOnlineAccountRef* GetUserAccount(FUniqueNetIdRepl UserId);                                                    // [0xbd4f00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUniquePlayerId
	// FUniqueNetIdRepl GetUniquePlayerId(int32_t LocalUserNum);                                                                // [0xbd4e20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetSponsorUniquePlayerId
	// FUniqueNetIdRepl GetSponsorUniquePlayerId(int32_t LocalUserNum);                                                         // [0xbd4d40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlayerNickname
	// FString GetPlayerNickname(FUniqueNetIdRepl UserId);                                                                      // [0xbd4680] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlatformUserIdFromUniqueNetId
	// int32_t GetPlatformUserIdFromUniqueNetId(FUniqueNetIdRepl UniqueNetId);                                                  // [0xbd44e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetLoginStatus
	// EOnlineLoginStatus GetLoginStatus(int32_t LocalUserNum);                                                                 // [0xbd4440] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthType
	// FString GetAuthType();                                                                                                   // [0xbd4250] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthToken
	// FString GetAuthToken(int32_t LocalUserNum);                                                                              // [0xbd4170] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAllUserAccounts
	// TArray<UUserOnlineAccountRef*> GetAllUserAccounts();                                                                     // [0xbd40f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.CreateUniquePlayerId
	// FUniqueNetIdRepl CreateUniquePlayerId(FString Str);                                                                      // [0xbd3860] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.ClearCachedAuthToken
	// void ClearCachedAuthToken(FUniqueNetIdRepl UserId);                                                                      // [0xbd3120] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAccountCredential
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineAccountCredential
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FString                                            ID;                                                         // 0x0010   (0x0010)  
	FString                                            Token;                                                      // 0x0020   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineIdentitySubsystemLogin : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,589) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,590) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FOnlineAccountCredential                           __Store__AccountCredentials;                                // 0x0078   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin.Login
	// class UOnlineIdentitySubsystemLogin* Login(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum, FOnlineAccountCredential AccountCredentials); // [0xbd53a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineIdentitySubsystemLogout : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,591) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,592) /* FMulticastInlineDelegate */ __um(OnLogoutComplete);                                   // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout.Logout
	// class UOnlineIdentitySubsystemLogout* Logout(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum);           // [0xbd55a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineIdentitySubsystemAutoLogin : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,593) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,594) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin.AutoLogin
	// class UOnlineIdentitySubsystemAutoLogin* AutoLogin(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum);     // [0xbd3050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineIdentitySubsystemRevokeAuthToken : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,595) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,596) /* FMulticastInlineDelegate */ __um(OnRevokeAuthTokenComplete);                          // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken.RevokeAuthToken
	// class UOnlineIdentitySubsystemRevokeAuthToken* RevokeAuthToken(class UOnlineIdentitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbd5e00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineIdentitySubsystemGetUserPrivilege : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,597) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,598) /* FMulticastInlineDelegate */ __um(OnGetUserPrivilegeComplete);                         // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	EOnlineUserPrivilege                               __Store__Privilege;                                         // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege.GetUserPrivilege
	// class UOnlineIdentitySubsystemGetUserPrivilege* GetUserPrivilege(class UOnlineIdentitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, EOnlineUserPrivilege Privilege); // [0xbd50a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlineLeaderboardsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0030   (0x0080)  MISSED
	SDK_UNDEFINED(16,599) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(OnLeaderboardFlushComplete);                         // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.WriteLeaderboards
	// bool WriteLeaderboards(FName SessionName, FUniqueNetIdRepl Player, class UOnlineLeaderboardWrite* WriteObject);          // [0xbd5fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbd52e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FreeStats
	// void FreeStats(class UOnlineLeaderboardRead* ReadObject);                                                                // [0xbd4060] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FlushLeaderboards
	// bool FlushLeaderboards(FName SessionName);                                                                               // [0xbd3fc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineLeaderboardsSubsystemReadLeaderboards : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,601) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0070   (0x0010)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards.ReadLeaderboards
	// class UOnlineLeaderboardsSubsystemReadLeaderboards* ReadLeaderboards(class UOnlineLeaderboardsSubsystem* Subsystem, TArray<FUniqueNetIdRepl> Players, class UOnlineLeaderboardRead* ReadObject); // [0xbd57d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,603) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,604) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends.ReadLeaderboardsForFriends
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReadLeaderboardsForFriends(class UOnlineLeaderboardsSubsystem* Subsystem, int32_t LocalUserNum, class UOnlineLeaderboardRead* ReadObject); // [0xbd5d00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,605) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,606) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__Rank;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	int64_t                                            __Store__Range;                                             // 0x0078   (0x0008)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.ReadLeaderboardsAroundRank
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReadLeaderboardsAroundRank(class UOnlineLeaderboardsSubsystem* Subsystem, int32_t Rank, int64_t Range, class UOnlineLeaderboardRead* ReadObject); // [0xbd5970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,607) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,608) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__Player;                                            // 0x0070   (0x0030)  
	int64_t                                            __Store__Range;                                             // 0x00A0   (0x0008)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.ReadLeaderboardsAroundUser
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReadLeaderboardsAroundUser(class UOnlineLeaderboardsSubsystem* Subsystem, FUniqueNetIdRepl Player, int64_t Range, class UOnlineLeaderboardRead* ReadObject); // [0xbd5ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UOnlineLobbySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0030   (0x0098)  MISSED
	SDK_UNDEFINED(16,609) /* FMulticastInlineDelegate */ __um(OnLobbyUpdate);                                      // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,610) /* FMulticastInlineDelegate */ __um(OnLobbyDelete);                                      // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,611) /* FMulticastInlineDelegate */ __um(OnMemberConnect);                                    // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,612) /* FMulticastInlineDelegate */ __um(OnMemberUpdate);                                     // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,613) /* FMulticastInlineDelegate */ __um(OnMemberDisconnect);                                 // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.ParseSerializedLobbyId
	// class ULobbyId* ParseSerializedLobbyId(FString InLobbyId);                                                               // [0xbdb740] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyTransaction
	// class UOnlineLobbyTransaction* MakeUpdateLobbyTransaction(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId);             // [0xbdb550] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyMemberTransaction
	// class UOnlineLobbyMemberTransaction* MakeUpdateLobbyMemberTransaction(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FUniqueNetIdRepl MemberId); // [0xbdb260] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeCreateLobbyTransaction
	// class UOnlineLobbyTransaction* MakeCreateLobbyTransaction(FUniqueNetIdRepl UserId);                                      // [0xbdb0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbdad10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberUserId
	// bool GetMemberUserId(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, int32_t MemberIndex, FUniqueNetIdRepl& OutMemberId); // [0xbdaa20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberMetadataValue
	// bool GetMemberMetadataValue(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FUniqueNetIdRepl MemberId, FString MetadataKey, FVariantDataBP& OutMetadataValue); // [0xbda620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberCount
	// bool GetMemberCount(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, int32_t& OutMemberCount);                          // [0xbda3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetLobbyMetadataValue
	// bool GetLobbyMetadataValue(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FString MetadataKey, FVariantDataBP& OutMetadataValue); // [0xbda110] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemCreateLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,614) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,615) /* FMulticastInlineDelegate */ __um(OnLobbyCreateOrConnectComplete);                     // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class UOnlineLobbyTransaction*                     __Store__Transaction;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby.CreateLobby
	// class UOnlineLobbySubsystemCreateLobby* CreateLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class UOnlineLobbyTransaction* Transaction); // [0xbd9a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineLobbySubsystemUpdateLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,616) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,617) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  
	class UOnlineLobbyTransaction*                     __Store__Transaction;                                       // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby.UpdateLobby
	// class UOnlineLobbySubsystemUpdateLobby* UpdateLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, class UOnlineLobbyTransaction* Transaction); // [0xbdbf30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemDeleteLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,618) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,619) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby.DeleteLobby
	// class UOnlineLobbySubsystemDeleteLobby* DeleteLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0xbd9c50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemConnectLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,620) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,621) /* FMulticastInlineDelegate */ __um(OnLobbyCreateOrConnectComplete);                     // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby.ConnectLobby
	// class UOnlineLobbySubsystemConnectLobby* ConnectLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0xbd9830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemDisconnectLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,622) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,623) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby.DisconnectLobby
	// class UOnlineLobbySubsystemDisconnectLobby* DisconnectLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0xbd9e60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineLobbySubsystemUpdateMemberSelf : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,624) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,625) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  
	class UOnlineLobbyMemberTransaction*               __Store__Transaction;                                       // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf.UpdateMemberSelf
	// class UOnlineLobbySubsystemUpdateMemberSelf* UpdateMemberSelf(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, class UOnlineLobbyMemberTransaction* Transaction); // [0xbdc180] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineLobbySearchQueryFilterBP
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlineLobbySearchQueryFilterBP
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FVariantDataBP                                     Value;                                                      // 0x0010   (0x0028)  
	EOnlineLobbySearchQueryFilterComparator_           Comparison;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineLobbySearchQueryBP
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FOnlineLobbySearchQueryBP
{ 
	TArray<FOnlineLobbySearchQueryFilterBP>            Filters;                                                    // 0x0000   (0x0010)  
	int64_t                                            Limit;                                                      // 0x0010   (0x0008)  
	bool                                               HasLimit;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineLobbySubsystemSearch : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,626) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,627) /* FMulticastInlineDelegate */ __um(OnLobbySearchComplete);                              // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FOnlineLobbySearchQueryBP                          __Store__Query;                                             // 0x0098   (0x0020)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch.Search
	// class UOnlineLobbySubsystemSearch* Search(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, FOnlineLobbySearchQueryBP Query); // [0xbdbcb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemKickMember
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlineLobbySubsystemKickMember : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,628) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,629) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0098   (0x0008)  
	FUniqueNetIdRepl                                   __Store__MemberId;                                          // 0x00A0   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemKickMember.KickMember
	// class UOnlineLobbySubsystemKickMember* KickMember(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FUniqueNetIdRepl MemberId); // [0xbdada0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineMessageSanitizerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.ResetBlockedUserCache
	// void ResetBlockedUserCache();                                                                                            // [0xbdba30] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbdad40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineMessageSanitizerSubsystemSanitizeDisplayName : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,630) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,631) /* FMulticastInlineDelegate */ __um(OnMessageProcessed);                                 // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__DisplayName;                                       // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName.SanitizeDisplayName
	// class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* SanitizeDisplayName(class UOnlineMessageSanitizerSubsystem* Subsystem, FString DisplayName); // [0xbdba50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,632) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,633) /* FMulticastInlineDelegate */ __um(OnMessageArrayProcessed);                            // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	TArray<FString>                                    __Store__DisplayNames;                                      // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames.SanitizeDisplayNames
	// class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* SanitizeDisplayNames(class UOnlineMessageSanitizerSubsystem* Subsystem, TArray<FString> DisplayNames); // [0xbdbb80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineMessageSanitizerSubsystemQueryBlockedUser : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,634) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,635) /* FMulticastInlineDelegate */ __um(OnQueryUserBlockedResponse);                         // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__FromUserId;                                        // 0x0070   (0x0010)  
	FString                                            __Store__FromPlatform;                                      // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser.QueryBlockedUser
	// class UOnlineMessageSanitizerSubsystemQueryBlockedUser* QueryBlockedUser(class UOnlineMessageSanitizerSubsystem* Subsystem, int32_t LocalUserNum, FString FromUserId, FString FromPlatform); // [0xbdb840] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlineMessageSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0030   (0x0090)  MISSED
	SDK_UNDEFINED(16,636) /* FMulticastInlineDelegate */ __um(OnEnumerateMessagesComplete);                        // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,637) /* FMulticastInlineDelegate */ __um(OnSendMessageComplete);                              // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbdad70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.EnumerateMessages
	// bool EnumerateMessages(int32_t LocalUserNum);                                                                            // [0xbda070] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessages
	// bool ClearMessages(int32_t LocalUserNum);                                                                                // [0xbd9790] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessageHeaders
	// bool ClearMessageHeaders(int32_t LocalUserNum);                                                                          // [0xbd96f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000220) align 8 MaxSize: 0x0220
class UOnlinePartySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xF0];                                      // 0x0030   (0x00F0)  MISSED
	SDK_UNDEFINED(16,638) /* FMulticastInlineDelegate */ __um(OnPartyJoined);                                      // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,639) /* FMulticastInlineDelegate */ __um(OnPartyExited);                                      // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,640) /* FMulticastInlineDelegate */ __um(OnPartyStateChanged);                                // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,641) /* FMulticastInlineDelegate */ __um(OnPartyJIPResponse);                                 // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,642) /* FMulticastInlineDelegate */ __um(OnPartyPromotionLockoutChanged);                     // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,643) /* FMulticastInlineDelegate */ __um(OnPartyConfigChanged);                               // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,644) /* FMulticastInlineDelegate */ __um(OnPartyDataReceived);                                // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,645) /* FMulticastInlineDelegate */ __um(OnPartyMemberPromoted);                              // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,646) /* FMulticastInlineDelegate */ __um(OnPartyMemberExited);                                // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,647) /* FMulticastInlineDelegate */ __um(OnPartyMemberJoined);                                // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,648) /* FMulticastInlineDelegate */ __um(OnPartyMemberDataReceived);                          // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,649) /* FMulticastInlineDelegate */ __um(OnPartyInvitesChanged);                              // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,650) /* FMulticastInlineDelegate */ __um(OnPartyInviteRequestReceived);                       // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,651) /* FMulticastInlineDelegate */ __um(OnPartyInviteReceivedEx);                            // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,652) /* FMulticastInlineDelegate */ __um(OnPartyJIPRequestReceived);                          // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,653) /* FMulticastInlineDelegate */ __um(OnFillPartyJoinRequestData);                         // 0x0210   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyMemberData
	// bool UpdatePartyMemberData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyMemberData); // [0xbe4880] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyData
	// bool UpdatePartyData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyData); // [0xbe4620] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.RespondToQueryJoinability
	// void RespondToQueryJoinability(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl RecipientId, bool bCanJoin, int32_t DeniedResultCode, class UReadablePartyData* PartyData); // [0xbe37a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.RejectInvitation
	// bool RejectInvitation(FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl SenderId);                                          // [0xbe31f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeTokenFromJoinInfo
	// FString MakeTokenFromJoinInfo(class UOnlinePartyJoinInfo* JoinInfo);                                                     // [0xbe2df0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeJoinInfoJson
	// FString MakeJoinInfoJson(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                         // [0xbe2bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbe2420] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.IsMemberLeader
	// bool IsMemberLeader(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId);                   // [0xbe2130] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvites
	// bool GetPendingInvites(FUniqueNetIdRepl LocalUserId, TArray<UOnlinePartyJoinInfo*>& OutPendingInvitesArray);             // [0xbe1f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvitedUsers
	// bool GetPendingInvitedUsers(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, TArray<FUniqueNetIdRepl>& OutPendingInvitedUserArray); // [0xbe1cb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMembers
	// bool GetPartyMembers(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, TArray<UBlueprintPartyMember*>& OutPartyMembersArray); // [0xbe1a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberData
	// class UReadablePartyData* GetPartyMemberData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId, FName Namespace); // [0xbe1730] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberCount
	// int64_t GetPartyMemberCount(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                      // [0xbe1540] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMember
	// class UBlueprintPartyMember* GetPartyMember(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId); // [0xbe1250] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyData
	// class UReadablePartyData* GetPartyData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace);          // [0xbe1030] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetParty
	// class UParty* GetParty(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                           // [0xbe0e40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetJoinedParties
	// bool GetJoinedParties(FUniqueNetIdRepl LocalUserId, TArray<UPartyId*>& OutPartyIdArray);                                 // [0xbe0c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.DumpPartyState
	// void DumpPartyState();                                                                                                   // [0xbe0c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJoinRequest
	// bool ApproveJoinRequest(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl RecipientId, bool bIsApproved, int32_t DeniedResultCode); // [0xbdffe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePartySubsystemRestoreParties : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,654) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,655) /* FMulticastInlineDelegate */ __um(OnRestorePartiesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties.RestoreParties
	// class UOnlinePartySubsystemRestoreParties* RestoreParties(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbe3d40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePartySubsystemRestoreInvites : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,656) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,657) /* FMulticastInlineDelegate */ __um(OnRestoreInvitesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites.RestoreInvites
	// class UOnlinePartySubsystemRestoreInvites* RestoreInvites(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbe3b60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePartySubsystemCleanupParties : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,658) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,659) /* FMulticastInlineDelegate */ __um(OnCleanupPartiesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties.CleanupParties
	// class UOnlinePartySubsystemCleanupParties* CleanupParties(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0xbe0690] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlinePartyConfiguration
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlinePartyConfiguration
{ 
	EJoinRequestAction_                                JoinRequestAction;                                          // 0x0000   (0x0001)  
	EPartySystemPermissions                            PresencePermissions;                                        // 0x0001   (0x0001)  
	EPartySystemPermissions                            InvitePermissions;                                          // 0x0002   (0x0001)  
	bool                                               ChatEnabled;                                                // 0x0003   (0x0001)  
	bool                                               ShouldRemoveOnDisconnection;                                // 0x0004   (0x0001)  
	bool                                               IsAcceptingMembers;                                         // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            NotAcceptingMembersReason;                                  // 0x0008   (0x0004)  
	int32_t                                            MaxMembers;                                                 // 0x000C   (0x0004)  
	FString                                            Nickname;                                                   // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Password;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlinePartySubsystemCreateParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,660) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,661) /* FMulticastInlineDelegate */ __um(OnCreatePartyComplete);                              // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	int64_t                                            __Store__PartyTypeId;                                       // 0x0098   (0x0008)  
	FOnlinePartyConfiguration                          __Store__PartyConfig;                                       // 0x00A0   (0x0040)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty.CreateParty
	// class UOnlinePartySubsystemCreateParty* CreateParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, int64_t PartyTypeId, FOnlinePartyConfiguration PartyConfig); // [0xbe0870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UOnlinePartySubsystemUpdateParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,662) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,663) /* FMulticastInlineDelegate */ __um(OnUpdatePartyComplete);                              // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	FOnlinePartyConfiguration                          __Store__PartyConfig;                                       // 0x00A0   (0x0040)  
	bool                                               __Store__bShouldRegenerateReservationKey;                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty.UpdateParty
	// class UOnlinePartySubsystemUpdateParty* UpdateParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FOnlinePartyConfiguration PartyConfig, bool bShouldRegenerateReservationKey); // [0xbe4240] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlinePartySubsystemJoinParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,664) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,665) /* FMulticastInlineDelegate */ __um(OnJoinPartyComplete);                                // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UOnlinePartyJoinInfo*                        __Store__OnlinePartyJoinInfo;                               // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty.JoinParty
	// class UOnlinePartySubsystemJoinParty* JoinParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo); // [0xbe2450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlinePartySubsystemRejoinParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,666) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,667) /* FMulticastInlineDelegate */ __um(OnJoinPartyComplete);                                // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	int64_t                                            __Store__PartyTypeId;                                       // 0x00A0   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__FormerMembers;                                     // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty.RejoinParty
	// class UOnlinePartySubsystemRejoinParty* RejoinParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, int64_t PartyTypeId, TArray<FUniqueNetIdRepl> FormerMembers); // [0xbe34b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlinePartySubsystemLeaveParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,668) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,669) /* FMulticastInlineDelegate */ __um(OnLeavePartyComplete);                               // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	bool                                               __Store__bSynchronizeLeave;                                 // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty.LeaveParty
	// class UOnlinePartySubsystemLeaveParty* LeaveParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, bool bSynchronizeLeave); // [0xbe2980] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlinePartySubsystemSendInvitation : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,670) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,671) /* FMulticastInlineDelegate */ __um(OnSendPartyInvitationComplete);                      // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	FUniqueNetIdRepl                                   __Store__Recipient;                                         // 0x00A0   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation.SendInvitation
	// class UOnlinePartySubsystemSendInvitation* SendInvitation(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl Recipient); // [0xbe3f20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCancelInvitation
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlinePartySubsystemCancelInvitation : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,672) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,673) /* FMulticastInlineDelegate */ __um(OnCancelPartyInvitationComplete);                    // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x0098   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCancelInvitation.CancelInvitation
	// class UOnlinePartySubsystemCancelInvitation* CancelInvitation(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl TargetUserId, class UPartyId* PartyId); // [0xbe0370] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlinePartySubsystemKickMember : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,674) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,675) /* FMulticastInlineDelegate */ __um(OnKickPartyMemberComplete);                          // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	FUniqueNetIdRepl                                   __Store__TargetMemberId;                                    // 0x00A0   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember.KickMember
	// class UOnlinePartySubsystemKickMember* KickMember(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl TargetMemberId); // [0xbe2660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlinePartySubsystemPromoteMember : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,676) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,677) /* FMulticastInlineDelegate */ __um(OnPromotePartyMemberComplete);                       // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0098   (0x0008)  
	FUniqueNetIdRepl                                   __Store__TargetMemberId;                                    // 0x00A0   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember.PromoteMember
	// class UOnlinePartySubsystemPromoteMember* PromoteMember(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl TargetMemberId); // [0xbe2ed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOnlinePresenceSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0030   (0x0080)  MISSED
	SDK_UNDEFINED(16,678) /* FMulticastInlineDelegate */ __um(OnPresenceReceived);                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,679) /* FMulticastInlineDelegate */ __um(OnPresenceArrayUpdated);                             // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbee040] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresenceForApp
	// EOnlineCachedResult_ GetCachedPresenceForApp(FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl User, FString AppID, FOnlineUserPresenceData& OutPresence); // [0xbed2c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresence
	// EOnlineCachedResult_ GetCachedPresence(FUniqueNetIdRepl User, FOnlineUserPresenceData& OutPresence);                     // [0xbecfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineUserPresenceStatusData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FOnlineUserPresenceStatusData
{ 
	FString                                            Status;                                                     // 0x0000   (0x0010)  
	FOnlineUserPresenceStatusState                     State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TMap<FString, FString>                             Properties;                                                 // 0x0018   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UOnlinePresenceSubsystemSetPresence : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,680) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,681) /* FMulticastInlineDelegate */ __um(OnPresenceTaskComplete);                             // 0x0040   (0x0010)  
	class UOnlinePresenceSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__User;                                              // 0x0068   (0x0030)  
	FOnlineUserPresenceStatusData                      __Store__Status;                                            // 0x0098   (0x0068)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence.SetPresence
	// class UOnlinePresenceSubsystemSetPresence* SetPresence(class UOnlinePresenceSubsystem* Subsystem, FUniqueNetIdRepl User, FOnlineUserPresenceStatusData Status); // [0xbef9b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePresenceSubsystemQueryPresence : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,682) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,683) /* FMulticastInlineDelegate */ __um(OnPresenceTaskComplete);                             // 0x0040   (0x0010)  
	class UOnlinePresenceSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__User;                                              // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence.QueryPresence
	// class UOnlinePresenceSubsystemQueryPresence* QueryPresence(class UOnlinePresenceSubsystem* Subsystem, FUniqueNetIdRepl User); // [0xbee6c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlinePurchaseSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,684) /* FMulticastInlineDelegate */ __um(OnUnexpectedPurchaseReceipt);                        // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbee070] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsAllowedToPurchase
	// bool IsAllowedToPurchase(FUniqueNetIdRepl UserId);                                                                       // [0xbedcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.GetReceipts
	// void GetReceipts(FUniqueNetIdRepl UserId, TArray<UPurchaseReceipt*>& OutReceipts);                                       // [0xbed840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.FinalizePurchase
	// void FinalizePurchase(FUniqueNetIdRepl UserId, FString ReceiptId, FString ReceiptInfo);                                  // [0xbec220] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.PurchaseOfferEntryBP
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPurchaseOfferEntryBP
{ 
	FString                                            OfferNamespace;                                             // 0x0000   (0x0010)  
	FString                                            OfferId;                                                    // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.PurchaseCheckoutRequestBP
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPurchaseCheckoutRequestBP
{ 
	FString                                            AccountId;                                                  // 0x0000   (0x0010)  
	TArray<FPurchaseOfferEntryBP>                      PurchaseOffers;                                             // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemCheckout
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlinePurchaseSubsystemCheckout : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,685) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,686) /* FMulticastInlineDelegate */ __um(OnPurchaseCheckoutComplete);                         // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FPurchaseCheckoutRequestBP                         __Store__CheckoutRequest;                                   // 0x0098   (0x0020)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemCheckout.Checkout
	// class UOnlinePurchaseSubsystemCheckout* Checkout(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, FPurchaseCheckoutRequestBP CheckoutRequest); // [0xbeb870] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.RedeemCodeRequestBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRedeemCodeRequestBP
{ 
	FString                                            Code;                                                       // 0x0000   (0x0010)  
	FString                                            CodeUseId;                                                  // 0x0010   (0x0010)  
	FString                                            FulfillmentSource;                                          // 0x0020   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemRedeemCode
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlinePurchaseSubsystemRedeemCode : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,687) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,688) /* FMulticastInlineDelegate */ __um(OnPurchaseRedeemCodeComplete);                       // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FRedeemCodeRequestBP                               __Store__RedeemCodeRequest;                                 // 0x0098   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemRedeemCode.RedeemCode
	// class UOnlinePurchaseSubsystemRedeemCode* RedeemCode(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, FRedeemCodeRequestBP RedeemCodeRequest); // [0xbeeac0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlinePurchaseSubsystemQueryReceipts : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,689) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,690) /* FMulticastInlineDelegate */ __um(OnQueryReceiptsComplete);                            // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	bool                                               __Store__bRestoreReceipts;                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts.QueryReceipts
	// class UOnlinePurchaseSubsystemQueryReceipts* QueryReceipts(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, bool bRestoreReceipts); // [0xbee8a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,691) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,692) /* FMulticastInlineDelegate */ __um(OnFinalizeReceiptValidationInfoComplete);            // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FString                                            __Store__InReceiptValidationInfo;                           // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo.FinalizeReceiptValidationInfo
	// class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* FinalizeReceiptValidationInfo(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString InReceiptValidationInfo); // [0xbec4c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem
/// Size: 0x02B8 (696 bytes) (0x000030 - 0x0002B8) align 8 MaxSize: 0x02B8
class UOnlineSessionSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x128];                                     // 0x0030   (0x0128)  MISSED
	SDK_UNDEFINED(16,693) /* FMulticastInlineDelegate */ __um(OnCreateSessionComplete);                            // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,694) /* FMulticastInlineDelegate */ __um(OnStartSessionComplete);                             // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,695) /* FMulticastInlineDelegate */ __um(OnUpdateSessionComplete);                            // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,696) /* FMulticastInlineDelegate */ __um(OnEndSessionComplete);                               // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,697) /* FMulticastInlineDelegate */ __um(OnDestroySessionComplete);                           // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,698) /* FMulticastInlineDelegate */ __um(OnMatchmakingComplete);                              // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,699) /* FMulticastInlineDelegate */ __um(OnCancelMatchmakingComplete);                        // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,700) /* FMulticastInlineDelegate */ __um(OnFindSessionsComplete);                             // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,701) /* FMulticastInlineDelegate */ __um(OnCancelFindSessionsComplete);                       // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,702) /* FMulticastInlineDelegate */ __um(OnPingSearchResultsComplete);                        // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,703) /* FMulticastInlineDelegate */ __um(OnJoinSessionComplete);                              // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,704) /* FMulticastInlineDelegate */ __um(OnSessionParticipantJoined);                         // 0x0208   (0x0010)  
	SDK_UNDEFINED(16,705) /* FMulticastInlineDelegate */ __um(OnSessionParticipantLeft);                           // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,706) /* FMulticastInlineDelegate */ __um(OnQosDataRequested);                                 // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,707) /* FMulticastInlineDelegate */ __um(OnSessionSettingsUpdated);                           // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,708) /* FMulticastInlineDelegate */ __um(OnSessionParticipantSettingsUpdated);                // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,709) /* FMulticastInlineDelegate */ __um(OnFindFriendSessionComplete);                        // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,710) /* FMulticastInlineDelegate */ __um(OnSessionUserInviteAccepted);                        // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,711) /* FMulticastInlineDelegate */ __um(OnSessionInviteReceived);                            // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,712) /* FMulticastInlineDelegate */ __um(OnRegisterPlayersComplete);                          // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,713) /* FMulticastInlineDelegate */ __um(OnUnregisterPlayersComplete);                        // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,714) /* FMulticastInlineDelegate */ __um(OnSessionFailure);                                   // 0x02A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriends
	// bool SendSessionInviteToFriends(FUniqueNetIdRepl LocalUserId, FName SessionName, TArray<FUniqueNetIdRepl> Friends);      // [0xbef730] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriend
	// bool SendSessionInviteToFriend(FUniqueNetIdRepl LocalUserId, FName SessionName, FUniqueNetIdRepl Friend);                // [0xbef440] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemovePlayerFromSession
	// void RemovePlayerFromSession(int32_t LocalUserNum, FName SessionName, FUniqueNetIdRepl TargetPlayerId);                  // [0xbef230] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemoveNamedSession
	// void RemoveNamedSession(FName SessionName);                                                                              // [0xbef1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbee0a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsPlayerInSession
	// bool IsPlayerInSession(FName SessionName, FUniqueNetIdRepl UniqueId);                                                    // [0xbede60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.HasPresenceSession
	// bool HasPresenceSession();                                                                                               // [0xbedc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetVoiceChatRoomName
	// FString GetVoiceChatRoomName(int32_t LocalUserNum, FName SessionName);                                                   // [0xbedb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionState
	// EOnlineSessionState_ GetSessionState(FName SessionName);                                                                 // [0xbedae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionSettings
	// class UOnlineSessionSettings* GetSessionSettings(FName SessionName);                                                     // [0xbeda40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNumSessions
	// int32_t GetNumSessions();                                                                                                // [0xbed810] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNamedSession
	// class UNamedOnlineSession* GetNamedSession(FName SessionName);                                                           // [0xbed770] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.DumpSessionState
	// void DumpSessionState();                                                                                                 // [0xbec130] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.CreateSessionIdFromString
	// FUniqueNetIdRepl CreateSessionIdFromString(FString SessionIdStr);                                                        // [0xbebf20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSettingBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineSessionSettingBP
{ 
	FVariantDataBP                                     Data;                                                       // 0x0000   (0x0028)  
	EOnlineDataAdvertisementType_                      AdvertisementType;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            ID;                                                         // 0x002C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionMemberSettingsBP
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FOnlineSessionMemberSettingsBP
{ 
	FUniqueNetIdRepl                                   MemberUserId;                                               // 0x0000   (0x0030)  
	TMap<FName, FOnlineSessionSettingBP>               MemberSettings;                                             // 0x0030   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSettingsBP
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FOnlineSessionSettingsBP
{ 
	unsigned char                                      UnknownData00_7[0xD8];                                      // 0x0000   (0x00D8)  MISSED
	int32_t                                            NumPublicConnections;                                       // 0x00D8   (0x0004)  
	int32_t                                            NumPrivateConnections;                                      // 0x00DC   (0x0004)  
	bool                                               bShouldAdvertise;                                           // 0x00E0   (0x0001)  
	bool                                               bAllowJoinInProgress;                                       // 0x00E1   (0x0001)  
	bool                                               bIsLANMatch;                                                // 0x00E2   (0x0001)  
	bool                                               bIsDedicated;                                               // 0x00E3   (0x0001)  
	bool                                               bUsesStats;                                                 // 0x00E4   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x00E5   (0x0001)  
	bool                                               bUsesPresence;                                              // 0x00E6   (0x0001)  
	bool                                               bAllowJoinViaPresence;                                      // 0x00E7   (0x0001)  
	bool                                               bAllowJoinViaPresenceFriendsOnly;                           // 0x00E8   (0x0001)  
	bool                                               bAntiCheatProtected;                                        // 0x00E9   (0x0001)  
	bool                                               bUseLobbiesIfAvailable;                                     // 0x00EA   (0x0001)  
	bool                                               bUseLobbiesVoiceChatIfAvailable;                            // 0x00EB   (0x0001)  
	int32_t                                            BuildUniqueId;                                              // 0x00EC   (0x0004)  
	TMap<FName, FOnlineSessionSettingBP>               Settings;                                                   // 0x00F0   (0x0050)  
	TArray<FOnlineSessionMemberSettingsBP>             MemberSettings;                                             // 0x0140   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession
/// Size: 0x01F8 (504 bytes) (0x000030 - 0x0001F8) align 8 MaxSize: 0x01F8
class UOnlineSessionSubsystemCreateSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,715) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,716) /* FMulticastInlineDelegate */ __um(OnCreateSessionComplete);                            // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__HostingPlayerId;                                   // 0x0070   (0x0030)  
	FName                                              __Store__SessionName;                                       // 0x00A0   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__NewSessionSettings;                                // 0x00A8   (0x0150)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession.CreateSession
	// class UOnlineSessionSubsystemCreateSession* CreateSession(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl HostingPlayerId, FName SessionName, FOnlineSessionSettingsBP NewSessionSettings); // [0xbebc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineSessionSubsystemStartSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,717) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,718) /* FMulticastInlineDelegate */ __um(OnStartSessionComplete);                             // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession.StartSession
	// class UOnlineSessionSubsystemStartSession* StartSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);    // [0xbeff80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession
/// Size: 0x01D0 (464 bytes) (0x000030 - 0x0001D0) align 8 MaxSize: 0x01D0
class UOnlineSessionSubsystemUpdateSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,719) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,720) /* FMulticastInlineDelegate */ __um(OnUpdateSessionComplete);                            // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__UpdatedSessionSettings;                            // 0x0078   (0x0150)  
	bool                                               __Store__bShouldRefreshOnlineData;                          // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x01C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession.UpdateSession
	// class UOnlineSessionSubsystemUpdateSession* UpdateSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName, FOnlineSessionSettingsBP UpdatedSessionSettings, bool bShouldRefreshOnlineData); // [0xbf0400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineSessionSubsystemEndSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,721) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,722) /* FMulticastInlineDelegate */ __um(OnEndSessionComplete);                               // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession.EndSession
	// class UOnlineSessionSubsystemEndSession* EndSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);        // [0xbec150] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineSessionSubsystemDestroySession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,723) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,724) /* FMulticastInlineDelegate */ __um(OnDestroySessionComplete);                           // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FName                                              __Store__SessionName;                                       // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession.DestroySession
	// class UOnlineSessionSubsystemDestroySession* DestroySession(class UOnlineSessionSubsystem* Subsystem, FName SessionName); // [0xbec060] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking
/// Size: 0x01E0 (480 bytes) (0x000030 - 0x0001E0) align 8 MaxSize: 0x01E0
class UOnlineSessionSubsystemStartMatchmaking : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,725) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,726) /* FMulticastInlineDelegate */ __um(OnMatchmakingComplete);                              // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__LocalPlayers;                                      // 0x0070   (0x0010)  
	FName                                              __Store__SessionName;                                       // 0x0080   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__NewSessionSettings;                                // 0x0088   (0x0150)  
	class UOnlineSessionSearch*                        __Store__SearchSettings;                                    // 0x01D8   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking.StartMatchmaking
	// class UOnlineSessionSubsystemStartMatchmaking* StartMatchmaking(class UOnlineSessionSubsystem* Subsystem, TArray<FUniqueNetIdRepl> LocalPlayers, FName SessionName, FOnlineSessionSettingsBP NewSessionSettings, class UOnlineSessionSearch* SearchSettings); // [0xbefcb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineSessionSubsystemCancelMatchmaking : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,727) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,728) /* FMulticastInlineDelegate */ __um(OnCancelMatchmakingComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__SearchingPlayerId;                                 // 0x0070   (0x0030)  
	FName                                              __Store__SessionName;                                       // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking.CancelMatchmaking
	// class UOnlineSessionSubsystemCancelMatchmaking* CancelMatchmaking(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingPlayerId, FName SessionName); // [0xbeb660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineSessionSubsystemFindSessions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,729) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,730) /* FMulticastInlineDelegate */ __um(OnFindSessionsComplete);                             // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__SearchingPlayerId;                                 // 0x0070   (0x0030)  
	class UOnlineSessionSearch*                        __Store__SearchSettings;                                    // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions.FindSessions
	// class UOnlineSessionSubsystemFindSessions* FindSessions(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingPlayerId, class UOnlineSessionSearch* SearchSettings); // [0xbecda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UOnlineSessionSubsystemFindSessionById : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,731) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,732) /* FMulticastInlineDelegate */ __um(OnSingleSessionResultComplete);                      // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__SearchingUserId;                                   // 0x0068   (0x0030)  
	FUniqueNetIdRepl                                   __Store__SessionId;                                         // 0x0098   (0x0030)  
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x00C8   (0x0030)  
	FString                                            __Store__UserData;                                          // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById.FindSessionById
	// class UOnlineSessionSubsystemFindSessionById* FindSessionById(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingUserId, FUniqueNetIdRepl SessionId, FUniqueNetIdRepl FriendId, FString UserData); // [0xbec930] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineSessionSubsystemCancelFindSessions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,733) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,734) /* FMulticastInlineDelegate */ __um(OnCancelFindSessionsComplete);                       // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions.CancelFindSessions
	// class UOnlineSessionSubsystemCancelFindSessions* CancelFindSessions(class UOnlineSessionSubsystem* Subsystem);           // [0xbeb5d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionBP
/// Size: 0x01B0 (432 bytes) (0x000000 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FOnlineSessionBP
{ 
	FUniqueNetIdRepl                                   OwningUserId;                                               // 0x0000   (0x0030)  
	FString                                            OwningUserName;                                             // 0x0030   (0x0010)  
	FOnlineSessionSettingsBP                           SessionSettings;                                            // 0x0040   (0x0150)  
	class UOnlineSessionInfo*                          SessionInfo;                                                // 0x0190   (0x0008)  
	int32_t                                            NumOpenPrivateConnections;                                  // 0x0198   (0x0004)  
	int32_t                                            NumOpenPublicConnections;                                   // 0x019C   (0x0004)  
	FString                                            SessionId;                                                  // 0x01A0   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSearchResultBP
/// Size: 0x01B8 (440 bytes) (0x000000 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FOnlineSessionSearchResultBP
{ 
	FOnlineSessionBP                                   Session;                                                    // 0x0000   (0x01B0)  
	int32_t                                            PingInMs;                                                   // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults
/// Size: 0x0228 (552 bytes) (0x000030 - 0x000228) align 8 MaxSize: 0x0228
class UOnlineSessionSubsystemPingSearchResults : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,735) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,736) /* FMulticastInlineDelegate */ __um(OnPingSearchResultsComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FOnlineSessionSearchResultBP                       __Store__SearchResult;                                      // 0x0070   (0x01B8)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults.PingSearchResults
	// class UOnlineSessionSubsystemPingSearchResults* PingSearchResults(class UOnlineSessionSubsystem* Subsystem, FOnlineSessionSearchResultBP SearchResult); // [0xbee480] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession
/// Size: 0x0260 (608 bytes) (0x000030 - 0x000260) align 8 MaxSize: 0x0260
class UOnlineSessionSubsystemJoinSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,737) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,738) /* FMulticastInlineDelegate */ __um(OnJoinSessionComplete);                              // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0070   (0x0030)  
	FName                                              __Store__SessionName;                                       // 0x00A0   (0x0008)  
	FOnlineSessionSearchResultBP                       __Store__DesiredSession;                                    // 0x00A8   (0x01B8)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession.JoinSession
	// class UOnlineSessionSubsystemJoinSession* JoinSession(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FName SessionName, FOnlineSessionSearchResultBP DesiredSession); // [0xbee0d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineSessionSubsystemFindFriendSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,739) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,740) /* FMulticastInlineDelegate */ __um(OnFindFriendSessionComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__Friend;                                            // 0x0078   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession.FindFriendSession
	// class UOnlineSessionSubsystemFindFriendSession* FindFriendSession(class UOnlineSessionSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl Friend); // [0xbec720] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineSessionSubsystemRegisterPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,741) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,742) /* FMulticastInlineDelegate */ __um(OnRegisterPlayersComplete);                          // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0078   (0x0010)  
	bool                                               __Store__bWasInvited;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers.RegisterPlayers
	// class UOnlineSessionSubsystemRegisterPlayers* RegisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, TArray<FUniqueNetIdRepl> Players, bool bWasInvited); // [0xbeefe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineSessionSubsystemUnregisterPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,743) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,744) /* FMulticastInlineDelegate */ __um(OnUnregisterPlayersComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers.UnregisterPlayers
	// class UOnlineSessionSubsystemUnregisterPlayers* UnregisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, TArray<FUniqueNetIdRepl> Players); // [0xbf0260] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSessionSubsystemRegisterLocalPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,745) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,746) /* FMulticastInlineDelegate */ __um(OnRegisterLocalPlayerComplete);                      // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0030)  
	FName                                              __Store__SessionName;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer.RegisterLocalPlayer
	// class UOnlineSessionSubsystemRegisterLocalPlayer* RegisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl PlayerId, FName SessionName); // [0xbeedd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSessionSubsystemUnregisterLocalPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,747) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,748) /* FMulticastInlineDelegate */ __um(OnUnregisterLocalPlayerComplete);                    // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0030)  
	FName                                              __Store__SessionName;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer.UnregisterLocalPlayer
	// class UOnlineSessionSubsystemUnregisterLocalPlayer* UnregisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl PlayerId, FName SessionName); // [0xbf0050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSharedCloudSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.WriteSharedFile
	// bool WriteSharedFile(FUniqueNetIdRepl UserId, FString Filename, class UFileData*& Contents);                             // [0xbf5f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbf5010] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.ClearSharedFiles
	// bool ClearSharedFiles();                                                                                                 // [0xbf36b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UOnlineSharingSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xB0];                                      // 0x0030   (0x00B0)  MISSED
	SDK_UNDEFINED(16,749) /* FMulticastInlineDelegate */ __um(OnRequestNewReadPermissionsComplete);                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,750) /* FMulticastInlineDelegate */ __um(OnRequestNewPublishPermissionsComplete);             // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,751) /* FMulticastInlineDelegate */ __um(OnReadNewsFeedComplete);                             // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,752) /* FMulticastInlineDelegate */ __um(OnSharePostComplete);                                // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem.ReadNewsFeed
	// bool ReadNewsFeed(int32_t LocalUserNum, int32_t NumPostsToRead);                                                         // [0xbf5ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbf5040] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineStatsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbf5070] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem.GetStats
	// FOnlineStatsUserStatsBP GetStats(FUniqueNetIdRepl StatsUserId);                                                          // [0xbf4d00] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineStatsSubsystemQueryStats : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,753) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,754) /* FMulticastInlineDelegate */ __um(OnlineStatsQueryUsersStatsComplete);                 // 0x0040   (0x0010)  
	class UOnlineStatsSubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FUniqueNetIdRepl>                           __Store__StatUsers;                                         // 0x0098   (0x0010)  
	TArray<FString>                                    __Store__StatNames;                                         // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats.QueryStats
	// class UOnlineStatsSubsystemQueryStats* QueryStats(class UOnlineStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FUniqueNetIdRepl> StatUsers, TArray<FString> StatNames); // [0xbf58a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatUpdateBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineStatUpdateBP
{ 
	EOnlineStatModificationType_                       Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVariantDataBP                                     Value;                                                      // 0x0008   (0x0028)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsUserUpdatedStatsBP
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FOnlineStatsUserUpdatedStatsBP
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0030)  
	TMap<FString, FOnlineStatUpdateBP>                 Stats;                                                      // 0x0030   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineStatsSubsystemUpdateStats : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,755) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,756) /* FMulticastInlineDelegate */ __um(OnlineStatsUpdateStatsComplete);                     // 0x0040   (0x0010)  
	class UOnlineStatsSubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	TArray<FOnlineStatsUserUpdatedStatsBP>             __Store__UpdatedUserStats;                                  // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats.UpdateStats
	// class UOnlineStatsSubsystemUpdateStats* UpdateStats(class UOnlineStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FOnlineStatsUserUpdatedStatsBP> UpdatedUserStats); // [0xbf5c70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineStoreV2Subsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,757) /* FMulticastInlineDelegate */ __um(OnQueryForAvailablePurchasesComplete);               // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbf50a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffers
	// void GetOffers(TArray<UOnlineStoreOffer*>& OutOffers);                                                                   // [0xbf4c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffer
	// class UOnlineStoreOffer* GetOffer(FString OfferId);                                                                      // [0xbf4b50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetCategories
	// void GetCategories(TArray<FOnlineStoreCategoryBP>& OutCategories);                                                       // [0xbf36e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineStoreV2SubsystemQueryCategories : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,758) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,759) /* FMulticastInlineDelegate */ __um(OnQueryOnlineStoreCategoriesComplete);               // 0x0040   (0x0010)  
	class UOnlineStoreV2Subsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories.QueryCategories
	// class UOnlineStoreV2SubsystemQueryCategories* QueryCategories(class UOnlineStoreV2Subsystem* Subsystem, FUniqueNetIdRepl UserId); // [0xbf50d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStoreCategoryBP
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FOnlineStoreCategoryBP
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FText                                              Description;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStoreFilterBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineStoreFilterBP
{ 
	TArray<FString>                                    Keywords;                                                   // 0x0000   (0x0010)  
	TArray<FOnlineStoreCategoryBP>                     IncludeCategories;                                          // 0x0010   (0x0010)  
	TArray<FOnlineStoreCategoryBP>                     ExcludeCategories;                                          // 0x0020   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersByFilter
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlineStoreV2SubsystemQueryOffersByFilter : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,760) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,761) /* FMulticastInlineDelegate */ __um(OnQueryOnlineStoreOffersComplete);                   // 0x0040   (0x0010)  
	class UOnlineStoreV2Subsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FOnlineStoreFilterBP                               __Store__Filter;                                            // 0x0098   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersByFilter.QueryOffersByFilter
	// class UOnlineStoreV2SubsystemQueryOffersByFilter* QueryOffersByFilter(class UOnlineStoreV2Subsystem* Subsystem, FUniqueNetIdRepl UserId, FOnlineStoreFilterBP Filter); // [0xbf52b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineStoreV2SubsystemQueryOffersById : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,762) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,763) /* FMulticastInlineDelegate */ __um(OnQueryOnlineStoreOffersComplete);                   // 0x0040   (0x0010)  
	class UOnlineStoreV2Subsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	TArray<FString>                                    __Store__OfferIds;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById.QueryOffersById
	// class UOnlineStoreV2SubsystemQueryOffersById* QueryOffersById(class UOnlineStoreV2Subsystem* Subsystem, FUniqueNetIdRepl UserId, TArray<FString> OfferIds); // [0xbf5640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSubsystem
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineSubsystem : public UGameInstanceSubsystem
{ 
public:
	TMap<FString, class UGameInstanceSubsystem*>       SubsystemCache;                                             // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceSubsystem
	// class UOnlineVoiceSubsystem* GetNamedVoiceSubsystem(FName SubsystemName);                                                // [0xbf4ab0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceAdminSubsystem
	// class UOnlineVoiceAdminSubsystem* GetNamedVoiceAdminSubsystem(FName SubsystemName);                                      // [0xbf4a10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserSubsystem
	// class UOnlineUserSubsystem* GetNamedUserSubsystem(FName SubsystemName);                                                  // [0xbf4970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserCloudSubsystem
	// class UOnlineUserCloudSubsystem* GetNamedUserCloudSubsystem(FName SubsystemName);                                        // [0xbf48d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTurnBasedSubsystem
	// class UOnlineTurnBasedSubsystem* GetNamedTurnBasedSubsystem(FName SubsystemName);                                        // [0xbf4830] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTournamentSubsystem
	// class UOnlineTournamentSubsystem* GetNamedTournamentSubsystem(FName SubsystemName);                                      // [0xbf4790] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTitleFileSubsystem
	// class UOnlineTitleFileSubsystem* GetNamedTitleFileSubsystem(FName SubsystemName);                                        // [0xbf46f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTimeSubsystem
	// class UOnlineTimeSubsystem* GetNamedTimeSubsystem(FName SubsystemName);                                                  // [0xbf4650] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStoreV2Subsystem
	// class UOnlineStoreV2Subsystem* GetNamedStoreV2Subsystem(FName SubsystemName);                                            // [0xbf45b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStatsSubsystem
	// class UOnlineStatsSubsystem* GetNamedStatsSubsystem(FName SubsystemName);                                                // [0xbf4510] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharingSubsystem
	// class UOnlineSharingSubsystem* GetNamedSharingSubsystem(FName SubsystemName);                                            // [0xbf4470] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharedCloudSubsystem
	// class UOnlineSharedCloudSubsystem* GetNamedSharedCloudSubsystem(FName SubsystemName);                                    // [0xbf43d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSessionSubsystem
	// class UOnlineSessionSubsystem* GetNamedSessionSubsystem(FName SubsystemName);                                            // [0xbf4330] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPurchaseSubsystem
	// class UOnlinePurchaseSubsystem* GetNamedPurchaseSubsystem(FName SubsystemName);                                          // [0xbf4290] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPresenceSubsystem
	// class UOnlinePresenceSubsystem* GetNamedPresenceSubsystem(FName SubsystemName);                                          // [0xbf41f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPartySubsystem
	// class UOnlinePartySubsystem* GetNamedPartySubsystem(FName SubsystemName);                                                // [0xbf4150] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSubsystem
	// class UOnlineMessageSubsystem* GetNamedMessageSubsystem(FName SubsystemName);                                            // [0xbf40b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSanitizerSubsystem
	// class UOnlineMessageSanitizerSubsystem* GetNamedMessageSanitizerSubsystem(FName SubsystemName);                          // [0xbf4010] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLobbySubsystem
	// class UOnlineLobbySubsystem* GetNamedLobbySubsystem(FName SubsystemName);                                                // [0xbf3f70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLeaderboardsSubsystem
	// class UOnlineLeaderboardsSubsystem* GetNamedLeaderboardsSubsystem(FName SubsystemName);                                  // [0xbf3ed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedIdentitySubsystem
	// class UOnlineIdentitySubsystem* GetNamedIdentitySubsystem(FName SubsystemName);                                          // [0xbf3e30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGroupsSubsystem
	// class UOnlineGroupsSubsystem* GetNamedGroupsSubsystem(FName SubsystemName);                                              // [0xbf3d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameItemStatsSubsystem
	// class UOnlineGameItemStatsSubsystem* GetNamedGameItemStatsSubsystem(FName SubsystemName);                                // [0xbf3cf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameActivitySubsystem
	// class UOnlineGameActivitySubsystem* GetNamedGameActivitySubsystem(FName SubsystemName);                                  // [0xbf3c50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedFriendsSubsystem
	// class UOnlineFriendsSubsystem* GetNamedFriendsSubsystem(FName SubsystemName);                                            // [0xbf3bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedExternalUISubsystem
	// class UOnlineExternalUISubsystem* GetNamedExternalUISubsystem(FName SubsystemName);                                      // [0xbf3b10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEventsSubsystem
	// class UOnlineEventsSubsystem* GetNamedEventsSubsystem(FName SubsystemName);                                              // [0xbf3a70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEntitlementsSubsystem
	// class UOnlineEntitlementsSubsystem* GetNamedEntitlementsSubsystem(FName SubsystemName);                                  // [0xbf39d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedChatSubsystem
	// class UOnlineChatSubsystem* GetNamedChatSubsystem(FName SubsystemName);                                                  // [0xbf3930] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAvatarSubsystem
	// class UOnlineAvatarSubsystem* GetNamedAvatarSubsystem(FName SubsystemName);                                              // [0xbf3890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAchievementsSubsystem
	// class UOnlineAchievementsSubsystem* GetNamedAchievementsSubsystem(FName SubsystemName);                                  // [0xbf37f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineTimeSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,764) /* FMulticastInlineDelegate */ __um(OnQueryServerUtcTimeComplete);                       // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.QueryServerUtcTime
	// bool QueryServerUtcTime();                                                                                               // [0xbfc840] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.GetLastServerUtcTime
	// FString GetLastServerUtcTime();                                                                                          // [0xbfbd90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UOnlineTitleFileSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x0030   (0x0088)  MISSED
	SDK_UNDEFINED(16,765) /* FMulticastInlineDelegate */ __um(OnEnumerateFilesComplete);                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,766) /* FMulticastInlineDelegate */ __um(OnReadFileComplete);                                 // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,767) /* FMulticastInlineDelegate */ __um(OnReadFileProgress);                                 // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc2a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileList
	// void GetFileList(TArray<FCloudFileHeaderBP>& Files);                                                                     // [0xbfbc90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileContents
	// bool GetFileContents(FString Filename, class UFileData*& FileContents);                                                  // [0xbfb8d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.DeleteCachedFiles
	// void DeleteCachedFiles(bool bSkipEnumerated);                                                                            // [0xbfa9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFiles
	// bool ClearFiles();                                                                                                       // [0xbfa800] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFile
	// bool ClearFile(FString Filename);                                                                                        // [0xbfa4d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineTitleFileSubsystemEnumerateFiles : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,768) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,769) /* FMulticastInlineDelegate */ __um(OnEnumerateFilesComplete);                           // 0x0040   (0x0010)  
	class UOnlineTitleFileSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FPagedQueryBP                                      __Store__Page;                                              // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles.EnumerateFiles
	// class UOnlineTitleFileSubsystemEnumerateFiles* EnumerateFiles(class UOnlineTitleFileSubsystem* Subsystem, FPagedQueryBP Page); // [0xbfb110] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineTitleFileSubsystemReadFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,770) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,771) /* FMulticastInlineDelegate */ __um(OnReadFileComplete);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,772) /* FMulticastInlineDelegate */ __um(OnReadFileProgress);                                 // 0x0050   (0x0010)  
	class UOnlineTitleFileSubsystem*                   __Store__Subsystem;                                         // 0x0060   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
	FString                                            __Store__FileName;                                          // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile.ReadFile
	// class UOnlineTitleFileSubsystemReadFile* ReadFile(class UOnlineTitleFileSubsystem* Subsystem, FString Filename);         // [0xbfcc70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTournamentSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineTournamentSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTournamentSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc2d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineTurnBasedSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc300] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.GetMatchDataSize
	// int32_t GetMatchDataSize();                                                                                              // [0xbfbe10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UOnlineTurnBasedSubsystemLoadAllMatches : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,773) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,774) /* FMulticastInlineDelegate */ __um(LoadTurnBasedMatchesSignature);                      // 0x0040   (0x0010)  
	class UOnlineTurnBasedSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches.LoadAllMatches
	// class UOnlineTurnBasedSubsystemLoadAllMatches* LoadAllMatches(class UOnlineTurnBasedSubsystem* Subsystem);               // [0xbfc390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineTurnBasedSubsystemLoadMatchWithID : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,775) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,776) /* FMulticastInlineDelegate */ __um(LoadTurnBasedMatchWithIDSignature);                  // 0x0040   (0x0010)  
	class UOnlineTurnBasedSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__MatchID;                                           // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID.LoadMatchWithID
	// class UOnlineTurnBasedSubsystemLoadMatchWithID* LoadMatchWithID(class UOnlineTurnBasedSubsystem* Subsystem, FString MatchID); // [0xbfc420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem
/// Size: 0x0130 (304 bytes) (0x000030 - 0x000130) align 8 MaxSize: 0x0130
class UOnlineUserCloudSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	SDK_UNDEFINED(16,777) /* FMulticastInlineDelegate */ __um(OnEnumerateUserFilesComplete);                       // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,778) /* FMulticastInlineDelegate */ __um(OnReadUserFileComplete);                             // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,779) /* FMulticastInlineDelegate */ __um(OnWriteUserFileProgress);                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,780) /* FMulticastInlineDelegate */ __um(OnWriteUserFileComplete);                            // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,781) /* FMulticastInlineDelegate */ __um(OnWriteUserFileCanceled);                            // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,782) /* FMulticastInlineDelegate */ __um(OnDeleteUserFileComplete);                           // 0x0120   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.RequestUsageInfo
	// bool RequestUsageInfo(FUniqueNetIdRepl UserId);                                                                          // [0xbfd000] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc330] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetUserFileList
	// void GetUserFileList(FUniqueNetIdRepl UserId, TArray<FCloudFileHeaderBP>& UserFiles);                                    // [0xbfbe40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetFileContents
	// bool GetFileContents(FUniqueNetIdRepl UserId, FString Filename, class UFileData*& FileContents);                         // [0xbfba20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudState
	// void DumpCloudState(FUniqueNetIdRepl UserId);                                                                            // [0xbfaf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudFileState
	// void DumpCloudFileState(FUniqueNetIdRepl UserId, FString Filename);                                                      // [0xbfad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFiles
	// bool ClearFiles(FUniqueNetIdRepl UserId);                                                                                // [0xbfa830] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFile
	// bool ClearFile(FUniqueNetIdRepl UserId, FString Filename);                                                               // [0xbfa5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.CancelWriteUserFile
	// void CancelWriteUserFile(FUniqueNetIdRepl UserId, FString Filename);                                                     // [0xbfa2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineUserCloudSubsystemEnumerateUserFiles : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,783) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,784) /* FMulticastInlineDelegate */ __um(OnEnumerateUserFilesComplete);                       // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles.EnumerateUserFiles
	// class UOnlineUserCloudSubsystemEnumerateUserFiles* EnumerateUserFiles(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId); // [0xbfb1e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineUserCloudSubsystemReadUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,785) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,786) /* FMulticastInlineDelegate */ __um(OnReadUserFileComplete);                             // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  
	FString                                            __Store__FileName;                                          // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile.ReadUserFile
	// class UOnlineUserCloudSubsystemReadUserFile* ReadUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename); // [0xbfcda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 8 MaxSize: 0x00F0
class UOnlineUserCloudSubsystemWriteUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,787) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,788) /* FMulticastInlineDelegate */ __um(OnWriteUserFileComplete);                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,789) /* FMulticastInlineDelegate */ __um(OnWriteUserFileProgress);                            // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,790) /* FMulticastInlineDelegate */ __um(OnWriteUserFileCanceled);                            // 0x0060   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0070   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x00A0   (0x0030)  
	FString                                            __Store__FileName;                                          // 0x00D0   (0x0010)  
	class UFileData*                                   __Store__FileContents;                                      // 0x00E0   (0x0008)  
	bool                                               __Store__bCompressBeforeUpload;                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile.WriteUserFile
	// class UOnlineUserCloudSubsystemWriteUserFile* WriteUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename, class UFileData* FileContents, bool bCompressBeforeUpload); // [0xbfd1a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineUserCloudSubsystemDeleteUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,791) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,792) /* FMulticastInlineDelegate */ __um(OnDeleteUserFileComplete);                           // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0030)  
	FString                                            __Store__FileName;                                          // 0x00A0   (0x0010)  
	bool                                               __Store__bShouldCloudDelete;                                // 0x00B0   (0x0001)  
	bool                                               __Store__bShouldLocallyDelete;                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile.DeleteUserFile
	// class UOnlineUserCloudSubsystemDeleteUserFile* DeleteUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete); // [0xbfaa60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineUserSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0030   (0x0080)  MISSED
	SDK_UNDEFINED(16,793) /* FMulticastInlineDelegate */ __um(OnQueryUserInfoComplete);                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xbfc360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetUserInfo
	// class UOnlineUserRef* GetUserInfo(int32_t LocalUserNum, FUniqueNetIdRepl UserId);                                        // [0xbfc090] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMappings
	// void GetExternalIdMappings(FExternalIdQueryOptionsBP QueryOptions, TArray<FString> ExternalIds, TArray<FUniqueNetIdRepl>& OutIds); // [0xbfb690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMapping
	// FUniqueNetIdRepl GetExternalIdMapping(FExternalIdQueryOptionsBP QueryOptions, FString ExternalId);                       // [0xbfb4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetAllUserInfo
	// bool GetAllUserInfo(int32_t LocalUserNum, TArray<UOnlineUserRef*>& OutUsers);                                            // [0xbfb3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineUserSubsystemQueryUserInfo : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,794) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,795) /* FMulticastInlineDelegate */ __um(OnQueryUserInfoComplete);                            // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__UserIds;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo.QueryUserInfo
	// class UOnlineUserSubsystemQueryUserInfo* QueryUserInfo(class UOnlineUserSubsystem* Subsystem, int32_t LocalUserNum, TArray<FUniqueNetIdRepl> UserIds); // [0xbfcad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineUserSubsystemQueryUserIdMapping : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,796) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,797) /* FMulticastInlineDelegate */ __um(OnQueryUserMappingComplete);                         // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FString                                            __Store__DisplayNameOrEmail;                                // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping.QueryUserIdMapping
	// class UOnlineUserSubsystemQueryUserIdMapping* QueryUserIdMapping(class UOnlineUserSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString DisplayNameOrEmail); // [0xbfc870] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ExternalIdQueryOptionsBP
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FExternalIdQueryOptionsBP
{ 
	bool                                               bLookupByDisplayName;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AuthType;                                                   // 0x0008   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineUserSubsystemQueryExternalIdMappings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,798) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,799) /* FMulticastInlineDelegate */ __um(OnQueryExternalIdMappingsComplete);                  // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0030)  
	FExternalIdQueryOptionsBP                          __Store__QueryOptions;                                      // 0x0098   (0x0018)  
	TArray<FString>                                    __Store__ExternalIds;                                       // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings.QueryExternalIdMappings
	// class UOnlineUserSubsystemQueryExternalIdMappings* QueryExternalIdMappings(class UOnlineUserSubsystem* Subsystem, FUniqueNetIdRepl UserId, FExternalIdQueryOptionsBP QueryOptions, TArray<FString> ExternalIds); // [0xbfc550] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineVoiceAdminSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xc02240] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemCreateChannelCredentials
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineVoiceAdminSubsystemCreateChannelCredentials : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,800) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,801) /* FMulticastInlineDelegate */ __um(OnVoiceAdminCreateChannelCredentialsComplete);       // 0x0040   (0x0010)  
	class UOnlineVoiceAdminSubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ChannelName;                                       // 0x0098   (0x0010)  
	TArray<FUniqueNetIdRepl>                           __Store__TargetUserIds;                                     // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemCreateChannelCredentials.CreateChannelCredentials
	// class UOnlineVoiceAdminSubsystemCreateChannelCredentials* CreateChannelCredentials(class UOnlineVoiceAdminSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ChannelName, TArray<FUniqueNetIdRepl> TargetUserIds); // [0xc01280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemKickParticipant
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UOnlineVoiceAdminSubsystemKickParticipant : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,802) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,803) /* FMulticastInlineDelegate */ __um(OnVoiceAdminKickParticipantComplete);                // 0x0040   (0x0010)  
	class UOnlineVoiceAdminSubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ChannelName;                                       // 0x0098   (0x0010)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x00A8   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemKickParticipant.KickParticipant
	// class UOnlineVoiceAdminSubsystemKickParticipant* KickParticipant(class UOnlineVoiceAdminSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ChannelName, FUniqueNetIdRepl TargetUserId); // [0xc022d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemSetParticipantHardMute
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlineVoiceAdminSubsystemSetParticipantHardMute : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,804) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,805) /* FMulticastInlineDelegate */ __um(OnVoiceAdminSetParticipantHardMuteComplete);         // 0x0040   (0x0010)  
	class UOnlineVoiceAdminSubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0030)  
	FString                                            __Store__ChannelName;                                       // 0x0098   (0x0010)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x00A8   (0x0030)  
	bool                                               __Store__bMuted;                                            // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemSetParticipantHardMute.SetParticipantHardMute
	// class UOnlineVoiceAdminSubsystemSetParticipantHardMute* SetParticipantHardMute(class UOnlineVoiceAdminSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ChannelName, FUniqueNetIdRepl TargetUserId, bool bMuted); // [0xc02e10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineVoiceChatSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UVoiceChatUser*                              PrimaryVoiceUser;                                           // 0x0050   (0x0008)  
	SDK_UNDEFINED(16,806) /* FMulticastInlineDelegate */ __um(OnVoiceChatReconnected);                             // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	SDK_UNDEFINED(16,807) /* FMulticastInlineDelegate */ __um(OnVoiceChatConnected);                               // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0080   (0x0008)  MISSED
	SDK_UNDEFINED(16,808) /* FMulticastInlineDelegate */ __um(OnVoiceChatDisconnected);                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Uninitialize_
	// bool Uninitialize_();                                                                                                    // [0xc032f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xc02270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsInitialized
	// bool IsInitialized();                                                                                                    // [0xc01df0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnecting
	// bool IsConnecting();                                                                                                     // [0xc01cf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnected
	// bool IsConnected();                                                                                                      // [0xc01cc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Initialize_
	// bool Initialize_();                                                                                                      // [0xc01c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.CreateUser
	// class UVoiceChatUser* CreateUser();                                                                                      // [0xc01580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemConnect
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineVoiceChatSubsystemConnect : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,809) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,810) /* FMulticastInlineDelegate */ __um(OnVoiceChatConnectComplete);                         // 0x0040   (0x0010)  
	class UOnlineVoiceChatSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemConnect.Connect
	// class UOnlineVoiceChatSubsystemConnect* Connect(class UOnlineVoiceChatSubsystem* Subsystem);                             // [0xc011f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemDisconnect
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineVoiceChatSubsystemDisconnect : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,811) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,812) /* FMulticastInlineDelegate */ __um(OnVoiceChatDisconnectComplete);                      // 0x0040   (0x0010)  
	class UOnlineVoiceChatSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemDisconnect.Disconnect
	// class UOnlineVoiceChatSubsystemDisconnect* Disconnect(class UOnlineVoiceChatSubsystem* Subsystem);                       // [0xc015b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineVoiceSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,813) /* FMulticastInlineDelegate */ __um(OnPlayerTalkingStateChanged);                        // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterRemoteTalker
	// bool UnregisterRemoteTalker(FUniqueNetIdRepl UniqueId);                                                                  // [0xc03600] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalkers
	// void UnregisterLocalTalkers();                                                                                           // [0xc035e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalker
	// bool UnregisterLocalTalker(int64_t LocalUserNum);                                                                        // [0xc03540] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnmuteRemoteTalker
	// bool UnmuteRemoteTalker(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId, bool bIsSystemWide);                            // [0xc03320] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StopNetworkedVoice
	// void StopNetworkedVoice(int32_t LocalUserNum);                                                                           // [0xc03260] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StartNetworkedVoice
	// void StartNetworkedVoice(int32_t LocalUserNum);                                                                          // [0xc031d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RemoveAllRemoteTalkers
	// void RemoveAllRemoteTalkers();                                                                                           // [0xc02d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterRemoteTalker
	// bool RegisterRemoteTalker(FUniqueNetIdRepl UniqueId);                                                                    // [0xc02b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalkers
	// void RegisterLocalTalkers();                                                                                             // [0xc02b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalker
	// bool RegisterLocalTalker(int64_t LocalUserNum);                                                                          // [0xc02ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ProcessMuteChangeNotification
	// void ProcessMuteChangeNotification();                                                                                    // [0xc02aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchRemoteTalkerOutputToEndpoint
	// bool PatchRemoteTalkerOutputToEndpoint(FString InDeviceName, bool bMuteInGameOutput);                                    // [0xc02960] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchLocalTalkerOutputToEndpoint
	// bool PatchLocalTalkerOutputToEndpoint(FString InDeviceName);                                                             // [0xc02860] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.MuteRemoteTalker
	// bool MuteRemoteTalker(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId, bool bIsSystemWide);                              // [0xc02640] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0xc022a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsRemotePlayerTalking
	// bool IsRemotePlayerTalking(FUniqueNetIdRepl UniqueId);                                                                   // [0xc020a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsMuted
	// bool IsMuted(int64_t LocalUserNum, FUniqueNetIdRepl UniqueId);                                                           // [0xc01ec0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsLocalPlayerTalking
	// bool IsLocalPlayerTalking(int64_t LocalUserNum);                                                                         // [0xc01e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsHeadsetPresent
	// bool IsHeadsetPresent(int64_t LocalUserNum);                                                                             // [0xc01d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetVoiceDebugState
	// FString GetVoiceDebugState();                                                                                            // [0xc01c10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetNumLocalTalkers
	// int32_t GetNumLocalTalkers();                                                                                            // [0xc01ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetAmplitudeOfRemoteTalker
	// float GetAmplitudeOfRemoteTalker(FUniqueNetIdRepl PlayerId);                                                             // [0xc01660] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.DisconnectAllEndpoints
	// void DisconnectAllEndpoints();                                                                                           // [0xc01640] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ClearVoicePackets
	// void ClearVoicePackets();                                                                                                // [0xc011d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsWrite
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineAchievementsWrite : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsWrite.SetAchievementProgress
	// void SetAchievementProgress(FName AchievementId, float AchievementProgress);                                             // [0xc02d40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEntitlement
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineEntitlement : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.IsConsumable
	// bool IsConsumable();                                                                                                     // [0xc01d20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetStatus
	// FString GetStatus();                                                                                                     // [0xc01b90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetStartDate
	// FString GetStartDate();                                                                                                  // [0xc01b10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetRemainingCount
	// int32_t GetRemainingCount();                                                                                             // [0xc01ae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetNamespace
	// FString GetNamespace();                                                                                                  // [0xc01a30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetName
	// FString GetName();                                                                                                       // [0xc019b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetItemId
	// FString GetItemId();                                                                                                     // [0xc01930] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetId
	// FString GetId();                                                                                                         // [0xc018b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetEndDate
	// FString GetEndDate();                                                                                                    // [0xc01830] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlement.GetConsumedCount
	// int32_t GetConsumedCount();                                                                                              // [0xc01800] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UExternalUIFlowHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnLoginFlowUIRequired
	// bool OnLoginFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32_t RequestId); // [0xc08ca0] Native|Event|Public|BlueprintEvent 
	// Function /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnCreateAccountFlowUIRequired
	// bool OnCreateAccountFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32_t RequestId); // [0xc08b70] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OnlineSubsystemBlueprints.FileData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFileData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserRef
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UOnlineUserRef : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.SetUserLocalAttribute
	// void SetUserLocalAttribute(FString Key, FString Value, bool& Success);                                                   // [0xc0fc70] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetUserId
	// FUniqueNetIdRepl GetUserId();                                                                                            // [0xc0f370] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetUserAttribute
	// FString GetUserAttribute(FString Key, bool& Found);                                                                      // [0xc0f1a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetRealName
	// FString GetRealName();                                                                                                   // [0xc0ecd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetDisplayName
	// FString GetDisplayName();                                                                                                // [0xc0ea80] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineFriendRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendRef.GetPresence
	// FOnlineUserPresenceData GetPresence();                                                                                   // [0xc08790] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendRef.GetInviteStatus
	// EInviteStatus_ GetInviteStatus();                                                                                        // [0xc08650] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLeaderboardRead : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetSortedColumn
	// void SetSortedColumn(FName SortedColumn);                                                                                // [0xc094b0] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetLeaderboardName
	// void SetLeaderboardName(FName LeaderboardName);                                                                          // [0xc08f50] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetColumns
	// void SetColumns(TArray<FColumnMetaDataBP> InColumns);                                                                    // [0xc08e60] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetSortedColumn
	// FName GetSortedColumn();                                                                                                 // [0xc08b30] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetRows
	// TArray<FOnlineStatsRowBP> GetRows();                                                                                     // [0xc08920] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetReadState
	// EOnlineAsyncTaskState_ GetReadState();                                                                                   // [0xc088f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetLeaderboardName
	// FName GetLeaderboardName();                                                                                              // [0xc086c0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetColumns
	// TArray<FColumnMetaDataBP> GetColumns();                                                                                  // [0xc085a0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.FindPlayerRecord
	// FOnlineStatsRowBP FindPlayerRecord(FUniqueNetIdRepl UserId, bool& OutFound);                                             // [0xc082a0] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardWrite
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineLeaderboardWrite : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardWrite.SetStats
	// void SetStats(TMap<FString, FVariantDataBP> Stats);                                                                      // [0xc09540] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardWrite.SetRatedStat
	// void SetRatedStat(FName RatedStat);                                                                                      // [0xc09420] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardWrite.SetLeaderboardNames
	// void SetLeaderboardNames(TArray<FName> LeaderboardNames);                                                                // [0xc08fe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.LobbyId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULobbyId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.LobbyId.ToDebugString
	// FString ToDebugString();                                                                                                 // [0xc09670] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.Lobby
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULobby : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.Lobby.GetOwnerId
	// FUniqueNetIdRepl GetOwnerId();                                                                                           // [0xc08700] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.Lobby.GetId
	// class ULobbyId* GetId();                                                                                                 // [0xc08620] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLobbyTransaction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetPublic
	// void SetPublic(bool Public);                                                                                             // [0xc09390] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadataByMap
	// void SetMetadataByMap(TMap<FString, FVariantDataBP>& MetaData);                                                          // [0xc09270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadata
	// void SetMetadata(FString Key, FVariantDataBP& Value);                                                                    // [0xc09160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetLocked
	// void SetLocked(bool Locked);                                                                                             // [0xc090d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetCapacity
	// void SetCapacity(int64_t Capacity);                                                                                      // [0xc08dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadataByArray
	// void DeleteMetadataByArray(TArray<FString>& MetaDataKeys);                                                               // [0xc081d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadata
	// void DeleteMetadata(FString Key);                                                                                        // [0xc08130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLobbyMemberTransaction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadataByMap
	// void SetMetadataByMap(TMap<FString, FVariantDataBP>& MetaData);                                                          // [0xc09270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadata
	// void SetMetadata(FString Key, FVariantDataBP& Value);                                                                    // [0xc09160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadataByArray
	// void DeleteMetadataByArray(TArray<FString>& MetaDataKeys);                                                               // [0xc081d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadata
	// void DeleteMetadata(FString Key);                                                                                        // [0xc08130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineRecentPlayerRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineRecentPlayerRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineRecentPlayerRef.GetLastSeen
	// FDateTime GetLastSeen();                                                                                                 // [0xc08680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UUserOnlineAccountRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.SetUserAttribute
	// bool SetUserAttribute(FString Key, FString Value);                                                                       // [0xc0faf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAuthAttribute
	// FString GetAuthAttribute(FString Key, bool& Found);                                                                      // [0xc0e800] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAccessToken
	// FString GetAccessToken();                                                                                                // [0xc0e600] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.Party
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UParty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.Party.GetPartyTypeId
	// int64_t GetPartyTypeId();                                                                                                // [0xc0ebf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.Party.GetPartyId
	// class UPartyId* GetPartyId();                                                                                            // [0xc0ebc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.Party.GetLeaderId
	// FUniqueNetIdRepl GetLeaderId();                                                                                          // [0xc0eb00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.BlueprintPartyMember
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UBlueprintPartyMember : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	SDK_UNDEFINED(16,814) /* FMulticastInlineDelegate */ __um(OnAttributeChanged);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,815) /* FMulticastInlineDelegate */ __um(OnConnectionStatusChanged);                          // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserId
	// FUniqueNetIdRepl GetUserId();                                                                                            // [0xc0f2e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserAttribute
	// bool GetUserAttribute(FString AttrName, FString& OutAttrValue);                                                          // [0xc0f090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetRealName
	// FString GetRealName();                                                                                                   // [0xc0ec50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetDisplayName
	// FString GetDisplayName(FString Platform);                                                                                // [0xc0e990] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.ReadablePartyData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UReadablePartyData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.ReadablePartyData.GetAttribute
	// void GetAttribute(FString AttrName, bool& OutFound, FVariantDataBP& OutAttrValue);                                       // [0xc0e680] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OnlineSubsystemBlueprints.MutablePartyData
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMutablePartyData : public UReadablePartyData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.MutablePartyData.SetAttribute
	// void SetAttribute(FString AttrName, FVariantDataBP AttrValue);                                                           // [0xc0f970] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.MutablePartyData.RemoveAttribute
	// void RemoveAttribute(FString AttrName);                                                                                  // [0xc0f8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.PartyId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPartyId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.PartyId.ToDebugString
	// FString ToDebugString();                                                                                                 // [0xc0fe40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlinePartyJoinInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.ToDebugString
	// FString ToDebugString();                                                                                                 // [0xc0fdc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceUserId
	// FUniqueNetIdRepl GetSourceUserId();                                                                                      // [0xc0f000] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceDisplayName
	// FString GetSourceDisplayName();                                                                                          // [0xc0ef80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetPartyId
	// class UPartyId* GetPartyId();                                                                                            // [0xc0eb90] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.PurchaseReceipt
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPurchaseReceipt : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.PurchaseReceipt.GetTransactionId
	// FString GetTransactionId();                                                                                              // [0xc018b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.PurchaseReceipt.GetReceiptOffers
	// TArray<FReceiptOfferEntryBP> GetReceiptOffers();                                                                         // [0xc0ed50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.PurchaseReceipt.GetPurchaseTransactionState
	// EPurchaseTransactionState_ GetPurchaseTransactionState();                                                                // [0xc0ec20] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineSessionInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSettings
/// Size: 0x0178 (376 bytes) (0x000028 - 0x000178) align 8 MaxSize: 0x0178
class UOnlineSessionSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x150];                                     // 0x0028   (0x0150)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSettings.GetValue
	// FOnlineSessionSettingsBP GetValue();                                                                                     // [0xc0f800] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.NamedOnlineSession
/// Size: 0x0230 (560 bytes) (0x000028 - 0x000230) align 8 MaxSize: 0x0230
class UNamedOnlineSession : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x0028   (0x0208)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.NamedOnlineSession.GetValue
	// FNamedOnlineSessionBP GetValue();                                                                                        // [0xc0f400] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/OnlineSubsystemBlueprints.SessionSearchParamBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSessionSearchParamBP
{ 
	FVariantDataBP                                     Data;                                                       // 0x0000   (0x0028)  
	EOnlineComparisonOp_                               Op;                                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            ID;                                                         // 0x002C   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSearch
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineSessionSearch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	int32_t                                            MaxSearchResults;                                           // 0x0048   (0x0004)  
	bool                                               bIsLanQuery;                                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	int32_t                                            PingBucketSize;                                             // 0x0050   (0x0004)  
	int32_t                                            PlatformHash;                                               // 0x0054   (0x0004)  
	float                                              TimeoutInSeconds;                                           // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TMap<FName, FSessionSearchParamBP>                 SearchParams;                                               // 0x0060   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchState
	// EOnlineAsyncTaskState_ GetSearchState();                                                                                 // [0xc0ef50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchResults
	// TArray<FOnlineSessionSearchResultBP> GetSearchResults();                                                                 // [0xc0ee70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreOffer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineStoreOffer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.IsPurchasable
	// bool IsPurchasable();                                                                                                    // [0xc14470] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetTitle
	// FText GetTitle();                                                                                                        // [0xc13ca0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetReleaseDate
	// FDateTime GetReleaseDate();                                                                                              // [0xc13b20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetRegularPrice
	// int64_t GetRegularPrice();                                                                                               // [0xc13af0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetOfferId
	// FString GetOfferId();                                                                                                    // [0xc018b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetNumericPrice
	// int64_t GetNumericPrice();                                                                                               // [0xc13820] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetLongDescription
	// FText GetLongDescription();                                                                                              // [0xc13780] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetExpirationDate
	// FDateTime GetExpirationDate();                                                                                           // [0xc13660] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetDynamicFields
	// TMap<FString, FString> GetDynamicFields();                                                                               // [0xc13570] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayRegularPrice
	// FText GetDisplayRegularPrice();                                                                                          // [0xc134d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayPrice
	// FText GetDisplayPrice();                                                                                                 // [0xc13430] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetDescription
	// FText GetDescription();                                                                                                  // [0xc13390] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreOffer.GetCurrencyCode
	// FString GetCurrencyCode();                                                                                               // [0xc13250] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.VoiceChatUser
/// Size: 0x0178 (376 bytes) (0x000028 - 0x000178) align 8 MaxSize: 0x0178
class UVoiceChatUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	SDK_UNDEFINED(16,816) /* FMulticastInlineDelegate */ __um(OnVoiceChatAvailableAudioDevicesChanged);            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	SDK_UNDEFINED(16,817) /* FMulticastInlineDelegate */ __um(OnVoiceChatLoggedIn);                                // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	SDK_UNDEFINED(16,818) /* FMulticastInlineDelegate */ __um(OnVoiceChatLoggedOut);                               // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	SDK_UNDEFINED(16,819) /* FMulticastInlineDelegate */ __um(OnVoiceChatChannelJoined);                           // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
	SDK_UNDEFINED(16,820) /* FMulticastInlineDelegate */ __um(OnVoiceChatChannelExited);                           // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	SDK_UNDEFINED(16,821) /* FMulticastInlineDelegate */ __um(OnVoiceChatPlayerAdded);                             // 0x0100   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0110   (0x0008)  MISSED
	SDK_UNDEFINED(16,822) /* FMulticastInlineDelegate */ __um(OnVoiceChatPlayerRemoved);                           // 0x0118   (0x0010)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x0128   (0x0008)  MISSED
	SDK_UNDEFINED(16,823) /* FMulticastInlineDelegate */ __um(OnVoiceChatPlayerTalkingUpdated);                    // 0x0130   (0x0010)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x0140   (0x0008)  MISSED
	SDK_UNDEFINED(16,824) /* FMulticastInlineDelegate */ __um(OnVoiceChatPlayerMuteUpdated);                       // 0x0148   (0x0010)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x0158   (0x0008)  MISSED
	SDK_UNDEFINED(16,825) /* FMulticastInlineDelegate */ __um(OnVoiceChatPlayerVolumeUpdated);                     // 0x0160   (0x0010)  
	unsigned char                                      UnknownData10_7[0x8];                                       // 0x0170   (0x0008)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.UnblockPlayers
	// void UnblockPlayers(TArray<FString> PlayerNames);                                                                        // [0xc15740] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.TransmitToNoChannels
	// void TransmitToNoChannels();                                                                                             // [0xc15720] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.TransmitToAllChannels
	// void TransmitToAllChannels();                                                                                            // [0xc15700] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetSetting
	// void SetSetting(FString Name, FString Value);                                                                            // [0xc15580] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerVolume
	// void SetPlayerVolume(FString PlayerName, float Volume);                                                                  // [0xc15440] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerMuted
	// void SetPlayerMuted(FString PlayerName, bool bMuted);                                                                    // [0xc15310] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetOutputDeviceId
	// void SetOutputDeviceId(FString OutputDeviceId);                                                                          // [0xc15220] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetInputDeviceId
	// void SetInputDeviceId(FString InputDeviceId);                                                                            // [0xc15130] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetChannelPlayerMuted
	// void SetChannelPlayerMuted(FString ChannelName, FString PlayerName, bool bAudioMuted);                                   // [0xc14f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputVolume
	// void SetAudioOutputVolume(float Volume);                                                                                 // [0xc14ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputDeviceMuted
	// void SetAudioOutputDeviceMuted(bool bIsMuted);                                                                           // [0xc14e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputVolume
	// void SetAudioInputVolume(float Volume);                                                                                  // [0xc14de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputDeviceMuted
	// void SetAudioInputDeviceMuted(bool bIsMuted);                                                                            // [0xc14d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.Set3DPosition
	// void Set3DPosition(FString ChannelName, FVector SpeakerPosition, FVector ListenerPosition, FVector ListenerForwardDirection, FVector ListenerUpDirection); // [0xc14ab0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerTalking
	// bool IsPlayerTalking(FString PlayerName);                                                                                // [0xc14370] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerMuted
	// bool IsPlayerMuted(FString PlayerName);                                                                                  // [0xc14270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.IsLoggingIn
	// bool IsLoggingIn();                                                                                                      // [0xc14240] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.IsLoggedIn
	// bool IsLoggedIn();                                                                                                       // [0xc14210] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.IsChannelPlayerMuted
	// bool IsChannelPlayerMuted(FString ChannelName, FString PlayerName);                                                      // [0xc14090] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetLoginToken
	// FString InsecureGetLoginToken(FString PlayerName);                                                                       // [0xc13f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetJoinToken
	// FString InsecureGetJoinToken(FString ChannelName, EVoiceChatChannelType_ ChannelType, FVoiceChatChannel3dPropertiesBP Channel3dProperties); // [0xc13d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetTransmitMode
	// EVoiceChatTransmitMode_ GetTransmitMode();                                                                               // [0xc13d40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetSetting
	// FString GetSetting(FString Name);                                                                                        // [0xc13b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetPlayerVolume
	// float GetPlayerVolume(FString PlayerName);                                                                               // [0xc138b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetPlayersInChannel
	// TArray<FString> GetPlayersInChannel(FString ChannelName);                                                                // [0xc139b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetOutputDeviceInfo
	// FVoiceChatDeviceInfoBP GetOutputDeviceInfo();                                                                            // [0xc13850] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetLoggedInPlayerName
	// FString GetLoggedInPlayerName();                                                                                         // [0xc13700] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetInputDeviceInfo
	// FVoiceChatDeviceInfoBP GetInputDeviceInfo();                                                                             // [0xc136a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultOutputDeviceInfo
	// FVoiceChatDeviceInfoBP GetDefaultOutputDeviceInfo();                                                                     // [0xc13330] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultInputDeviceInfo
	// FVoiceChatDeviceInfoBP GetDefaultInputDeviceInfo();                                                                      // [0xc132d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetChannelType
	// EVoiceChatChannelType_ GetChannelType(FString ChannelName);                                                              // [0xc130d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetChannels
	// TArray<FString> GetChannels();                                                                                           // [0xc131d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableOutputDeviceInfos
	// TArray<FVoiceChatDeviceInfoBP> GetAvailableOutputDeviceInfos();                                                          // [0xc13040] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableInputDeviceInfos
	// TArray<FVoiceChatDeviceInfoBP> GetAvailableInputDeviceInfos();                                                           // [0xc12fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputVolume
	// float GetAudioOutputVolume();                                                                                            // [0xc12f80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputDeviceMuted
	// bool GetAudioOutputDeviceMuted();                                                                                        // [0xc12f50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputVolume
	// float GetAudioInputVolume();                                                                                             // [0xc12f20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputDeviceMuted
	// bool GetAudioInputDeviceMuted();                                                                                         // [0xc12ef0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUser.BlockPlayers
	// void BlockPlayers(TArray<FString> PlayerNames);                                                                          // [0xc12e10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.VoiceChatUserLogin
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UVoiceChatUserLogin : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,826) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,827) /* FMulticastInlineDelegate */ __um(OnVoiceChatLoginComplete);                           // 0x0040   (0x0010)  
	class UVoiceChatUser*                              __Store__Subsystem;                                         // 0x0050   (0x0008)  
	int32_t                                            __Store__PlatformId;                                        // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            __Store__PlayerName;                                        // 0x0060   (0x0010)  
	FString                                            __Store__Credentials;                                       // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUserLogin.Login
	// class UVoiceChatUserLogin* Login(class UVoiceChatUser* Subsystem, int32_t PlatformId, FString PlayerName, FString Credentials); // [0xc14830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.VoiceChatUserLogout
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVoiceChatUserLogout : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,828) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,829) /* FMulticastInlineDelegate */ __um(OnVoiceChatLogoutComplete);                          // 0x0040   (0x0010)  
	class UVoiceChatUser*                              __Store__Subsystem;                                         // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUserLogout.Logout
	// class UVoiceChatUserLogout* Logout(class UVoiceChatUser* Subsystem);                                                     // [0xc14a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.VoiceChatChannel3dPropertiesBP
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FVoiceChatChannel3dPropertiesBP
{ 
	bool                                               bSet;                                                       // 0x0000   (0x0001)  
	EVoiceChatAttenuationModel_                        AttenuationModel;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              MinDistance;                                                // 0x0004   (0x0004)  
	float                                              MaxDistance;                                                // 0x0008   (0x0004)  
	float                                              Rolloff;                                                    // 0x000C   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.VoiceChatUserJoinChannel
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UVoiceChatUserJoinChannel : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,830) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,831) /* FMulticastInlineDelegate */ __um(OnVoiceChatChannelJoinComplete);                     // 0x0040   (0x0010)  
	class UVoiceChatUser*                              __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__ChannelName;                                       // 0x0058   (0x0010)  
	FString                                            __Store__ChannelCredentials;                                // 0x0068   (0x0010)  
	EVoiceChatChannelType_                             __Store__ChannelType;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	FVoiceChatChannel3dPropertiesBP                    __Store__Channel3dProperties;                               // 0x007C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUserJoinChannel.JoinChannel
	// class UVoiceChatUserJoinChannel* JoinChannel(class UVoiceChatUser* Subsystem, FString ChannelName, FString ChannelCredentials, EVoiceChatChannelType_ ChannelType, FVoiceChatChannel3dPropertiesBP Channel3dProperties); // [0xc144a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.VoiceChatUserLeaveChannel
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UVoiceChatUserLeaveChannel : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,832) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,833) /* FMulticastInlineDelegate */ __um(OnVoiceChatChannelLeaveComplete);                    // 0x0040   (0x0010)  
	class UVoiceChatUser*                              __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__ChannelName;                                       // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.VoiceChatUserLeaveChannel.LeaveChannel
	// class UVoiceChatUserLeaveChannel* LeaveChannel(class UVoiceChatUser* Subsystem, FString ChannelName);                    // [0xc14700] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ChatMessageBP
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FChatMessageBP
{ 
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0000   (0x0030)  
	FString                                            Nickname;                                                   // 0x0030   (0x0010)  
	FString                                            Body;                                                       // 0x0040   (0x0010)  
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/OnlineSubsystemBlueprints.FriendSettingsData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFriendSettingsData
{ 
	TMap<FString, FString>                             Data;                                                       // 0x0000   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OptionalOnlineSessionSearchResultBP
/// Size: 0x01C0 (448 bytes) (0x000000 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FOptionalOnlineSessionSearchResultBP
{ 
	bool                                               bSet;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOnlineSessionSearchResultBP                       SearchResult;                                               // 0x0008   (0x01B8)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineErrorInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlineErrorInfo
{ 
	bool                                               Successful;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ErrorRaw;                                                   // 0x0008   (0x0010)  
	FString                                            ErrorCode;                                                  // 0x0018   (0x0010)  
	FText                                              ErrorMessage;                                               // 0x0028   (0x0018)  
};

/// Struct /Script/OnlineSubsystemBlueprints.BlockedQueryResultInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBlockedQueryResultInfo
{ 
	bool                                               Blocked;                                                    // 0x0000   (0x0001)  
	bool                                               BlockedNonFriends;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            UserId;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsUserStatsBP
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FOnlineStatsUserStatsBP
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0030)  
	TMap<FString, FVariantDataBP>                      Stats;                                                      // 0x0030   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.VoiceAdminChannelCredentialsBP
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FVoiceAdminChannelCredentialsBP
{ 
	FUniqueNetIdRepl                                   TargetUserId;                                               // 0x0000   (0x0030)  
	FString                                            PlayerName;                                                 // 0x0030   (0x0010)  
	FString                                            ChannelCredentials;                                         // 0x0040   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.VoiceChatResultBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FVoiceChatResultBP
{ 
	bool                                               Successful;                                                 // 0x0000   (0x0001)  
	EVoiceChatResult_                                  ResultCode;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            ErrorCode;                                                  // 0x0008   (0x0010)  
	int32_t                                            ErrorNum;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ErrorDesc;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineUserPresenceData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FOnlineUserPresenceData
{ 
	FUniqueNetIdRepl                                   SessionId;                                                  // 0x0000   (0x0030)  
	bool                                               IsOnline;                                                   // 0x0030   (0x0001)  
	bool                                               IsPlaying;                                                  // 0x0031   (0x0001)  
	bool                                               IsPlayingThisGame;                                          // 0x0032   (0x0001)  
	bool                                               IsJoinable;                                                 // 0x0033   (0x0001)  
	bool                                               HasVoiceSupport;                                            // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FDateTime                                          LastOnline;                                                 // 0x0038   (0x0008)  
	FOnlineUserPresenceStatusData                      Status;                                                     // 0x0040   (0x0068)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAchievementBP
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOnlineAchievementBP
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	float                                              Progress;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAchievementDescBP
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOnlineAchievementDescBP
{ 
	FText                                              Title;                                                      // 0x0000   (0x0018)  
	FText                                              LockedDesc;                                                 // 0x0018   (0x0018)  
	FText                                              UnlockedDesc;                                               // 0x0030   (0x0018)  
	bool                                               bIsHidden;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FDateTime                                          UnlockTime;                                                 // 0x0050   (0x0008)  
};

/// Struct /Script/OnlineSubsystemBlueprints.ChatRoomConfigBP
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FChatRoomConfigBP
{ 
	bool                                               bRejoinOnDisconnect;                                        // 0x0000   (0x0001)  
	bool                                               bPasswordRequired;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            Password;                                                   // 0x0008   (0x0010)  
	bool                                               bAnnounceMembers;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.ChatRoomInfoBP
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FChatRoomInfoBP
{ 
	bool                                               bIsValid;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            RoomId;                                                     // 0x0008   (0x0010)  
	FUniqueNetIdRepl                                   OwnerId;                                                    // 0x0018   (0x0030)  
	FString                                            Subject;                                                    // 0x0048   (0x0010)  
	bool                                               bPrivate;                                                   // 0x0058   (0x0001)  
	bool                                               bJoined;                                                    // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	FChatRoomConfigBP                                  RoomConfig;                                                 // 0x0060   (0x0020)  
};

/// Struct /Script/OnlineSubsystemBlueprints.ChatRoomMemberBP
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FChatRoomMemberBP
{ 
	bool                                               bIsValid;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0008   (0x0030)  
	FString                                            Nickname;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.LoginFlowResultBP
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FLoginFlowResultBP
{ 
	FString                                            Token;                                                      // 0x0000   (0x0010)  
	FText                                              ErrorMessage;                                               // 0x0010   (0x0018)  
	FString                                            ErrorRaw;                                                   // 0x0028   (0x0010)  
	int32_t                                            NumericErrorCode;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.CloudFileHeaderBP
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FCloudFileHeaderBP
{ 
	FString                                            Hash;                                                       // 0x0000   (0x0010)  
	FName                                              HashType;                                                   // 0x0010   (0x0008)  
	FString                                            DLName;                                                     // 0x0018   (0x0010)  
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            URL;                                                        // 0x0040   (0x0010)  
	int64_t                                            ChunkID;                                                    // 0x0050   (0x0008)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineFriendSettingsSourceDataConfig
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FOnlineFriendSettingsSourceDataConfig
{ 
	bool                                               NeverShowAgain;                                             // 0x0000   (0x0001)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineActivityPlayerLocationBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineActivityPlayerLocationBP
{ 
	bool                                               bSet;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ZoneId;                                                     // 0x0008   (0x0010)  
	FVector                                            Coordinates;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsRowBP
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FOnlineStatsRowBP
{ 
	FString                                            PlayerNickname;                                             // 0x0000   (0x0010)  
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0010   (0x0030)  
	int32_t                                            Rank;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TMap<FName, FVariantDataBP>                        Columns;                                                    // 0x0048   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.ColumnMetaDataBP
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FColumnMetaDataBP
{ 
	FName                                              ColumnName;                                                 // 0x0000   (0x0008)  
	EOnlineKeyValuePairDataType_                       DataType;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.LineItemInfoBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLineItemInfoBP
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            UniqueId;                                                   // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.ReceiptOfferEntryBP
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FReceiptOfferEntryBP
{ 
	FString                                            Namespace;                                                  // 0x0000   (0x0010)  
	FString                                            OfferId;                                                    // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FLineItemInfoBP>                            LineItems;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.NamedOnlineSessionBP
/// Size: 0x0208 (520 bytes) (0x0001B0 - 0x000208) align 8 MaxSize: 0x0208
struct FNamedOnlineSessionBP : FOnlineSessionBP
{ 
	FName                                              SessionName;                                                // 0x01B0   (0x0008)  
	bool                                               bHosting;                                                   // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01B9   (0x0007)  MISSED
	FUniqueNetIdRepl                                   LocalOwnerId;                                               // 0x01C0   (0x0030)  
	TArray<FUniqueNetIdRepl>                           RegisteredPlayers;                                          // 0x01F0   (0x0010)  
	EOnlineSessionState_                               SessionState;                                               // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0201   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.VoiceChatDeviceInfoBP
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FVoiceChatDeviceInfoBP
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	FString                                            ID;                                                         // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UOnlineAchievementsSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineAchievementsSubsystemWriteAchievements) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineAchievementsSubsystemQueryAchievements) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineAchievementsSubsystemQueryAchievementDescriptions) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineAvatarSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineAvatarSubsystemGetAvatar) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlineAvatarSubsystemGetAvatarUrl) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UOnlineChatSubsystem) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(sizeof(UOnlineEntitlementsSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FPagedQueryBP) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UOnlineEntitlementsSubsystemQueryEntitlements) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineEventsSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FExternalUIFlowHandlerRegistration) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UOnlineExternalUISubsystem) == 0x0170); // 368 bytes (0x000030 - 0x000170)
static_assert(sizeof(UOnlineExternalUISubsystemShowLoginUI) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UOnlineExternalUISubsystemShowAccountCreationUI) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FShowWebUrlParameters) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UOnlineExternalUISubsystemShowWebURL) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineExternalUISubsystemShowProfileUI) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(FShowStoreParameters) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOnlineExternalUISubsystemShowStoreUI) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FOnlineMessagePayloadData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FShowSendMessageParameters) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UOnlineExternalUISubsystemShowSendMessageUI) == 0x0160); // 352 bytes (0x000030 - 0x000160)
static_assert(sizeof(UOnlineExternalUISubsystemShowSendMessageToUserUI) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(sizeof(UOnlineFriendsSubsystem) == 0x0258); // 600 bytes (0x000030 - 0x000258)
static_assert(sizeof(UOnlineFriendsSubsystemReadFriendsList) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineFriendsSubsystemDeleteFriendsList) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineFriendsSubsystemSendInvite) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineFriendsSubsystemAcceptInvite) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineFriendsSubsystemRejectInvite) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineFriendsSubsystemSetFriendAlias) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineFriendsSubsystemDeleteFriendAlias) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineFriendsSubsystemDeleteFriend) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FReportPlayedWithUserInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlineFriendsSubsystemAddRecentPlayers) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineFriendsSubsystemQueryRecentPlayers) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineFriendsSubsystemBlockPlayer) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineFriendsSubsystemUnblockPlayer) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineFriendsSubsystemQueryBlockedPlayers) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineFriendsSubsystemQueryFriendSettings) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineFriendsSubsystemSetFriendSettings) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGameActivitySubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FVariantDataBP) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOnlineGameActivitySubsystemStartActivity) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(UOnlineGameActivitySubsystemEndActivity) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UOnlineGameActivitySubsystemResetAllActiveActivities) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FOnlineActivityTasksToResetBP) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOnlineGameActivitySubsystemResumeActivity) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlineGameActivitySubsystemSetActivityAvailability) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGameActivitySubsystemSetActivityPriority) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UOnlineGameItemStatsSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemUsage) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemImpact) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemMitigation) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemAvailabilityChange) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemInventoryChange) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemLoadoutChange) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineGroupsSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOnlineIdentitySubsystem) == 0x0130); // 304 bytes (0x000030 - 0x000130)
static_assert(sizeof(FOnlineAccountCredential) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlineIdentitySubsystemLogin) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineIdentitySubsystemLogout) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineIdentitySubsystemAutoLogin) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineIdentitySubsystemRevokeAuthToken) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineIdentitySubsystemGetUserPrivilege) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLeaderboardsSubsystem) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboards) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineLobbySubsystem) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UOnlineLobbySubsystemCreateLobby) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLobbySubsystemUpdateLobby) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineLobbySubsystemDeleteLobby) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLobbySubsystemConnectLobby) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLobbySubsystemDisconnectLobby) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLobbySubsystemUpdateMemberSelf) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FOnlineLobbySearchQueryFilterBP) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FOnlineLobbySearchQueryBP) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UOnlineLobbySubsystemSearch) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineLobbySubsystemKickMember) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlineMessageSanitizerSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemQueryBlockedUser) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineMessageSubsystem) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlinePartySubsystem) == 0x0220); // 544 bytes (0x000030 - 0x000220)
static_assert(sizeof(UOnlinePartySubsystemRestoreParties) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePartySubsystemRestoreInvites) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePartySubsystemCleanupParties) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FOnlinePartyConfiguration) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePartySubsystemCreateParty) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlinePartySubsystemUpdateParty) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UOnlinePartySubsystemJoinParty) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlinePartySubsystemRejoinParty) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlinePartySubsystemLeaveParty) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlinePartySubsystemSendInvitation) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlinePartySubsystemCancelInvitation) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlinePartySubsystemKickMember) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlinePartySubsystemPromoteMember) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UOnlinePresenceSubsystem) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(FOnlineUserPresenceStatusData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UOnlinePresenceSubsystemSetPresence) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UOnlinePresenceSubsystemQueryPresence) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePurchaseSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FPurchaseOfferEntryBP) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPurchaseCheckoutRequestBP) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UOnlinePurchaseSubsystemCheckout) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FRedeemCodeRequestBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlinePurchaseSubsystemRedeemCode) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UOnlinePurchaseSubsystemQueryReceipts) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineSessionSubsystem) == 0x02B8); // 696 bytes (0x000030 - 0x0002B8)
static_assert(sizeof(FOnlineSessionSettingBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineSessionMemberSettingsBP) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FOnlineSessionSettingsBP) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(UOnlineSessionSubsystemCreateSession) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(UOnlineSessionSubsystemStartSession) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineSessionSubsystemUpdateSession) == 0x01D0); // 464 bytes (0x000030 - 0x0001D0)
static_assert(sizeof(UOnlineSessionSubsystemEndSession) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineSessionSubsystemDestroySession) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UOnlineSessionSubsystemStartMatchmaking) == 0x01E0); // 480 bytes (0x000030 - 0x0001E0)
static_assert(sizeof(UOnlineSessionSubsystemCancelMatchmaking) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineSessionSubsystemFindSessions) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineSessionSubsystemFindSessionById) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UOnlineSessionSubsystemCancelFindSessions) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FOnlineSessionBP) == 0x01B0); // 432 bytes (0x000000 - 0x0001B0)
static_assert(sizeof(FOnlineSessionSearchResultBP) == 0x01B8); // 440 bytes (0x000000 - 0x0001B8)
static_assert(sizeof(UOnlineSessionSubsystemPingSearchResults) == 0x0228); // 552 bytes (0x000030 - 0x000228)
static_assert(sizeof(UOnlineSessionSubsystemJoinSession) == 0x0260); // 608 bytes (0x000030 - 0x000260)
static_assert(sizeof(UOnlineSessionSubsystemFindFriendSession) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineSessionSubsystemRegisterPlayers) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineSessionSubsystemUnregisterPlayers) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineSessionSubsystemRegisterLocalPlayer) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSessionSubsystemUnregisterLocalPlayer) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSharedCloudSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSharingSubsystem) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UOnlineStatsSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineStatsSubsystemQueryStats) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FOnlineStatUpdateBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineStatsUserUpdatedStatsBP) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UOnlineStatsSubsystemUpdateStats) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineStoreV2Subsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineStoreV2SubsystemQueryCategories) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FOnlineStoreCategoryBP) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FOnlineStoreFilterBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlineStoreV2SubsystemQueryOffersByFilter) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UOnlineStoreV2SubsystemQueryOffersById) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineSubsystem) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineTimeSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineTitleFileSubsystem) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UOnlineTitleFileSubsystemEnumerateFiles) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineTitleFileSubsystemReadFile) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineTournamentSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineTurnBasedSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineTurnBasedSubsystemLoadAllMatches) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UOnlineTurnBasedSubsystemLoadMatchWithID) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineUserCloudSubsystem) == 0x0130); // 304 bytes (0x000030 - 0x000130)
static_assert(sizeof(UOnlineUserCloudSubsystemEnumerateUserFiles) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineUserCloudSubsystemReadUserFile) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineUserCloudSubsystemWriteUserFile) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UOnlineUserCloudSubsystemDeleteUserFile) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineUserSubsystem) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineUserSubsystemQueryUserInfo) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineUserSubsystemQueryUserIdMapping) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FExternalIdQueryOptionsBP) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UOnlineUserSubsystemQueryExternalIdMappings) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineVoiceAdminSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineVoiceAdminSubsystemCreateChannelCredentials) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineVoiceAdminSubsystemKickParticipant) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UOnlineVoiceAdminSubsystemSetParticipantHardMute) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlineVoiceChatSubsystem) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineVoiceChatSubsystemConnect) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UOnlineVoiceChatSubsystemDisconnect) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UOnlineVoiceSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineAchievementsWrite) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineEntitlement) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UExternalUIFlowHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFileData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineUserRef) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UOnlineFriendRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UOnlineLeaderboardRead) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLeaderboardWrite) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(ULobbyId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULobby) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLobbyTransaction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLobbyMemberTransaction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineRecentPlayerRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UUserOnlineAccountRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UParty) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UBlueprintPartyMember) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UReadablePartyData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMutablePartyData) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UPartyId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlinePartyJoinInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPurchaseReceipt) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineSessionInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineSessionSettings) == 0x0178); // 376 bytes (0x000028 - 0x000178)
static_assert(sizeof(UNamedOnlineSession) == 0x0230); // 560 bytes (0x000028 - 0x000230)
static_assert(sizeof(FSessionSearchParamBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlineSessionSearch) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UOnlineStoreOffer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVoiceChatUser) == 0x0178); // 376 bytes (0x000028 - 0x000178)
static_assert(sizeof(UVoiceChatUserLogin) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UVoiceChatUserLogout) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FVoiceChatChannel3dPropertiesBP) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UVoiceChatUserJoinChannel) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UVoiceChatUserLeaveChannel) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(FChatMessageBP) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FFriendSettingsData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FOptionalOnlineSessionSearchResultBP) == 0x01C0); // 448 bytes (0x000000 - 0x0001C0)
static_assert(sizeof(FOnlineErrorInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBlockedQueryResultInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOnlineStatsUserStatsBP) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FVoiceAdminChannelCredentialsBP) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FVoiceChatResultBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineUserPresenceData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FOnlineAchievementBP) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOnlineAchievementDescBP) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FChatRoomConfigBP) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FChatRoomInfoBP) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FChatRoomMemberBP) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FLoginFlowResultBP) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCloudFileHeaderBP) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FOnlineFriendSettingsSourceDataConfig) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FOnlineActivityPlayerLocationBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineStatsRowBP) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FColumnMetaDataBP) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLineItemInfoBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FReceiptOfferEntryBP) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNamedOnlineSessionBP) == 0x0208); // 520 bytes (0x0001B0 - 0x000208)
static_assert(sizeof(FVoiceChatDeviceInfoBP) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UOnlineAchievementsSubsystemWriteAchievements, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAchievementsSubsystemWriteAchievements, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAchievementsSubsystemWriteAchievements, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineAchievementsSubsystemWriteAchievements, __Store__WriteObject) == 0x0098);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__TargetUserId) == 0x0098);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__DefaultTexture) == 0x00C8);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatarUrl, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatarUrl, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatarUrl, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatarUrl, __Store__TargetUserId) == 0x0098);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatarUrl, __Store__DefaultAvatarUrl) == 0x00C8);
static_assert(offsetof(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Namespace) == 0x00A0);
static_assert(offsetof(UOnlineEntitlementsSubsystemQueryEntitlements, __Store__Page) == 0x00B0);
static_assert(offsetof(FExternalUIFlowHandlerRegistration, Interface) == 0x0000);
static_assert(offsetof(UOnlineExternalUISubsystem, FlowHandlers) == 0x00A8);
static_assert(offsetof(UOnlineExternalUISubsystemShowLoginUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowLoginUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(FShowWebUrlParameters, AllowedDomains) == 0x0018);
static_assert(offsetof(FShowWebUrlParameters, CallbackPath) == 0x0028);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__Url) == 0x0068);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__ShowParams) == 0x0078);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestor) == 0x0068);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestee) == 0x0098);
static_assert(offsetof(FShowStoreParameters, Category) == 0x0000);
static_assert(offsetof(FShowStoreParameters, ProductId) == 0x0010);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__ShowParams) == 0x0070);
static_assert(offsetof(FShowSendMessageParameters, DisplayTitle) == 0x0000);
static_assert(offsetof(FShowSendMessageParameters, DisplayTitle_Loc) == 0x0018);
static_assert(offsetof(FShowSendMessageParameters, DisplayMessage) == 0x0068);
static_assert(offsetof(FShowSendMessageParameters, DisplayDetails) == 0x0080);
static_assert(offsetof(FShowSendMessageParameters, DisplayDetails_Loc) == 0x0098);
static_assert(offsetof(FShowSendMessageParameters, DataPayload) == 0x00E8);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__ShowParams) == 0x0070);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Recipient) == 0x0070);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__ShowParams) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__ListName) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__ListName) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__ListName) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__ListName) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemRejectInvite, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemRejectInvite, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemRejectInvite, __Store__FriendId) == 0x0078);
static_assert(offsetof(UOnlineFriendsSubsystemRejectInvite, __Store__ListName) == 0x00A8);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__ListName) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__Alias) == 0x00B0);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__ListName) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriend, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriend, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriend, __Store__FriendId) == 0x0078);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriend, __Store__ListName) == 0x00A8);
static_assert(offsetof(FReportPlayedWithUserInfo, UserId) == 0x0000);
static_assert(offsetof(FReportPlayedWithUserInfo, PresenceStr) == 0x0030);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__InRecentPlayers) == 0x0098);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__ListName) == 0x00A8);
static_assert(offsetof(UOnlineFriendsSubsystemQueryRecentPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemQueryRecentPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemQueryRecentPlayers, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemQueryRecentPlayers, __Store__Namespace) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemBlockPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemBlockPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemBlockPlayer, __Store__PlayerId) == 0x0078);
static_assert(offsetof(UOnlineFriendsSubsystemUnblockPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemUnblockPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemUnblockPlayer, __Store__PlayerId) == 0x0078);
static_assert(offsetof(UOnlineFriendsSubsystemQueryBlockedPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemQueryBlockedPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemQueryBlockedPlayers, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__Source) == 0x0098);
static_assert(offsetof(FVariantDataBP, Type) == 0x0000);
static_assert(offsetof(FVariantDataBP, AsString) == 0x0018);
static_assert(offsetof(UOnlineGameActivitySubsystemStartActivity, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemStartActivity, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemStartActivity, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemStartActivity, __Store__ActivityId) == 0x0098);
static_assert(offsetof(UOnlineGameActivitySubsystemStartActivity, __Store__Parms) == 0x00A8);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__ActivityId) == 0x0098);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__ActivityOutcome) == 0x00A8);
static_assert(offsetof(UOnlineGameActivitySubsystemEndActivity, __Store__Parms) == 0x00B0);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(FOnlineActivityTasksToResetBP, InProgressTasks) == 0x0008);
static_assert(offsetof(FOnlineActivityTasksToResetBP, CompletedTasks) == 0x0018);
static_assert(offsetof(UOnlineGameActivitySubsystemResumeActivity, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemResumeActivity, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemResumeActivity, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemResumeActivity, __Store__ActivityId) == 0x0098);
static_assert(offsetof(UOnlineGameActivitySubsystemResumeActivity, __Store__TasksToReset) == 0x00A8);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__ActivityId) == 0x0098);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__PrioritizedActivities) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemUsedBy) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemsUsed) == 0x00A8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__TargetActors) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__ImpactInitiatedBy) == 0x00A8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__ItemsUsed) == 0x00B8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemsUsed) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ImpactItemsMitigated) == 0x00A8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemUsedBy) == 0x00B8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__AvailableItems) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__UnavailableItems) == 0x00A8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToAdd) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToRemove) == 0x00A8);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__EquippedItems) == 0x0098);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__UnequippedItems) == 0x00A8);
static_assert(offsetof(FOnlineAccountCredential, Type) == 0x0000);
static_assert(offsetof(FOnlineAccountCredential, ID) == 0x0010);
static_assert(offsetof(FOnlineAccountCredential, Token) == 0x0020);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__AccountCredentials) == 0x0078);
static_assert(offsetof(UOnlineIdentitySubsystemLogout, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemLogout, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemAutoLogin, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemAutoLogin, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Privilege) == 0x0098);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Players) == 0x0070);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__ReadObject) == 0x0080);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__ReadObject) == 0x0078);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__ReadObject) == 0x0080);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Player) == 0x0070);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__ReadObject) == 0x00A8);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__Transaction) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__Transaction) == 0x00A0);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Transaction) == 0x00A0);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Key) == 0x0000);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Value) == 0x0010);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Comparison) == 0x0038);
static_assert(offsetof(FOnlineLobbySearchQueryBP, Filters) == 0x0000);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__Query) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemKickMember, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemKickMember, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemKickMember, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemKickMember, __Store__LobbyId) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemKickMember, __Store__MemberId) == 0x00A0);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__DisplayName) == 0x0068);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__DisplayNames) == 0x0068);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromUserId) == 0x0070);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromPlatform) == 0x0080);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(FOnlinePartyConfiguration, JoinRequestAction) == 0x0000);
static_assert(offsetof(FOnlinePartyConfiguration, PresencePermissions) == 0x0001);
static_assert(offsetof(FOnlinePartyConfiguration, InvitePermissions) == 0x0002);
static_assert(offsetof(FOnlinePartyConfiguration, Nickname) == 0x0010);
static_assert(offsetof(FOnlinePartyConfiguration, Description) == 0x0020);
static_assert(offsetof(FOnlinePartyConfiguration, Password) == 0x0030);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__PartyConfig) == 0x00A0);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__PartyConfig) == 0x00A0);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__OnlinePartyJoinInfo) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__FormerMembers) == 0x00A8);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__Recipient) == 0x00A0);
static_assert(offsetof(UOnlinePartySubsystemCancelInvitation, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemCancelInvitation, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemCancelInvitation, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemCancelInvitation, __Store__TargetUserId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemCancelInvitation, __Store__PartyId) == 0x00C8);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__TargetMemberId) == 0x00A0);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__PartyId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__TargetMemberId) == 0x00A0);
static_assert(offsetof(FOnlineUserPresenceStatusData, Status) == 0x0000);
static_assert(offsetof(FOnlineUserPresenceStatusData, State) == 0x0010);
static_assert(offsetof(FOnlineUserPresenceStatusData, Properties) == 0x0018);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__User) == 0x0068);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__Status) == 0x0098);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__User) == 0x0068);
static_assert(offsetof(FPurchaseOfferEntryBP, OfferNamespace) == 0x0000);
static_assert(offsetof(FPurchaseOfferEntryBP, OfferId) == 0x0010);
static_assert(offsetof(FPurchaseCheckoutRequestBP, AccountId) == 0x0000);
static_assert(offsetof(FPurchaseCheckoutRequestBP, PurchaseOffers) == 0x0010);
static_assert(offsetof(UOnlinePurchaseSubsystemCheckout, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemCheckout, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemCheckout, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemCheckout, __Store__CheckoutRequest) == 0x0098);
static_assert(offsetof(FRedeemCodeRequestBP, Code) == 0x0000);
static_assert(offsetof(FRedeemCodeRequestBP, CodeUseId) == 0x0010);
static_assert(offsetof(FRedeemCodeRequestBP, FulfillmentSource) == 0x0020);
static_assert(offsetof(UOnlinePurchaseSubsystemRedeemCode, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemRedeemCode, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemRedeemCode, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemRedeemCode, __Store__RedeemCodeRequest) == 0x0098);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__InReceiptValidationInfo) == 0x0098);
static_assert(offsetof(FOnlineSessionSettingBP, Data) == 0x0000);
static_assert(offsetof(FOnlineSessionSettingBP, AdvertisementType) == 0x0028);
static_assert(offsetof(FOnlineSessionMemberSettingsBP, MemberUserId) == 0x0000);
static_assert(offsetof(FOnlineSessionMemberSettingsBP, MemberSettings) == 0x0030);
static_assert(offsetof(FOnlineSessionSettingsBP, Settings) == 0x00F0);
static_assert(offsetof(FOnlineSessionSettingsBP, MemberSettings) == 0x0140);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__HostingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__SessionName) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__NewSessionSettings) == 0x00A8);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__UpdatedSessionSettings) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__SessionName) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__LocalPlayers) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__SessionName) == 0x0080);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__NewSessionSettings) == 0x0088);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__SearchSettings) == 0x01D8);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__SearchingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__SessionName) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__SearchingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__SearchSettings) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__SearchingUserId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__SessionId) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__FriendId) == 0x00C8);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__UserData) == 0x00F8);
static_assert(offsetof(UOnlineSessionSubsystemCancelFindSessions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCancelFindSessions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(FOnlineSessionBP, OwningUserId) == 0x0000);
static_assert(offsetof(FOnlineSessionBP, OwningUserName) == 0x0030);
static_assert(offsetof(FOnlineSessionBP, SessionSettings) == 0x0040);
static_assert(offsetof(FOnlineSessionBP, SessionInfo) == 0x0190);
static_assert(offsetof(FOnlineSessionBP, SessionId) == 0x01A0);
static_assert(offsetof(FOnlineSessionSearchResultBP, Session) == 0x0000);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__SearchResult) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__LocalUserId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__SessionName) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__DesiredSession) == 0x00A8);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__Friend) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__Players) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__Players) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__SessionName) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__SessionName) == 0x0098);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__StatUsers) == 0x0098);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__StatNames) == 0x00A8);
static_assert(offsetof(FOnlineStatUpdateBP, Type) == 0x0000);
static_assert(offsetof(FOnlineStatUpdateBP, Value) == 0x0008);
static_assert(offsetof(FOnlineStatsUserUpdatedStatsBP, PlayerId) == 0x0000);
static_assert(offsetof(FOnlineStatsUserUpdatedStatsBP, Stats) == 0x0030);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__UpdatedUserStats) == 0x0098);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__UserId) == 0x0068);
static_assert(offsetof(FOnlineStoreCategoryBP, ID) == 0x0000);
static_assert(offsetof(FOnlineStoreCategoryBP, Description) == 0x0010);
static_assert(offsetof(FOnlineStoreFilterBP, Keywords) == 0x0000);
static_assert(offsetof(FOnlineStoreFilterBP, IncludeCategories) == 0x0010);
static_assert(offsetof(FOnlineStoreFilterBP, ExcludeCategories) == 0x0020);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersByFilter, __Store__Filter) == 0x0098);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__OfferIds) == 0x0098);
static_assert(offsetof(UOnlineSubsystem, SubsystemCache) == 0x0030);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Page) == 0x0070);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__Subsystem) == 0x0060);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__CallUniquenessId) == 0x0068);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__FileName) == 0x0088);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__MatchID) == 0x0068);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__FileName) == 0x00A0);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__Subsystem) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__CallUniquenessId) == 0x0078);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__UserId) == 0x00A0);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileName) == 0x00D0);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileContents) == 0x00E0);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__FileName) == 0x00A0);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__UserIds) == 0x0078);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__DisplayNameOrEmail) == 0x0098);
static_assert(offsetof(FExternalIdQueryOptionsBP, AuthType) == 0x0008);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__QueryOptions) == 0x0098);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__ExternalIds) == 0x00B0);
static_assert(offsetof(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__ChannelName) == 0x0098);
static_assert(offsetof(UOnlineVoiceAdminSubsystemCreateChannelCredentials, __Store__TargetUserIds) == 0x00A8);
static_assert(offsetof(UOnlineVoiceAdminSubsystemKickParticipant, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineVoiceAdminSubsystemKickParticipant, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineVoiceAdminSubsystemKickParticipant, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineVoiceAdminSubsystemKickParticipant, __Store__ChannelName) == 0x0098);
static_assert(offsetof(UOnlineVoiceAdminSubsystemKickParticipant, __Store__TargetUserId) == 0x00A8);
static_assert(offsetof(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__ChannelName) == 0x0098);
static_assert(offsetof(UOnlineVoiceAdminSubsystemSetParticipantHardMute, __Store__TargetUserId) == 0x00A8);
static_assert(offsetof(UOnlineVoiceChatSubsystem, PrimaryVoiceUser) == 0x0050);
static_assert(offsetof(UOnlineVoiceChatSubsystemConnect, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineVoiceChatSubsystemDisconnect, __Store__Subsystem) == 0x0050);
static_assert(offsetof(FSessionSearchParamBP, Data) == 0x0000);
static_assert(offsetof(FSessionSearchParamBP, Op) == 0x0028);
static_assert(offsetof(UOnlineSessionSearch, SearchParams) == 0x0060);
static_assert(offsetof(UVoiceChatUserLogin, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UVoiceChatUserLogin, __Store__PlayerName) == 0x0060);
static_assert(offsetof(UVoiceChatUserLogin, __Store__Credentials) == 0x0070);
static_assert(offsetof(UVoiceChatUserLogout, __Store__Subsystem) == 0x0050);
static_assert(offsetof(FVoiceChatChannel3dPropertiesBP, AttenuationModel) == 0x0001);
static_assert(offsetof(UVoiceChatUserJoinChannel, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UVoiceChatUserJoinChannel, __Store__ChannelName) == 0x0058);
static_assert(offsetof(UVoiceChatUserJoinChannel, __Store__ChannelCredentials) == 0x0068);
static_assert(offsetof(UVoiceChatUserJoinChannel, __Store__ChannelType) == 0x0078);
static_assert(offsetof(UVoiceChatUserJoinChannel, __Store__Channel3dProperties) == 0x007C);
static_assert(offsetof(UVoiceChatUserLeaveChannel, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UVoiceChatUserLeaveChannel, __Store__ChannelName) == 0x0058);
static_assert(offsetof(FChatMessageBP, UserId) == 0x0000);
static_assert(offsetof(FChatMessageBP, Nickname) == 0x0030);
static_assert(offsetof(FChatMessageBP, Body) == 0x0040);
static_assert(offsetof(FChatMessageBP, Timestamp) == 0x0050);
static_assert(offsetof(FFriendSettingsData, Data) == 0x0000);
static_assert(offsetof(FOptionalOnlineSessionSearchResultBP, SearchResult) == 0x0008);
static_assert(offsetof(FOnlineErrorInfo, ErrorRaw) == 0x0008);
static_assert(offsetof(FOnlineErrorInfo, ErrorCode) == 0x0018);
static_assert(offsetof(FOnlineErrorInfo, ErrorMessage) == 0x0028);
static_assert(offsetof(FBlockedQueryResultInfo, UserId) == 0x0008);
static_assert(offsetof(FOnlineStatsUserStatsBP, PlayerId) == 0x0000);
static_assert(offsetof(FOnlineStatsUserStatsBP, Stats) == 0x0030);
static_assert(offsetof(FVoiceAdminChannelCredentialsBP, TargetUserId) == 0x0000);
static_assert(offsetof(FVoiceAdminChannelCredentialsBP, PlayerName) == 0x0030);
static_assert(offsetof(FVoiceAdminChannelCredentialsBP, ChannelCredentials) == 0x0040);
static_assert(offsetof(FVoiceChatResultBP, ResultCode) == 0x0001);
static_assert(offsetof(FVoiceChatResultBP, ErrorCode) == 0x0008);
static_assert(offsetof(FVoiceChatResultBP, ErrorDesc) == 0x0020);
static_assert(offsetof(FOnlineUserPresenceData, SessionId) == 0x0000);
static_assert(offsetof(FOnlineUserPresenceData, LastOnline) == 0x0038);
static_assert(offsetof(FOnlineUserPresenceData, Status) == 0x0040);
static_assert(offsetof(FOnlineAchievementBP, ID) == 0x0000);
static_assert(offsetof(FOnlineAchievementDescBP, Title) == 0x0000);
static_assert(offsetof(FOnlineAchievementDescBP, LockedDesc) == 0x0018);
static_assert(offsetof(FOnlineAchievementDescBP, UnlockedDesc) == 0x0030);
static_assert(offsetof(FOnlineAchievementDescBP, UnlockTime) == 0x0050);
static_assert(offsetof(FChatRoomConfigBP, Password) == 0x0008);
static_assert(offsetof(FChatRoomInfoBP, RoomId) == 0x0008);
static_assert(offsetof(FChatRoomInfoBP, OwnerId) == 0x0018);
static_assert(offsetof(FChatRoomInfoBP, Subject) == 0x0048);
static_assert(offsetof(FChatRoomInfoBP, RoomConfig) == 0x0060);
static_assert(offsetof(FChatRoomMemberBP, UserId) == 0x0008);
static_assert(offsetof(FChatRoomMemberBP, Nickname) == 0x0038);
static_assert(offsetof(FLoginFlowResultBP, Token) == 0x0000);
static_assert(offsetof(FLoginFlowResultBP, ErrorMessage) == 0x0010);
static_assert(offsetof(FLoginFlowResultBP, ErrorRaw) == 0x0028);
static_assert(offsetof(FCloudFileHeaderBP, Hash) == 0x0000);
static_assert(offsetof(FCloudFileHeaderBP, HashType) == 0x0010);
static_assert(offsetof(FCloudFileHeaderBP, DLName) == 0x0018);
static_assert(offsetof(FCloudFileHeaderBP, Filename) == 0x0028);
static_assert(offsetof(FCloudFileHeaderBP, URL) == 0x0040);
static_assert(offsetof(FOnlineActivityPlayerLocationBP, ZoneId) == 0x0008);
static_assert(offsetof(FOnlineActivityPlayerLocationBP, Coordinates) == 0x0018);
static_assert(offsetof(FOnlineStatsRowBP, PlayerNickname) == 0x0000);
static_assert(offsetof(FOnlineStatsRowBP, PlayerId) == 0x0010);
static_assert(offsetof(FOnlineStatsRowBP, Columns) == 0x0048);
static_assert(offsetof(FColumnMetaDataBP, ColumnName) == 0x0000);
static_assert(offsetof(FColumnMetaDataBP, DataType) == 0x0008);
static_assert(offsetof(FLineItemInfoBP, ItemName) == 0x0000);
static_assert(offsetof(FLineItemInfoBP, UniqueId) == 0x0010);
static_assert(offsetof(FLineItemInfoBP, ValidationInfo) == 0x0020);
static_assert(offsetof(FReceiptOfferEntryBP, Namespace) == 0x0000);
static_assert(offsetof(FReceiptOfferEntryBP, OfferId) == 0x0010);
static_assert(offsetof(FReceiptOfferEntryBP, LineItems) == 0x0028);
static_assert(offsetof(FNamedOnlineSessionBP, SessionName) == 0x01B0);
static_assert(offsetof(FNamedOnlineSessionBP, LocalOwnerId) == 0x01C0);
static_assert(offsetof(FNamedOnlineSessionBP, RegisteredPlayers) == 0x01F0);
static_assert(offsetof(FNamedOnlineSessionBP, SessionState) == 0x0200);
static_assert(offsetof(FVoiceChatDeviceInfoBP, DisplayName) == 0x0000);
static_assert(offsetof(FVoiceChatDeviceInfoBP, ID) == 0x0010);
