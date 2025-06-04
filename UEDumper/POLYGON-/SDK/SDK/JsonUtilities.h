
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/JsonUtilities.JsonUtilitiesDummyObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UJsonUtilitiesDummyObject : public UObject
{ 
public:
};

/// Struct /Script/JsonUtilities.JsonObjectWrapper
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FJsonObjectWrapper
{ 
	FString                                            JsonString;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UJsonUtilitiesDummyObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FJsonObjectWrapper) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FJsonObjectWrapper, JsonString) == 0x0000);
