
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown                                                     = 0,
	EInAppPurchaseState__Success                                                     = 1,
	EInAppPurchaseState__Failed                                                      = 2,
	EInAppPurchaseState__Cancelled                                                   = 3,
	EInAppPurchaseState__Invalid                                                     = 4,
	EInAppPurchaseState__NotAllowed                                                  = 5,
	EInAppPurchaseState__Restored                                                    = 6,
	EInAppPurchaseState__AlreadyOwned                                                = 7
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x01 (1 bytes)
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None                                                            = 0,
	EMPMatchOutcome__Quit                                                            = 1,
	EMPMatchOutcome__Won                                                             = 2,
	EMPMatchOutcome__Lost                                                            = 3,
	EMPMatchOutcome__Tied                                                            = 4,
	EMPMatchOutcome__TimeExpired                                                     = 5,
	EMPMatchOutcome__First                                                           = 6,
	EMPMatchOutcome__Second                                                          = 7,
	EMPMatchOutcome__Third                                                           = 8,
	EMPMatchOutcome__Fourth                                                          = 9
};

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNamedInterface
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x0008)  
	class UObject*                                     InterfaceObject;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNamedInterfaceDef
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x0008)  
	FString                                            InterfaceClassName;                                         // 0x0008   (0x0010)  
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNamedInterfaces : public UObject
{ 
public:
	TArray<FNamedInterface>                            NamedInterfaces;                                            // 0x0028   (0x0010)  
	TArray<FNamedInterfaceDef>                         NamedInterfaceDefs;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedMatchInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);                                                          // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// void OnMatchEnded(FString Match);                                                                                        // [0x2c97800] Event|Public|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(FNamedInterface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNamedInterfaceDef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNamedInterfaces) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UTurnBasedMatchInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FNamedInterface, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterface, InterfaceObject) == 0x0008);
static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 0x0008);
static_assert(offsetof(UNamedInterfaces, NamedInterfaces) == 0x0028);
static_assert(offsetof(UNamedInterfaces, NamedInterfaceDefs) == 0x0038);
