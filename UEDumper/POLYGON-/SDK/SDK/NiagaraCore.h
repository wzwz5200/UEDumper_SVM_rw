
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/NiagaraCore.ENiagaraIterationSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1,
	ENiagaraIterationSource__DirectSet                                               = 2
};

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraMergeable : public UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
public:
};

/// Struct /Script/NiagaraCore.NiagaraVariableCommonReference
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraVariableCommonReference
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class UObject*                                     UnderlyingType;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraCompileHash
{ 
	TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraMergeable) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraVariableCommonReference) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraCompileHash) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FNiagaraVariableCommonReference, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableCommonReference, UnderlyingType) == 0x0008);
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x0000);
