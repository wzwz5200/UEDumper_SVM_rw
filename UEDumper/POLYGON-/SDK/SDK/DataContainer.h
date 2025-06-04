
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

/// Class /Script/DataContainer.DataContainerAsset
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDataContainerAsset : public UDataAsset
{ 
public:
	class UDataContainerValue_DataObject*              Data;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/DataContainer.DataContainerValue_Base
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UDataContainerValue_Base : public UObject
{ 
public:
	FString                                            OptionalData;                                               // 0x0028   (0x0010)  
	FName                                              DataType;                                                   // 0x0038   (0x0008)  
	FString                                            Tooltip;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/DataContainer.DataContainerValue_Base.FindDataContainerValue
	// class UDataContainerValue_Base* FindDataContainerValue(FString tagPath);                                                 // [0x1b8f5d0] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DataContainer.DataContainerValue_DataObject
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UDataContainerValue_DataObject : public UDataContainerValue_Base
{ 
public:
	TMap<FName, class UDataContainerValue_Base*>       Values;                                                     // 0x0050   (0x0050)  
};

/// Class /Script/DataContainer.DataContainerValue_DataObjectArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_DataObjectArray : public UDataContainerValue_Base
{ 
public:
	TArray<class UDataContainerValue_DataObject*>      Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_Bool
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_Bool : public UDataContainerValue_Base
{ 
public:
	bool                                               Data;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/DataContainer.DataContainerValue_BoolArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_BoolArray : public UDataContainerValue_Base
{ 
public:
	TArray<bool>                                       Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_Int32
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_Int32 : public UDataContainerValue_Base
{ 
public:
	int32_t                                            Data;                                                       // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/DataContainer.DataContainerValue_Int32Array
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_Int32Array : public UDataContainerValue_Base
{ 
public:
	TArray<int32_t>                                    Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_Float
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_Float : public UDataContainerValue_Base
{ 
public:
	float                                              Data;                                                       // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/DataContainer.DataContainerValue_FloatArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_FloatArray : public UDataContainerValue_Base
{ 
public:
	TArray<float>                                      Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_Uint8
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_Uint8 : public UDataContainerValue_Base
{ 
public:
	char                                               Data;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/DataContainer.DataContainerValue_Uint8Array
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_Uint8Array : public UDataContainerValue_Base
{ 
public:
	TArray<char>                                       Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_FString
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_FString : public UDataContainerValue_Base
{ 
public:
	FString                                            Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_FStringArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_FStringArray : public UDataContainerValue_Base
{ 
public:
	TArray<FString>                                    Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_FText
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UDataContainerValue_FText : public UDataContainerValue_Base
{ 
public:
	FText                                              Data;                                                       // 0x0050   (0x0018)  
};

/// Class /Script/DataContainer.DataContainerValue_FTextArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_FTextArray : public UDataContainerValue_Base
{ 
public:
	TArray<FText>                                      Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_FVector
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UDataContainerValue_FVector : public UDataContainerValue_Base
{ 
public:
	FVector                                            Data;                                                       // 0x0050   (0x0018)  
};

/// Class /Script/DataContainer.DataContainerValue_FVectorArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_FVectorArray : public UDataContainerValue_Base
{ 
public:
	TArray<FVector>                                    Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_UObject
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_UObject : public UDataContainerValue_Base
{ 
public:
	class UObject*                                     Data;                                                       // 0x0050   (0x0008)  
};

/// Class /Script/DataContainer.DataContainerValue_UObjectArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_UObjectArray : public UDataContainerValue_Base
{ 
public:
	TArray<class UObject*>                             Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_TSoftObjectPtr
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UDataContainerValue_TSoftObjectPtr : public UDataContainerValue_Base
{ 
public:
	TWeakObjectPtr<class UObject*>                     Data;                                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0058   (0x0028)  MISSED
};

/// Class /Script/DataContainer.DataContainerValue_TSoftObjectPtrArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_TSoftObjectPtrArray : public UDataContainerValue_Base
{ 
public:
	SDK_UNDEFINED(16,426) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Data);                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_UClass
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_UClass : public UDataContainerValue_Base
{ 
public:
	class UClass*                                      Data;                                                       // 0x0050   (0x0008)  
};

/// Class /Script/DataContainer.DataContainerValue_UClassArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_UClassArray : public UDataContainerValue_Base
{ 
public:
	TArray<class UClass*>                              Data;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_TSoftClassPtr
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UDataContainerValue_TSoftClassPtr : public UDataContainerValue_Base
{ 
public:
	TSoftObjectPtr<class UClass*>                      Data;                                                       // 0x0050   (0x0030)  
};

/// Class /Script/DataContainer.DataContainerValue_TSoftClassPtrArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_TSoftClassPtrArray : public UDataContainerValue_Base
{ 
public:
	SDK_UNDEFINED(16,427) /* TArray<TSoftObjectPtr<UClass*>> */ __um(Data);                                        // 0x0050   (0x0010)  
};

/// Class /Script/DataContainer.DataContainerValue_DataTable
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UDataContainerValue_DataTable : public UDataContainerValue_Base
{ 
public:
	class UDataTable*                                  Data;                                                       // 0x0050   (0x0008)  
};

/// Class /Script/DataContainer.DataContainerValue_DataTableArray
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UDataContainerValue_DataTableArray : public UDataContainerValue_Base
{ 
public:
	TArray<class UDataTable*>                          Data;                                                       // 0x0050   (0x0010)  
};

/// Struct /Script/DataContainer.DataContainerObjectWrapper
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FDataContainerObjectWrapper
{ 
	class UDataContainerValue_DataObject*              DataObject;                                                 // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UDataContainerAsset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDataContainerValue_Base) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UDataContainerValue_DataObject) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UDataContainerValue_DataObjectArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_Bool) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_BoolArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_Int32) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_Int32Array) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_Float) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_FloatArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_Uint8) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_Uint8Array) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_FString) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_FStringArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_FText) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UDataContainerValue_FTextArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_FVector) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UDataContainerValue_FVectorArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_UObject) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_UObjectArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_TSoftObjectPtr) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UDataContainerValue_TSoftObjectPtrArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_UClass) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_UClassArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_TSoftClassPtr) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UDataContainerValue_TSoftClassPtrArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UDataContainerValue_DataTable) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UDataContainerValue_DataTableArray) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FDataContainerObjectWrapper) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UDataContainerAsset, Data) == 0x0030);
static_assert(offsetof(UDataContainerValue_Base, OptionalData) == 0x0028);
static_assert(offsetof(UDataContainerValue_Base, DataType) == 0x0038);
static_assert(offsetof(UDataContainerValue_Base, Tooltip) == 0x0040);
static_assert(offsetof(UDataContainerValue_DataObject, Values) == 0x0050);
static_assert(offsetof(UDataContainerValue_DataObjectArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_BoolArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_Int32Array, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FloatArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_Uint8Array, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FString, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FStringArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FText, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FTextArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FVector, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_FVectorArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_UObject, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_UObjectArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_TSoftObjectPtr, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_UClass, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_UClassArray, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_TSoftClassPtr, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_DataTable, Data) == 0x0050);
static_assert(offsetof(UDataContainerValue_DataTableArray, Data) == 0x0050);
static_assert(offsetof(FDataContainerObjectWrapper, DataObject) == 0x0000);
