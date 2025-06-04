
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

/// Enum /Script/StructUtils.EPropertyBagPropertyType
/// Size: 0x01 (1 bytes)
enum class EPropertyBagPropertyType : uint8_t
{
	EPropertyBagPropertyType__None                                                   = 0,
	EPropertyBagPropertyType__Bool                                                   = 1,
	EPropertyBagPropertyType__Byte                                                   = 2,
	EPropertyBagPropertyType__Int32                                                  = 3,
	EPropertyBagPropertyType__Int64                                                  = 4,
	EPropertyBagPropertyType__Float                                                  = 5,
	EPropertyBagPropertyType__Double                                                 = 6,
	EPropertyBagPropertyType__Name                                                   = 7,
	EPropertyBagPropertyType__String                                                 = 8,
	EPropertyBagPropertyType__Text                                                   = 9,
	EPropertyBagPropertyType__Enum                                                   = 10,
	EPropertyBagPropertyType__Struct                                                 = 11,
	EPropertyBagPropertyType__Object                                                 = 12,
	EPropertyBagPropertyType__SoftObject                                             = 13,
	EPropertyBagPropertyType__Class                                                  = 14,
	EPropertyBagPropertyType__SoftClass                                              = 15
};

/// Enum /Script/StructUtils.EPropertyBagContainerType
/// Size: 0x01 (1 bytes)
enum class EPropertyBagContainerType : uint8_t
{
	EPropertyBagContainerType__None                                                  = 0,
	EPropertyBagContainerType__Array                                                 = 1
};

/// Enum /Script/StructUtils.EPropertyBagResult
/// Size: 0x01 (1 bytes)
enum class EPropertyBagResult : uint8_t
{
	EPropertyBagResult__Success                                                      = 0,
	EPropertyBagResult__TypeMismatch                                                 = 1,
	EPropertyBagResult__OutOfBounds                                                  = 2,
	EPropertyBagResult__PropertyNotFound                                             = 3
};

/// Enum /Script/StructUtils.EPropertyBagMissingEnum
/// Size: 0x01 (1 bytes)
enum class EPropertyBagMissingEnum : uint8_t
{
	EPropertyBagMissingEnum__Missing                                                 = 0
};

/// Enum /Script/StructUtils.EStructUtilsResult
/// Size: 0x01 (1 bytes)
enum class EStructUtilsResult : uint8_t
{
	EStructUtilsResult__Valid                                                        = 0,
	EStructUtilsResult__NotValid                                                     = 1
};

/// Class /Script/StructUtils.PropertyBagMissingObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPropertyBagMissingObject : public UObject
{ 
public:
};

/// Struct /Script/StructUtils.PropertyBagPropertyDesc
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPropertyBagPropertyDesc
{ 
	class UObject*                                     ValueTypeObject;                                            // 0x0000   (0x0008)  
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FName                                              Name;                                                       // 0x0018   (0x0008)  
	EPropertyBagPropertyType                           ValueType;                                                  // 0x0020   (0x0001)  
	EPropertyBagContainerType                          ContainerType;                                              // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0022   (0x000E)  MISSED
};

/// Class /Script/StructUtils.PropertyBag
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPropertyBag : public UScriptStruct
{ 
public:
	TArray<FPropertyBagPropertyDesc>                   PropertyDescs;                                              // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/StructUtils.StructUtilsFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
	// void SetInstancedStructValue(FInstancedStruct& InstancedStruct, int32_t& Value);                                         // [0x11a55a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.Reset
	// void Reset(FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);                                          // [0x11a5400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// bool NotEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                                 // [0x11a5270] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
	// FInstancedStruct MakeInstancedStruct(int32_t& Value);                                                                    // [0x11a5000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// bool IsValid_InstancedStruct(FInstancedStruct& InstancedStruct);                                                         // [0x11a4f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
	// EStructUtilsResult IsInstancedStructValid(FInstancedStruct& InstancedStruct);                                            // [0x11a4e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
	// void GetInstancedStructValue(EStructUtilsResult& ExecResult, FInstancedStruct& InstancedStruct, int32_t& Value);         // [0x11a4b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// bool EqualEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                               // [0x11a49e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/StructUtils.InstancedStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInstancedStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.InstancedStructContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInstancedStructContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.PropertyBagPropertyDescMetaData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPropertyBagPropertyDescMetaData
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/StructUtils.InstancedPropertyBag
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInstancedPropertyBag
{ 
	FInstancedStruct                                   Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/StructUtils.PropertyBagMissingStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FPropertyBagMissingStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/StructUtils.ConstSharedStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConstSharedStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.SharedStruct
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FSharedStruct : FConstSharedStruct
{ 
};

#pragma pack(pop)


static_assert(sizeof(UPropertyBagMissingObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPropertyBagPropertyDesc) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPropertyBag) == 0x00D8); // 216 bytes (0x0000C0 - 0x0000D8)
static_assert(sizeof(UStructUtilsFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInstancedStruct) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInstancedStructContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyBagPropertyDescMetaData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInstancedPropertyBag) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyBagMissingStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FConstSharedStruct) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSharedStruct) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(offsetof(FPropertyBagPropertyDesc, ValueTypeObject) == 0x0000);
static_assert(offsetof(FPropertyBagPropertyDesc, ID) == 0x0008);
static_assert(offsetof(FPropertyBagPropertyDesc, Name) == 0x0018);
static_assert(offsetof(FPropertyBagPropertyDesc, ValueType) == 0x0020);
static_assert(offsetof(FPropertyBagPropertyDesc, ContainerType) == 0x0021);
static_assert(offsetof(UPropertyBag, PropertyDescs) == 0x00C0);
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Key) == 0x0000);
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Value) == 0x0008);
static_assert(offsetof(FInstancedPropertyBag, Value) == 0x0000);
