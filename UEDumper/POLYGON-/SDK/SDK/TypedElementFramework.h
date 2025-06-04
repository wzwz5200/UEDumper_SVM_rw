
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageUiInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageUiInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementHandleLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementHandleLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Release
	// void Release(FScriptTypedElementHandle& ElementHandle);                                                                  // [0x3e93e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.NotEqual
	// bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                           // [0x3e93ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.IsSet
	// bool IsSet(FScriptTypedElementHandle& ElementHandle);                                                                    // [0x3e93930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Equal
	// bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                              // [0x3e92c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TypedElementFramework.TypedElementListLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementListLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Shrink
	// void Shrink(FScriptTypedElementListProxy ElementList);                                                                   // [0x3e944d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reset
	// void Reset(FScriptTypedElementListProxy ElementList);                                                                    // [0x3e94230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reserve
	// void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size);                                                    // [0x3e94110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Remove
	// bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                         // [0x3e93f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Num
	// int32_t Num(FScriptTypedElementListProxy ElementList);                                                                   // [0x3e93ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.IsValidIndex
	// bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index);                                              // [0x3e93a00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	// bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                                 // [0x3e93770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElements
	// bool HasElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                             // [0x3e93640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType); // [0x3e931f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandles
	// TArray<FScriptTypedElementHandle> GetElementHandles(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType); // [0x3e93010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	// FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index);                   // [0x3e92ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Empty
	// void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack);                                                     // [0x3e92b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	// FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);                             // [0x3e929e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	// int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                            // [0x3e92820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElements
	// int32_t CountElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                        // [0x3e92680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Contains
	// bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                       // [0x3e92520] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Clone
	// FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList);                                            // [0x3e923f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.AppendList
	// void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList);                // [0x3e92150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Append
	// void Append(FScriptTypedElementListProxy ElementList, TArray<FScriptTypedElementHandle>& ElementHandles);                // [0x3e91f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Add
	// bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                            // [0x3e91d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TypedElementCounterInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementCounterInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementRegistry
/// Size: 0x0978 (2424 bytes) (0x000028 - 0x000978) align 8 MaxSize: 0x0978
class UTypedElementRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x950];                                     // 0x0028   (0x0950)  MISSED


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetInstance
	// class UTypedElementRegistry* GetInstance();                                                                              // [0x3e93520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);       // [0x3e93400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceA : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	// bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);                          // [0x3e94310] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	// FText GetDisplayName(FScriptTypedElementHandle& InElementHandle);                                                        // [0x3e92d90] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceB
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceB : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	// bool MarkAsTested(FScriptTypedElementHandle& InElementHandle);                                                           // [0x3e93570] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceC
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceC : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	// bool GetIsTested(FScriptTypedElementHandle& InElementHandle);                                                            // [0x3e93570] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FScriptTypedElementHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageColumn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageTag
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementDataStorageTag
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementWidgetConstructor
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementWidgetConstructor
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementLabelColumn
/// Size: 0x0010 (16 bytes) (0x000001 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementLabelColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementLabelHashColumn
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementLabelHashColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementListProxy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FScriptTypedElementListProxy
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSyncBackToWorldTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementPackagePathColumn
/// Size: 0x0010 (16 bytes) (0x000001 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementPackagePathColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
/// Size: 0x000C (12 bytes) (0x000001 - 0x00000C) align 4 MaxSize: 0x000C
struct FTypedElementPackageLoadedPathColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0xB];                                       // 0x0001   (0x000B)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
/// Size: 0x0010 (16 bytes) (0x000001 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementSlateWidgetReferenceColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSlateWidgetReferenceDeletesRowTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementLocalTransformColumn
/// Size: 0x0060 (96 bytes) (0x000001 - 0x000060) align 16 MaxSize: 0x0060
struct FTypedElementLocalTransformColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x5F];                                      // 0x0001   (0x005F)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementU32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementI32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementFloatValueCacheColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UTypedElementDataStorageCompatibilityInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementDataStorageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementDataStorageUiInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementHandleLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementListLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementCounterInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementRegistry) == 0x0978); // 2424 bytes (0x000028 - 0x000978)
static_assert(sizeof(UTestTypedElementInterfaceA) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceB) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceC) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceA_ImplTyped) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UTestTypedElementInterfaceA_ImplUntyped) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UTestTypedElementInterfaceBAndC_Typed) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FScriptTypedElementHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementDataStorageColumn) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTypedElementDataStorageTag) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTypedElementWidgetConstructor) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementLabelColumn) == 0x0010); // 16 bytes (0x000001 - 0x000010)
static_assert(sizeof(FTypedElementLabelHashColumn) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FScriptTypedElementListProxy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementSyncBackToWorldTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementPackagePathColumn) == 0x0010); // 16 bytes (0x000001 - 0x000010)
static_assert(sizeof(FTypedElementPackageLoadedPathColumn) == 0x000C); // 12 bytes (0x000001 - 0x00000C)
static_assert(sizeof(FTypedElementSlateWidgetReferenceColumn) == 0x0010); // 16 bytes (0x000001 - 0x000010)
static_assert(sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementLocalTransformColumn) == 0x0060); // 96 bytes (0x000001 - 0x000060)
static_assert(sizeof(FTypedElementU32IntValueCacheColumn) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FTypedElementI32IntValueCacheColumn) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FTypedElementFloatValueCacheColumn) == 0x0004); // 4 bytes (0x000001 - 0x000004)
