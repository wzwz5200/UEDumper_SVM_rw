
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
/// dependency: IrisCore

#pragma pack(push, 0x1)

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x01 (1 bytes)
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any                                                 = 0,
	EGameplayContainerMatchType__All                                                 = 1
};

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined                                             = 0,
	EGameplayTagQueryExprType__AnyTagsMatch                                          = 1,
	EGameplayTagQueryExprType__AllTagsMatch                                          = 2,
	EGameplayTagQueryExprType__NoTagsMatch                                           = 3,
	EGameplayTagQueryExprType__AnyExprMatch                                          = 4,
	EGameplayTagQueryExprType__AllExprMatch                                          = 5,
	EGameplayTagQueryExprType__NoExprMatch                                           = 6
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native                                                   = 0,
	EGameplayTagSourceType__DefaultTagList                                           = 1,
	EGameplayTagSourceType__TagList                                                  = 2,
	EGameplayTagSourceType__RestrictedTagList                                        = 3,
	EGameplayTagSourceType__DataTable                                                = 4,
	EGameplayTagSourceType__Invalid                                                  = 5
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None                                                  = 0,
	EGameplayTagSelectionType__NonRestrictedOnly                                     = 1,
	EGameplayTagSelectionType__RestrictedOnly                                        = 2,
	EGameplayTagSelectionType__All                                                   = 3
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                           // [0x44e2b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// bool NotEqual_TagTag(FGameplayTag A, FString B);                                                                         // [0x44e29d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);                                              // [0x44e2770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                  // [0x44e25d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                               // [0x44e2500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);                                             // [0x44e23b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch);                       // [0x44e2220] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);                                      // [0x44e2020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);                                                                 // [0x44e1fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);                                                      // [0x44e1ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);                                           // [0x44e1c00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);                             // [0x44e1ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	// bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery);                                                                       // [0x44e19c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// bool IsGameplayTagValid(FGameplayTag GameplayTag);                                                                       // [0x44e1910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);                                    // [0x44e1740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x44e1440] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x44e1110] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer);   // [0x44e0f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// FName GetTagName(FGameplayTag& GameplayTag);                                                                             // [0x44e0dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer);                                              // [0x44e0c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer);                                     // [0x44e0ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);                                                         // [0x44e09d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // [0x44e0800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                // [0x44e0660] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                             // [0x44e0590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag);                      // [0x44e0400] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery);                       // [0x44e0280] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);         // [0x44e0160] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer);       // [0x44dff90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                              // [0x44dfe80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayTagAssetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                    // [0x44e16a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x44e1370] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x44e0e60] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);                                                          // [0x44e0d00] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayTagQuery
{ 
	int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)  
	TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)  
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	FString                                            AutoDescription;                                            // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UEditableGameplayTagQuery : public UObject
{ 
public:
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
	class UEditableGameplayTagQueryExpression*         RootExpression;                                             // 0x0048   (0x0008)  
	FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0050   (0x0048)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditableGameplayTagQueryExpression : public UObject
{ 
public:
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagContainer
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
	EGameplayTagSourceType                             SourceType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UGameplayTagsList*                           SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0248 (584 bytes) (0x000028 - 0x000248) align 8 MaxSize: 0x0248
class UGameplayTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x138];                                     // 0x0028   (0x0138)  MISSED
	TMap<FName, FGameplayTagSource>                    TagSources;                                                 // 0x0160   (0x0050)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x01B0   (0x0088)  MISSED
	TArray<class UDataTable*>                          GameplayTagTables;                                          // 0x0238   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagTableRow : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	FString                                            DevComment;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URestrictedGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGameplayTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x0008)  
	FName                                              NewTagName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRestrictedConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGameplayTagsSettings : public UGameplayTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)  
	bool                                               ClearInvalidTags;                                           // 0x004A   (0x0001)  
	bool                                               AllowEditorTagUnloading;                                    // 0x004B   (0x0001)  
	bool                                               AllowGameTagUnloading;                                      // 0x004C   (0x0001)  
	bool                                               FastReplication;                                            // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)  
	TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0060   (0x0010)  
	TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0070   (0x0010)  
	TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0080   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)  
	TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTagContainerNetSerializerSerializationHelper
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTagReferenceHelper
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTagContainerNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayTags.GameplayTagNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTagNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayTagNode
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBlueprintGameplayTagLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayTagAssetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayTagQuery) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQuery) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UEditableGameplayTagQueryExpression) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTagContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FGameplayTagSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsManager) == 0x0248); // 584 bytes (0x000028 - 0x000248)
static_assert(sizeof(FGameplayTagTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(UGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FRestrictedGameplayTagTableRow) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(URestrictedGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGameplayTagCategoryRemap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayTagRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRestrictedConfigInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FGameplayTagContainerNetSerializerSerializationHelper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTagReferenceHelper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTagCreationWidgetHelper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagContainerNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FGameplayTagNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FGameplayTagNode) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FGameplayTag, TagName) == 0x0000);
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x0008);
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x0018);
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x0038);
static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 0x0048);
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 0x0050);
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x0000);
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 0x0010);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 0x0028);
static_assert(offsetof(FGameplayTagSource, SourceName) == 0x0000);
static_assert(offsetof(FGameplayTagSource, SourceType) == 0x0008);
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 0x0010);
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 0x0018);
static_assert(offsetof(UGameplayTagsManager, TagSources) == 0x0160);
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 0x0238);
static_assert(offsetof(FGameplayTagTableRow, Tag) == 0x0008);
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x0010);
static_assert(offsetof(UGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(UGameplayTagsList, GameplayTagList) == 0x0038);
static_assert(offsetof(URestrictedGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(URestrictedGameplayTagsList, RestrictedGameplayTagList) == 0x0038);
static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0x0000);
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 0x0010);
static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0x0000);
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 0x0008);
static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0x0000);
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 0x0010);
static_assert(offsetof(UGameplayTagsSettings, InvalidTagCharacters) == 0x0050);
static_assert(offsetof(UGameplayTagsSettings, CategoryRemapping) == 0x0060);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagTableList) == 0x0070);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagRedirects) == 0x0080);
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 0x0090);
static_assert(offsetof(UGameplayTagsSettings, RestrictedConfigFiles) == 0x00A8);
static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 0x0038);
static_assert(offsetof(UGameplayTagsDeveloperSettings, FavoriteTagSource) == 0x0048);
static_assert(offsetof(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags) == 0x0000);
