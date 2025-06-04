
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x01 (1 bytes)
enum class EPropertyPathTestEnum : uint8_t
{
	One                                                                              = 0,
	Two                                                                              = 1,
	Three                                                                            = 2,
	Four                                                                             = 3
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPropertyPathTestInnerStruct
{ 
	float                                              float0;                                                     // 0x0000   (0x0004)  
	bool                                               bool0;                                                      // 0x0004   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0005   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0006   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x0007   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x000C   (0x0004)  
	FString                                            String;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPropertyPathTestStruct
{ 
	bool                                               bool0;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0004   (0x0004)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0008   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0009   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x000A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x000B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0010   (0x0010)  
	float                                              float0;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FPropertyPathTestInnerStruct                       InnerStruct;                                                // 0x0028   (0x0020)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0048   (0x0008)  
};

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class UPropertyPathTestObject : public UObject
{ 
public:
	bool                                               bool0;                                                      // 0x0028   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0029   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x002A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x002B   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0038   (0x0010)  
	float                                              float0;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPropertyPathTestStruct                            Struct;                                                     // 0x0050   (0x0050)  
	FPropertyPathTestStruct                            StructRef;                                                  // 0x00A0   (0x0050)  
	FPropertyPathTestStruct                            StructConstRef;                                             // 0x00F0   (0x0050)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x40b6ae0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x40b6960] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x40b67e0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                            // [0x40b6750] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                                  // [0x40b6720] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x40b66f0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                     // [0x40b65f0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                        // [0x40b65c0] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UStruct*                                     Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FPropertyPathTestBed
{ 
	class UPropertyPathTestObject*                     Object;                                                     // 0x0000   (0x0008)  
	class UPropertyPathTestObject*                     ModifiedObject;                                             // 0x0008   (0x0008)  
	FPropertyPathTestStruct                            ModifiedStruct;                                             // 0x0010   (0x0050)  
	FPropertyPathTestStruct                            DefaultStruct;                                              // 0x0060   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(FPropertyPathTestInnerStruct) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPropertyPathTestStruct) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UPropertyPathTestObject) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(FPropertyPathSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCachedPropertyPath) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPropertyPathTestBed) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumOne) == 0x0005);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumTwo) == 0x0006);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumThree) == 0x0007);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumFour) == 0x0008);
static_assert(offsetof(FPropertyPathTestInnerStruct, String) == 0x0010);
static_assert(offsetof(FPropertyPathTestStruct, EnumOne) == 0x0008);
static_assert(offsetof(FPropertyPathTestStruct, EnumTwo) == 0x0009);
static_assert(offsetof(FPropertyPathTestStruct, EnumThree) == 0x000A);
static_assert(offsetof(FPropertyPathTestStruct, EnumFour) == 0x000B);
static_assert(offsetof(FPropertyPathTestStruct, String) == 0x0010);
static_assert(offsetof(FPropertyPathTestStruct, InnerStruct) == 0x0028);
static_assert(offsetof(FPropertyPathTestStruct, InnerObject) == 0x0048);
static_assert(offsetof(UPropertyPathTestObject, EnumOne) == 0x0029);
static_assert(offsetof(UPropertyPathTestObject, EnumTwo) == 0x002A);
static_assert(offsetof(UPropertyPathTestObject, EnumThree) == 0x002B);
static_assert(offsetof(UPropertyPathTestObject, EnumFour) == 0x002C);
static_assert(offsetof(UPropertyPathTestObject, String) == 0x0038);
static_assert(offsetof(UPropertyPathTestObject, Struct) == 0x0050);
static_assert(offsetof(UPropertyPathTestObject, StructRef) == 0x00A0);
static_assert(offsetof(UPropertyPathTestObject, StructConstRef) == 0x00F0);
static_assert(offsetof(UPropertyPathTestObject, InnerObject) == 0x0140);
static_assert(offsetof(FPropertyPathSegment, Name) == 0x0000);
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x0010);
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x0000);
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x0018);
static_assert(offsetof(FPropertyPathTestBed, Object) == 0x0000);
static_assert(offsetof(FPropertyPathTestBed, ModifiedObject) == 0x0008);
static_assert(offsetof(FPropertyPathTestBed, ModifiedStruct) == 0x0010);
static_assert(offsetof(FPropertyPathTestBed, DefaultStruct) == 0x0060);
