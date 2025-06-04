
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/GameAnalytics.EGAResourceFlowType
/// Size: 0x01 (1 bytes)
enum class EGAResourceFlowType : uint8_t
{
	EGAResourceFlowType__undefined                                                   = 0,
	EGAResourceFlowType__source                                                      = 1,
	EGAResourceFlowType__sink                                                        = 2
};

/// Enum /Script/GameAnalytics.EGAProgressionStatus
/// Size: 0x01 (1 bytes)
enum class EGAProgressionStatus : uint8_t
{
	EGAProgressionStatus__undefined                                                  = 0,
	EGAProgressionStatus__start                                                      = 1,
	EGAProgressionStatus__complete                                                   = 2,
	EGAProgressionStatus__fail                                                       = 3
};

/// Enum /Script/GameAnalytics.EGAErrorSeverity
/// Size: 0x01 (1 bytes)
enum class EGAErrorSeverity : uint8_t
{
	EGAErrorSeverity__undefined                                                      = 0,
	EGAErrorSeverity__debug                                                          = 1,
	EGAErrorSeverity__info                                                           = 2,
	EGAErrorSeverity__warning                                                        = 3,
	EGAErrorSeverity__error                                                          = 4,
	EGAErrorSeverity__critical                                                       = 5
};

/// Enum /Script/GameAnalytics.EGAAdAction
/// Size: 0x01 (1 bytes)
enum class EGAAdAction : uint8_t
{
	EGAAdAction__undefined                                                           = 0,
	EGAAdAction__clicked                                                             = 1,
	EGAAdAction__show                                                                = 2,
	EGAAdAction__failedshow                                                          = 3,
	EGAAdAction__rewardreceived                                                      = 4,
	EGAAdAction__request                                                             = 5,
	EGAAdAction__loaded                                                              = 6
};

/// Enum /Script/GameAnalytics.EGAAdType
/// Size: 0x01 (1 bytes)
enum class EGAAdType : uint8_t
{
	EGAAdType__undefined                                                             = 0,
	EGAAdType__video                                                                 = 1,
	EGAAdType__rewardedvideo                                                         = 2,
	EGAAdType__playable                                                              = 3,
	EGAAdType__interstitial                                                          = 4,
	EGAAdType__offerwall                                                             = 5,
	EGAAdType__banner                                                                = 6
};

/// Enum /Script/GameAnalytics.EGAAdError
/// Size: 0x01 (1 bytes)
enum class EGAAdError : uint8_t
{
	EGAAdError__undefined                                                            = 0,
	EGAAdError__unknown                                                              = 1,
	EGAAdError__offline                                                              = 2,
	EGAAdError__nofill                                                               = 3,
	EGAAdError__internalerror                                                        = 4,
	EGAAdError__invalidrequest                                                       = 5,
	EGAAdError__unabletoprecache                                                     = 6
};

/// Class /Script/GameAnalytics.GameAnalytics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameAnalytics : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension03
	// void SetCustomDimension03(FString CustomDimension);                                                                      // [0x1b87e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension02
	// void SetCustomDimension02(FString CustomDimension);                                                                      // [0x1b87cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.SetCustomDimension01
	// void SetCustomDimension01(FString CustomDimension);                                                                      // [0x1b87b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.OnQuit
	// void OnQuit();                                                                                                           // [0x1b87af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.IsRemoteConfigsReady
	// bool IsRemoteConfigsReady();                                                                                             // [0x1b87ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue
	// FString GetRemoteConfigsValueAsStringWithDefaultValue(FString Key, FString DefaultValue);                                // [0x1b87980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString
	// FString GetRemoteConfigsValueAsString(FString Key);                                                                      // [0x1b878a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString
	// FString GetRemoteConfigsContentAsString();                                                                               // [0x1b877d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetABTestingVariantId
	// FString GetABTestingVariantId();                                                                                         // [0x1b87700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.GetABTestingId
	// FString GetABTestingId();                                                                                                // [0x1b87630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEventWithMergeFields
	// void AddResourceEventWithMergeFields(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b873d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEventWithFields
	// void AddResourceEventWithFields(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b87170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddResourceEvent
	// void AddResourceEvent(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId);   // [0x1b86fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeScoreAndMergeFields
	// void AddProgressionEventWithOneTwoThreeScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b86d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeScoreAndFields
	// void AddProgressionEventWithOneTwoThreeScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b86af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore
	// void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score); // [0x1b86930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndMergeFields
	// void AddProgressionEventWithOneTwoThreeAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b86710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndFields
	// void AddProgressionEventWithOneTwoThreeAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b864f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoScoreAndMergeFields
	// void AddProgressionEventWithOneTwoScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b862e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoScoreAndFields
	// void AddProgressionEventWithOneTwoScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b860d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
	// void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03); // [0x1b85f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
	// void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score); // [0x1b85de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndMergeFields
	// void AddProgressionEventWithOneTwoAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b85c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndFields
	// void AddProgressionEventWithOneTwoAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b85a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneScoreAndMergeFields
	// void AddProgressionEventWithOneScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b858b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneScoreAndFields
	// void AddProgressionEventWithOneScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b85700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
	// void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02); // [0x1b855d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
	// void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score);   // [0x1b853d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndMergeFields
	// void AddProgressionEventWithOneAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b85260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndFields
	// void AddProgressionEventWithOneAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b850f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddProgressionEventWithOne
	// void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, FString Progression01);                          // [0x1b84f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEventWithMergeFields
	// void AddErrorEventWithMergeFields(EGAErrorSeverity Severity, FString Message, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b84db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEventWithFields
	// void AddErrorEventWithFields(EGAErrorSeverity Severity, FString Message, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b84c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddErrorEvent
	// void AddErrorEvent(EGAErrorSeverity Severity, FString Message);                                                          // [0x1b84a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValueAndMergeFields
	// void AddDesignEventWithValueAndMergeFields(FString EventId, float Value, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b84900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValueAndFields
	// void AddDesignEventWithValueAndFields(FString EventId, float Value, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b84790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithValue
	// void AddDesignEventWithValue(FString EventId, float Value);                                                              // [0x1b845c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithMergeFields
	// void AddDesignEventWithMergeFields(FString EventId, TArray<FGameAnalyticsCustomEventField>& CustomFields);               // [0x1b84490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEventWithFields
	// void AddDesignEventWithFields(FString EventId, TArray<FGameAnalyticsCustomEventField>& CustomFields);                    // [0x1b84360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddDesignEvent
	// void AddDesignEvent(FString EventId);                                                                                    // [0x1b841b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventWithMergeFields
	// void AddBusinessEventWithMergeFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b83f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventWithFields
	// void AddBusinessEventWithFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b83cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOSWithMergeFields
	// void AddBusinessEventIOSWithMergeFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b838c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOSWithFields
	// void AddBusinessEventIOSWithFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b838c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventIOS
	// void AddBusinessEventIOS(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt); // [0x1b836c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroidWithMergeFields
	// void AddBusinessEventAndroidWithMergeFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b83260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroidWithFields
	// void AddBusinessEventAndroidWithFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b83260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndroid
	// void AddBusinessEventAndroid(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature); // [0x1b83010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceiptWithMergeFields
	// void AddBusinessEventAndAutoFetchReceiptWithMergeFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b82da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceiptWithFields
	// void AddBusinessEventAndAutoFetchReceiptWithFields(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b82da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
	// void AddBusinessEventAndAutoFetchReceipt(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType); // [0x1b82bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddBusinessEvent
	// void AddBusinessEvent(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType);             // [0x1b82a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReasonAndMergeFields
	// void AddAdEventWithNoAdReasonAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b827d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReasonAndFields
	// void AddAdEventWithNoAdReasonAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b827d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason
	// void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason); // [0x1b82630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithMergeFields
	// void AddAdEventWithMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b82420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithFields
	// void AddAdEventWithFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b82420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDurationAndMergeFields
	// void AddAdEventWithDurationAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b821d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDurationAndFields
	// void AddAdEventWithDurationAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration, TArray<FGameAnalyticsCustomEventField>& CustomFields); // [0x1b821d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEventWithDuration
	// void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration); // [0x1b82030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameAnalytics.GameAnalytics.AddAdEvent
	// void AddAdEvent(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement);                           // [0x1b81ed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameAnalytics.GameAnalyticsCustomEventField
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameAnalyticsCustomEventField
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UGameAnalytics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameAnalyticsCustomEventField) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FGameAnalyticsCustomEventField, Key) == 0x0000);
static_assert(offsetof(FGameAnalyticsCustomEventField, Value) == 0x0010);
