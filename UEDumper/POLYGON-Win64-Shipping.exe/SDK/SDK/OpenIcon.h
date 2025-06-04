
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/OpenIcon.EOpenIconSource
/// Size: 0x01 (1 bytes)
enum class EOpenIconSource : uint8_t
{
	EOpenIconSource__FontAwesome                                                     = 0,
	EOpenIconSource__ForkAwesome                                                     = 1,
	EOpenIconSource__MaterialDesign                                                  = 2,
	EOpenIconSource__FontAudio                                                       = 3,
	EOpenIconSource__KenneyIcons                                                     = 4,
	EOpenIconSource__Count                                                           = 5
};

/// Enum /Script/OpenIcon.EOpenIconTextureSize
/// Size: 0x01 (1 bytes)
enum class EOpenIconTextureSize : uint8_t
{
	EOpenIconTextureSize__Size1                                                      = 0,
	EOpenIconTextureSize__Size2                                                      = 1,
	EOpenIconTextureSize__Size3                                                      = 2,
	EOpenIconTextureSize__Size4                                                      = 3,
	EOpenIconTextureSize__Size5                                                      = 4
};

/// Enum /Script/OpenIcon.EFA_Category
/// Size: 0x01 (1 bytes)
enum class EFA_Category : uint8_t
{
	EFA_Category__All                                                                = 0,
	EFA_Category__Brands                                                             = 1,
	EFA_Category__Regular                                                            = 2,
	EFA_Category__Solid                                                              = 3
};

/// Enum /Script/OpenIcon.EMD_Category
/// Size: 0x01 (1 bytes)
enum class EMD_Category : uint8_t
{
	EMD_Category__All                                                                = 0,
	EMD_Category__Action                                                             = 1,
	EMD_Category__Alert                                                              = 2,
	EMD_Category__Av                                                                 = 3,
	EMD_Category__Communication                                                      = 4,
	EMD_Category__Content                                                            = 5,
	EMD_Category__Device                                                             = 6,
	EMD_Category__Editor                                                             = 7,
	EMD_Category__File                                                               = 8,
	EMD_Category__Home                                                               = 9,
	EMD_Category__Hardware                                                           = 10,
	EMD_Category__Image                                                              = 11,
	EMD_Category__Maps                                                               = 12,
	EMD_Category__Navigation                                                         = 13,
	EMD_Category__Notification                                                       = 14,
	EMD_Category__Places                                                             = 15,
	EMD_Category__Social                                                             = 16,
	EMD_Category__Toggle                                                             = 17
};

/// Enum /Script/OpenIcon.EFK_Category
/// Size: 0x01 (1 bytes)
enum class EFK_Category : uint8_t
{
	EFK_Category__All                                                                = 0,
	EFK_Category__Accessibility                                                      = 1,
	EFK_Category__Chart                                                              = 2,
	EFK_Category__Currency                                                           = 3,
	EFK_Category__FileType                                                           = 4,
	EFK_Category__FormControl                                                        = 5,
	EFK_Category__Gender                                                             = 6,
	EFK_Category__Hand                                                               = 7,
	EFK_Category__Medical                                                            = 8,
	EFK_Category__Payment                                                            = 9,
	EFK_Category__Spinner                                                            = 10,
	EFK_Category__TextEditor                                                         = 11,
	EFK_Category__Transportation                                                     = 12,
	EFK_Category__VideoPlayer                                                        = 13,
	EFK_Category__WebApplication                                                     = 14
};

/// Class /Script/OpenIcon.CustomIcon
/// Size: 0x0390 (912 bytes) (0x000338 - 0x000390) align 16 MaxSize: 0x0390
class UCustomIcon : public UTextBlock
{ 
public:
	class UDataTable*                                  IconData;                                                   // 0x0338   (0x0008)  
	class UObject*                                     IconFont;                                                   // 0x0340   (0x0008)  
	int32_t                                            IconSize;                                                   // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x034C   (0x0004)  MISSED
	FString                                            IconPack;                                                   // 0x0350   (0x0010)  
	FString                                            IconCategory;                                               // 0x0360   (0x0010)  
	FText                                              IconSymbol;                                                 // 0x0370   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0388   (0x0008)  MISSED


	/// Functions
	// Function /Script/OpenIcon.CustomIcon.SetIconByID
	// void SetIconByID(FName IconID, int32_t Size);                                                                            // [0x1b72600] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenIcon.CustomIcon.InitCustomIcon
	// void InitCustomIcon(class UDataTable* InIconData, class UObject* InIconFont);                                            // [0x1b71ad0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OpenIcon.OpenIcon
/// Size: 0x0390 (912 bytes) (0x000338 - 0x000390) align 16 MaxSize: 0x0390
class UOpenIcon : public UTextBlock
{ 
public:
	EOpenIconSource                                    IconSource;                                                 // 0x0338   (0x0001)  
	EFA_Category                                       FA_Category;                                                // 0x0339   (0x0001)  
	EMD_Category                                       MD_Category;                                                // 0x033A   (0x0001)  
	EFK_Category                                       FK_Category;                                                // 0x033B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x033C   (0x0004)  MISSED
	FString                                            IconCategory;                                               // 0x0340   (0x0010)  
	int32_t                                            IconSize;                                                   // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0354   (0x0004)  MISSED
	FText                                              IconSymbol;                                                 // 0x0358   (0x0018)  
	class UDataTable*                                  OpenIconDT;                                                 // 0x0370   (0x0008)  
	class UObject*                                     OpenIconFontObject;                                         // 0x0378   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0380   (0x0010)  MISSED


	/// Functions
	// Function /Script/OpenIcon.OpenIcon.SetIconByID
	// void SetIconByID(FName IconID, int32_t Size);                                                                            // [0x1b72a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIcon.SetIcon
	// void SetIcon(EOpenIconSource Source, FString Category, FString IconUcode, int32_t Size);                                 // [0x1b72300] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OpenIcon.OpenIconUtil
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOpenIconUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenIcon.OpenIconUtil.OpenIconToTexture_Advanced
	// class UTexture2D* OpenIconToTexture_Advanced(FVector2D Translation, FSlateColor ColorAndOpacity, FLinearColor ShadowColorAndOpacity, FVector2D ShadowOffset, FFontOutlineSettings OutlineSettings, FSlateBrush StrikeBrush, FName IconID, int32_t IconSize, EOpenIconTextureSize OutputSize, FString Path, FString Filename, bool UseDefaultName); // [0x1b71e30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIconUtil.OpenIconToTexture
	// class UTexture2D* OpenIconToTexture(FName IconID, int32_t IconSize, EOpenIconTextureSize OutputSize, FString Path, FString Filename, bool UseDefaultName); // [0x1b71bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIconUtil.GetCustomIconDataFromTable
	// bool GetCustomIconDataFromTable(class UDataTable* DataTable, TArray<FCustomIconData>& OutData);                          // [0x1b718a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIconUtil.CustomIconToTexture_Advanced
	// class UTexture2D* CustomIconToTexture_Advanced(FVector2D Translation, FSlateColor ColorAndOpacity, FLinearColor ShadowColorAndOpacity, FVector2D ShadowOffset, FFontOutlineSettings OutlineSettings, FSlateBrush StrikeBrush, class UDataTable* IconData, class UFont* IconFont, FName IconID, int32_t IconSize, EOpenIconTextureSize OutputSize, FString Path, FString Filename, bool UseDefaultName); // [0x1b71340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIconUtil.CustomIconToTexture
	// class UTexture2D* CustomIconToTexture(class UDataTable* IconData, class UFont* IconFont, FName IconID, int32_t IconSize, EOpenIconTextureSize OutputSize, FString Path, FString Filename, bool UseDefaultName); // [0x1b71030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OpenIcon.OpenIconUtil.CopyToClipboard
	// void CopyToClipboard(FString S);                                                                                         // [0x1b70f90] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OpenIcon.OpenIconData
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FOpenIconData : FTableRowBase
{ 
	EOpenIconSource                                    Source;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            IconName;                                                   // 0x0010   (0x0010)  
	FString                                            IconCategory;                                               // 0x0020   (0x0010)  
	FString                                            IconUcode;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/OpenIcon.CustomIconData
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FCustomIconData : FTableRowBase
{ 
	FString                                            IconPack;                                                   // 0x0008   (0x0010)  
	FString                                            IconName;                                                   // 0x0018   (0x0010)  
	FString                                            IconCategory;                                               // 0x0028   (0x0010)  
	FString                                            IconUcode;                                                  // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UCustomIcon) == 0x0390); // 912 bytes (0x000338 - 0x000390)
static_assert(sizeof(UOpenIcon) == 0x0390); // 912 bytes (0x000338 - 0x000390)
static_assert(sizeof(UOpenIconUtil) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOpenIconData) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FCustomIconData) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(offsetof(UCustomIcon, IconData) == 0x0338);
static_assert(offsetof(UCustomIcon, IconFont) == 0x0340);
static_assert(offsetof(UCustomIcon, IconPack) == 0x0350);
static_assert(offsetof(UCustomIcon, IconCategory) == 0x0360);
static_assert(offsetof(UCustomIcon, IconSymbol) == 0x0370);
static_assert(offsetof(UOpenIcon, IconSource) == 0x0338);
static_assert(offsetof(UOpenIcon, FA_Category) == 0x0339);
static_assert(offsetof(UOpenIcon, MD_Category) == 0x033A);
static_assert(offsetof(UOpenIcon, FK_Category) == 0x033B);
static_assert(offsetof(UOpenIcon, IconCategory) == 0x0340);
static_assert(offsetof(UOpenIcon, IconSymbol) == 0x0358);
static_assert(offsetof(UOpenIcon, OpenIconDT) == 0x0370);
static_assert(offsetof(UOpenIcon, OpenIconFontObject) == 0x0378);
static_assert(offsetof(FOpenIconData, Source) == 0x0008);
static_assert(offsetof(FOpenIconData, IconName) == 0x0010);
static_assert(offsetof(FOpenIconData, IconCategory) == 0x0020);
static_assert(offsetof(FOpenIconData, IconUcode) == 0x0030);
static_assert(offsetof(FCustomIconData, IconPack) == 0x0008);
static_assert(offsetof(FCustomIconData, IconName) == 0x0018);
static_assert(offsetof(FCustomIconData, IconCategory) == 0x0028);
static_assert(offsetof(FCustomIconData, IconUcode) == 0x0038);
