
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

/// Enum /Script/Sentry.ESentryLevel
/// Size: 0x01 (1 bytes)
enum class ESentryLevel : uint8_t
{
	ESentryLevel__Debug                                                              = 0,
	ESentryLevel__Info                                                               = 1,
	ESentryLevel__Warning                                                            = 2,
	ESentryLevel__Error                                                              = 3,
	ESentryLevel__Fatal                                                              = 4
};

/// Enum /Script/Sentry.ESentryCrashedLastRun
/// Size: 0x01 (1 bytes)
enum class ESentryCrashedLastRun : uint8_t
{
	ESentryCrashedLastRun__NotEvaluated                                              = 0,
	ESentryCrashedLastRun__NotCrashed                                                = 1,
	ESentryCrashedLastRun__Crashed                                                   = 2
};

/// Enum /Script/Sentry.ESentryTracesSamplingType
/// Size: 0x01 (1 bytes)
enum class ESentryTracesSamplingType : uint8_t
{
	ESentryTracesSamplingType__UniformSampleRate                                     = 0,
	ESentryTracesSamplingType__TracesSampler                                         = 1
};

/// Class /Script/Sentry.SentryAttachment
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryAttachment : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryAttachment.InitializeWithPath
	// void InitializeWithPath(FString Path, FString Filename, FString ContentType);                                            // [0x21443c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.InitializeWithData
	// void InitializeWithData(TArray<char>& Data, FString Filename, FString ContentType);                                      // [0x2144250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.GetPath
	// FString GetPath();                                                                                                       // [0x2143ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetFilename
	// FString GetFilename();                                                                                                   // [0x2143d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetData
	// TArray<char> GetData();                                                                                                  // [0x21438b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetContentType
	// FString GetContentType();                                                                                                // [0x2143740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryBeforeSendHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USentryBeforeSendHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/Sentry.SentryBeforeSendHandler.HandleBeforeSend
	// class USentryEvent* HandleBeforeSend(class USentryEvent* Event, class USentryHint* Hint);                                // [0x2144180] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/Sentry.SentryBreadcrumb
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryBreadcrumb : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryBreadcrumb.SetType
	// void SetType(FString Type);                                                                                              // [0x21453f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetMessage
	// void SetMessage(FString Message);                                                                                        // [0x2145130] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x2144fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                              // [0x2144a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetCategory
	// void SetCategory(FString Category);                                                                                      // [0x2144860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.GetType
	// FString GetType();                                                                                                       // [0x2143740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetMessage
	// FString GetMessage();                                                                                                    // [0x2143ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x2143e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetData
	// TMap<FString, FString> GetData();                                                                                        // [0x2143930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetCategory
	// FString GetCategory();                                                                                                   // [0x21436c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryEvent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryEvent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryEvent.SetMessage
	// void SetMessage(FString Message);                                                                                        // [0x2145130] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x2145030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.IsCrash
	// bool IsCrash();                                                                                                          // [0x2144510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryEvent.GetMessage
	// FString GetMessage();                                                                                                    // [0x2143ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryEvent.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x2143e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryEvent.CreateEventWithMessageAndLevel
	// class USentryEvent* CreateEventWithMessageAndLevel(FString Message, ESentryLevel Level);                                 // [0x2142bd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryHint
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryHint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryHint.AddAttachment
	// void AddAttachment(class USentryAttachment* Attachment);                                                                 // [0x2142960] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryId.ToString
	// FString ToString();                                                                                                      // [0x21438b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USentryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Sentry.SentryLibrary.StringToBytesArray
	// TArray<char> StringToBytesArray(FString InString);                                                                       // [0x2145490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.SaveStringToFile
	// FString SaveStringToFile(FString InString, FString Filename);                                                            // [0x2144720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUserFeedback
	// class USentryUserFeedback* CreateSentryUserFeedback(class USentryId* EventId, FString Name, FString Email, FString Comments); // [0x2143530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUser
	// class USentryUser* CreateSentryUser(FString Email, FString ID, FString Username, FString Ipaddress, TMap<FString, FString>& Data); // [0x21432d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryTransactionContext
	// class USentryTransactionContext* CreateSentryTransactionContext(FString Name, FString Operation);                        // [0x21431d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryEvent
	// class USentryEvent* CreateSentryEvent(FString Message, ESentryLevel Level);                                              // [0x2142bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryBreadcrumb
	// class USentryBreadcrumb* CreateSentryBreadcrumb(FString Message, FString Type, FString Category, TMap<FString, FString>& Data, ESentryLevel Level); // [0x2142f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	// class USentryAttachment* CreateSentryAttachmentWithPath(FString Path, FString Filename, FString ContentType);            // [0x2142e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithData
	// class USentryAttachment* CreateSentryAttachmentWithData(TArray<char>& Data, FString Filename, FString ContentType);      // [0x2142cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.ByteArrayToString
	// FString ByteArrayToString(TArray<char>& Array);                                                                          // [0x2142a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Sentry.SentrySamplingContext
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentrySamplingContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentrySamplingContext.GetTransactionContext
	// class USentryTransactionContext* GetTransactionContext();                                                                // [0x2144150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentrySamplingContext.GetCustomSamplingContext
	// TMap<FString, FString> GetCustomSamplingContext();                                                                       // [0x21437c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryScope
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryScope : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryScope.SetTagValue
	// void SetTagValue(FString Key, FString Value);                                                                            // [0x21451d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetTags
	// void SetTags(TMap<FString, FString>& Tags);                                                                              // [0x21452d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x21450b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetFingerprint
	// void SetFingerprint(TArray<FString>& Fingerprint);                                                                       // [0x2144ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtraValue
	// void SetExtraValue(FString Key, FString Value);                                                                          // [0x2144cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtras
	// void SetExtras(TMap<FString, FString>& Extras);                                                                          // [0x2144dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetEnvironment
	// void SetEnvironment(FString Environment);                                                                                // [0x2144c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetDist
	// void SetDist(FString Dist);                                                                                              // [0x2144b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                            // [0x2144900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x2144680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveExtra
	// void RemoveExtra(FString Key);                                                                                           // [0x21445e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveContext
	// void RemoveContext(FString Key);                                                                                         // [0x2144540] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.GetTagValue
	// FString GetTagValue(FString Key);                                                                                        // [0x2143f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetTags
	// TMap<FString, FString> GetTags();                                                                                        // [0x2144060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x2143ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetFingerprint
	// TArray<FString> GetFingerprint();                                                                                        // [0x2143d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtraValue
	// FString GetExtraValue(FString Key);                                                                                      // [0x2143b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtras
	// TMap<FString, FString> GetExtras();                                                                                      // [0x2143c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetEnvironment
	// FString GetEnvironment();                                                                                                // [0x2143aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetDist
	// FString GetDist();                                                                                                       // [0x2143a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                                 // [0x2142bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.ClearAttachments
	// void ClearAttachments();                                                                                                 // [0x2142b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.Clear
	// void Clear();                                                                                                            // [0x2142b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                                 // [0x2142960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddAttachment
	// void AddAttachment(class USentryAttachment* Attachment);                                                                 // [0x21429f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Sentry.AutomaticBreadcrumbs
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FAutomaticBreadcrumbs
{ 
	bool                                               bOnMapLoadingStarted;                                       // 0x0000   (0x0001)  
	bool                                               bOnMapLoaded;                                               // 0x0001   (0x0001)  
	bool                                               bOnGameStateClassChanged;                                   // 0x0002   (0x0001)  
	bool                                               bOnGameSessionIDChanged;                                    // 0x0003   (0x0001)  
	bool                                               bOnUserActivityStringChanged;                               // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.AutomaticBreadcrumbsForLogs
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FAutomaticBreadcrumbsForLogs
{ 
	bool                                               bOnFatalLog;                                                // 0x0000   (0x0001)  
	bool                                               bOnErrorLog;                                                // 0x0001   (0x0001)  
	bool                                               bOnWarningLog;                                              // 0x0002   (0x0001)  
	bool                                               bOnInfoLog;                                                 // 0x0003   (0x0001)  
	bool                                               bOnDebugLog;                                                // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.TagsPromotion
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FTagsPromotion
{ 
	bool                                               bPromoteBuildConfiguration;                                 // 0x0000   (0x0001)  
	bool                                               bPromoteTargetType;                                         // 0x0001   (0x0001)  
	bool                                               bPromoteEngineMode;                                         // 0x0002   (0x0001)  
	bool                                               bPromoteIsGame;                                             // 0x0003   (0x0001)  
	bool                                               bPromoteIsStandalone;                                       // 0x0004   (0x0001)  
	bool                                               bPromoteIsUnattended;                                       // 0x0005   (0x0001)  
};

/// Struct /Script/Sentry.EnableBuildConfigurations
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FEnableBuildConfigurations
{ 
	bool                                               bEnableDebug;                                               // 0x0000   (0x0001)  
	bool                                               bEnableDebugGame;                                           // 0x0001   (0x0001)  
	bool                                               bEnableDevelopment;                                         // 0x0002   (0x0001)  
	bool                                               bEnableTest;                                                // 0x0003   (0x0001)  
	bool                                               bEnableShipping;                                            // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.EnableBuildTargets
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FEnableBuildTargets
{ 
	bool                                               bEnableClient;                                              // 0x0000   (0x0001)  
	bool                                               bEnableGame;                                                // 0x0001   (0x0001)  
	bool                                               bEnableEditor;                                              // 0x0002   (0x0001)  
	bool                                               bEnableServer;                                              // 0x0003   (0x0001)  
	bool                                               bEnableProgram;                                             // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.EnableBuildPlatforms
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FEnableBuildPlatforms
{ 
	bool                                               bEnableLinux;                                               // 0x0000   (0x0001)  
	bool                                               bEnableWindows;                                             // 0x0001   (0x0001)  
	bool                                               bEnableIOS;                                                 // 0x0002   (0x0001)  
	bool                                               bEnableAndroid;                                             // 0x0003   (0x0001)  
	bool                                               bEnableMac;                                                 // 0x0004   (0x0001)  
};

/// Class /Script/Sentry.SentrySettings
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 8 MaxSize: 0x0140
class USentrySettings : public UObject
{ 
public:
	bool                                               InitAutomatically;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            Dsn;                                                        // 0x0030   (0x0010)  
	bool                                               Debug;                                                      // 0x0040   (0x0001)  
	bool                                               EnableAutoCrashCapturing;                                   // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	FString                                            Environment;                                                // 0x0048   (0x0010)  
	float                                              SampleRate;                                                 // 0x0058   (0x0004)  
	bool                                               EnableAutoLogAttachment;                                    // 0x005C   (0x0001)  
	bool                                               AttachStacktrace;                                           // 0x005D   (0x0001)  
	bool                                               SendDefaultPii;                                             // 0x005E   (0x0001)  
	bool                                               AttachScreenshot;                                           // 0x005F   (0x0001)  
	int32_t                                            MaxBreadcrumbs;                                             // 0x0060   (0x0004)  
	FAutomaticBreadcrumbs                              AutomaticBreadcrumbs;                                       // 0x0064   (0x0005)  
	FAutomaticBreadcrumbsForLogs                       AutomaticBreadcrumbsForLogs;                                // 0x0069   (0x0005)  
	bool                                               EnableAutoSessionTracking;                                  // 0x006E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x006F   (0x0001)  MISSED
	int32_t                                            SessionTimeout;                                             // 0x0070   (0x0004)  
	bool                                               OverrideReleaseName;                                        // 0x0074   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FString                                            Release;                                                    // 0x0078   (0x0010)  
	bool                                               UseProxy;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	FString                                            ProxyUrl;                                                   // 0x0090   (0x0010)  
	class UClass*                                      BeforeSendHandler;                                          // 0x00A0   (0x0008)  
	TArray<FString>                                    InAppInclude;                                               // 0x00A8   (0x0010)  
	TArray<FString>                                    InAppExclude;                                               // 0x00B8   (0x0010)  
	bool                                               EnableTracing;                                              // 0x00C8   (0x0001)  
	ESentryTracesSamplingType                          SamplingType;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x00CA   (0x0002)  MISSED
	float                                              TracesSampleRate;                                           // 0x00CC   (0x0004)  
	class UClass*                                      TracesSampler;                                              // 0x00D0   (0x0008)  
	FTagsPromotion                                     TagsPromotion;                                              // 0x00D8   (0x0006)  
	FEnableBuildConfigurations                         EnableBuildConfigurations;                                  // 0x00DE   (0x0005)  
	FEnableBuildTargets                                EnableBuildTargets;                                         // 0x00E3   (0x0005)  
	FEnableBuildPlatforms                              EnableBuildPlatforms;                                       // 0x00E8   (0x0005)  
	bool                                               EnableForPromotedBuildsOnly;                                // 0x00ED   (0x0001)  
	bool                                               UploadSymbolsAutomatically;                                 // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x00EF   (0x0001)  MISSED
	FString                                            ProjectName;                                                // 0x00F0   (0x0010)  
	FString                                            OrgName;                                                    // 0x0100   (0x0010)  
	FString                                            AuthToken;                                                  // 0x0110   (0x0010)  
	bool                                               IncludeSources;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FString                                            CrashReporterUrl;                                           // 0x0128   (0x0010)  
	unsigned char                                      UnknownData08_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Class /Script/Sentry.SentrySpan
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentrySpan : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentrySpan.SetTag
	// void SetTag(FString Key, FString Value);                                                                                 // [0x21569b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySpan.SetData
	// void SetData(FString Key, TMap<FString, FString>& Values);                                                               // [0x2156230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySpan.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x2155cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySpan.RemoveData
	// void RemoveData(FString Key);                                                                                            // [0x2155b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySpan.IsFinished
	// bool IsFinished();                                                                                                       // [0x2155a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentrySpan.Finish
	// void Finish();                                                                                                           // [0x21551f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentrySubsystem
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class USentrySubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	class USentryBeforeSendHandler*                    BeforeSendHandler;                                          // 0x0050   (0x0008)  
	class USentryTraceSampler*                         TraceSampler;                                               // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0060   (0x0028)  MISSED


	/// Functions
	// Function /Script/Sentry.SentrySubsystem.StartTransactionWithContextAndOptions
	// class USentryTransaction* StartTransactionWithContextAndOptions(class USentryTransactionContext* Context, TMap<FString, FString>& Options); // [0x21570e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.StartTransactionWithContext
	// class USentryTransaction* StartTransactionWithContext(class USentryTransactionContext* Context);                         // [0x2157010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.StartTransaction
	// class USentryTransaction* StartTransaction(FString Name, FString Operation);                                             // [0x2156ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.StartSession
	// void StartSession();                                                                                                     // [0x2156ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetUser
	// void SetUser(class USentryUser* User);                                                                                   // [0x2156ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetTag
	// void SetTag(FString Key, FString Value);                                                                                 // [0x2156ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x2156860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                            // [0x21560a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveUser
	// void RemoveUser();                                                                                                       // [0x2155ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x2155d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.IsSupportedForCurrentSettings
	// bool IsSupportedForCurrentSettings();                                                                                    // [0x2155aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x21559e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Sentry.SentrySubsystem.IsCrashedLastRun
	// ESentryCrashedLastRun IsCrashedLastRun();                                                                                // [0x2155980] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Sentry.SentrySubsystem.InitializeWithSettings
	// void InitializeWithSettings(FDelegateProperty& OnConfigureSettings);                                                     // [0x2155860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Initialize
	// void Initialize();                                                                                                       // [0x21556b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.EndSession
	// void EndSession();                                                                                                       // [0x21551a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ConfigureScope
	// void ConfigureScope(FDelegateProperty& OnConfigureScope);                                                                // [0x2154fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Close
	// void Close();                                                                                                            // [0x2154f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                                 // [0x2154f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	// void CaptureUserFeedbackWithParams(class USentryId* EventId, FString Email, FString Comments, FString Name);             // [0x2154d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedback
	// void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);                                                       // [0x2154c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessageWithScope
	// class USentryId* CaptureMessageWithScope(FString Message, FDelegateProperty& OnConfigureScope, ESentryLevel Level);      // [0x2154a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessage
	// class USentryId* CaptureMessage(FString Message, ESentryLevel Level);                                                    // [0x2154930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEventWithScope
	// class USentryId* CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty& OnConfigureScope);                  // [0x2154720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEvent
	// class USentryId* CaptureEvent(class USentryEvent* Event);                                                                // [0x2154660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumbWithParams
	// void AddBreadcrumbWithParams(FString Message, FString Category, FString Type, TMap<FString, FString>& Data, ESentryLevel Level); // [0x2154390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                                 // [0x21542f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryTraceSampler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USentryTraceSampler : public UObject
{ 
public:


	/// Functions
	// Function /Script/Sentry.SentryTraceSampler.Sample
	// bool Sample(class USentrySamplingContext* samplingContext, float& samplingValue);                                        // [0x2155f20] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Sentry.SentryTransaction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryTransaction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryTransaction.StartChild
	// class USentrySpan* StartChild(FString Operation, FString Description);                                                   // [0x2156d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.SetTag
	// void SetTag(FString Key, FString Value);                                                                                 // [0x2156bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.SetName
	// void SetName(FString Name);                                                                                              // [0x2156900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.SetData
	// void SetData(FString Key, TMap<FString, FString>& Values);                                                               // [0x21563c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x2155e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.RemoveData
	// void RemoveData(FString Key);                                                                                            // [0x2155c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransaction.IsFinished
	// bool IsFinished();                                                                                                       // [0x2155a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryTransaction.Finish
	// void Finish();                                                                                                           // [0x2155220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryTransactionContext
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryTransactionContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryTransactionContext.Initialize
	// void Initialize(FString Name, FString Operation);                                                                        // [0x21556d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryTransactionContext.GetOperation
	// FString GetOperation();                                                                                                  // [0x2155430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryTransactionContext.GetName
	// FString GetName();                                                                                                       // [0x2155610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryUser
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUser.SetUsername
	// void SetUsername(FString Username);                                                                                      // [0x2156000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetIpAddress
	// void SetIpAddress(FString Ipaddress);                                                                                    // [0x21567c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetId
	// void SetId(FString ID);                                                                                                  // [0x2156720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetEmail
	// void SetEmail(FString Email);                                                                                            // [0x2156680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                              // [0x2156550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.GetUsername
	// FString GetUsername();                                                                                                   // [0x2155270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetIpAddress
	// FString GetIpAddress();                                                                                                  // [0x2155570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetId
	// FString GetId();                                                                                                         // [0x21554d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetEmail
	// FString GetEmail();                                                                                                      // [0x2155430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetData
	// TMap<FString, FString> GetData();                                                                                        // [0x2155310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryUserFeedback
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryUserFeedback : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUserFeedback.SetName
	// void SetName(FString Name);                                                                                              // [0x2156680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetEmail
	// void SetEmail(FString Email);                                                                                            // [0x2156720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetComment
	// void SetComment(FString Comments);                                                                                       // [0x2156000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.Initialize
	// void Initialize(class USentryId* EventId);                                                                               // [0x21557d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.GetName
	// FString GetName();                                                                                                       // [0x2155430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetEmail
	// FString GetEmail();                                                                                                      // [0x21554d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetComment
	// FString GetComment();                                                                                                    // [0x2155270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(USentryAttachment) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryBeforeSendHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USentryBreadcrumb) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryEvent) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryHint) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USentrySamplingContext) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryScope) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FAutomaticBreadcrumbs) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(FAutomaticBreadcrumbsForLogs) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(FTagsPromotion) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FEnableBuildConfigurations) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(FEnableBuildTargets) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(FEnableBuildPlatforms) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(USentrySettings) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(USentrySpan) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentrySubsystem) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(USentryTraceSampler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USentryTransaction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryTransactionContext) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryUser) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryUserFeedback) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(USentrySettings, Dsn) == 0x0030);
static_assert(offsetof(USentrySettings, Environment) == 0x0048);
static_assert(offsetof(USentrySettings, AutomaticBreadcrumbs) == 0x0064);
static_assert(offsetof(USentrySettings, AutomaticBreadcrumbsForLogs) == 0x0069);
static_assert(offsetof(USentrySettings, Release) == 0x0078);
static_assert(offsetof(USentrySettings, ProxyUrl) == 0x0090);
static_assert(offsetof(USentrySettings, BeforeSendHandler) == 0x00A0);
static_assert(offsetof(USentrySettings, InAppInclude) == 0x00A8);
static_assert(offsetof(USentrySettings, InAppExclude) == 0x00B8);
static_assert(offsetof(USentrySettings, SamplingType) == 0x00C9);
static_assert(offsetof(USentrySettings, TracesSampler) == 0x00D0);
static_assert(offsetof(USentrySettings, TagsPromotion) == 0x00D8);
static_assert(offsetof(USentrySettings, EnableBuildConfigurations) == 0x00DE);
static_assert(offsetof(USentrySettings, EnableBuildTargets) == 0x00E3);
static_assert(offsetof(USentrySettings, EnableBuildPlatforms) == 0x00E8);
static_assert(offsetof(USentrySettings, ProjectName) == 0x00F0);
static_assert(offsetof(USentrySettings, OrgName) == 0x0100);
static_assert(offsetof(USentrySettings, AuthToken) == 0x0110);
static_assert(offsetof(USentrySettings, CrashReporterUrl) == 0x0128);
static_assert(offsetof(USentrySubsystem, BeforeSendHandler) == 0x0050);
static_assert(offsetof(USentrySubsystem, TraceSampler) == 0x0058);
