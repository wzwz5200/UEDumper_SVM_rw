
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Game/Data/Structs/UI/ST_Option.ST_Option
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FST_Option
{ 
	FText                                              Label_3_C8817C974AD087B6ABEF9D91A826B4D1;                   // 0x0000   (0x0018)  
	FString                                            Value_6_570477F044A4BD292888D9820D5EC764;                   // 0x0018   (0x0010)  
};

/// Struct /Game/Data/Structs/UI/ST_HUDColor.ST_HUDColor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FST_HUDColor
{ 
	FLinearColor                                       Color_2_DB894F7D46F2CDCCD1CCBFAA9D883F29;                   // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FST_Option) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FST_HUDColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FST_Option, Label_3_C8817C974AD087B6ABEF9D91A826B4D1) == 0x0000);
static_assert(offsetof(FST_Option, Value_6_570477F044A4BD292888D9820D5EC764) == 0x0018);
static_assert(offsetof(FST_HUDColor, Color_2_DB894F7D46F2CDCCD1CCBFAA9D883F29) == 0x0000);
