
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/Actions.EActionState
/// Size: 0x01 (1 bytes)
enum class EActionState : uint8_t
{
	EActionState__Preparing                                                          = 0,
	EActionState__Running                                                            = 1,
	EActionState__Success                                                            = 2,
	EActionState__Failure                                                            = 3,
	EActionState__Cancelled                                                          = 4
};

/// Class /Script/Actions.Action
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAction : public UObject
{ 
public:
	bool                                               bWantsToTick;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              TickRate;                                                   // 0x002C   (0x0004)  
	EActionState                                       State;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(80,340) /* TSet<UAction*> */         __um(ChildrenActions);                                      // 0x0038   (0x0050)  
	SDK_UNDEFINED(16,341) /* FMulticastInlineDelegate */ __um(OnActivationDelegate);                               // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,342) /* FMulticastInlineDelegate */ __um(OnFinishedDelegate);                                 // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/Actions.Action.Succeeded
	// bool Succeeded();                                                                                                        // [0x1b8c0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.Succeed
	// void Succeed();                                                                                                          // [0x1b8c010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Actions.Action.ReceiveTick
	// void ReceiveTick(float DeltaTime);                                                                                       // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/Actions.Action.ReceiveFinished
	// void ReceiveFinished(EActionState Reason);                                                                               // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/Actions.Action.ReceiveCanActivate
	// bool ReceiveCanActivate();                                                                                               // [0x11c8da0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Actions.Action.ReceiveActivate
	// void ReceiveActivate();                                                                                                  // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/Actions.Action.IsRunning
	// bool IsRunning();                                                                                                        // [0x1b8bf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetTickRate
	// float GetTickRate();                                                                                                     // [0x1b8bec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetState
	// EActionState GetState();                                                                                                 // [0x1b8bea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetParentAction
	// class UAction* GetParentAction();                                                                                        // [0x1b8be30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetParent
	// class UObject* GetParent();                                                                                              // [0x1b8be10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetOwnerComponent
	// class UActorComponent* GetOwnerComponent();                                                                              // [0x1b8bd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetOwnerActor
	// class AActor* GetOwnerActor();                                                                                           // [0x1b8bc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.GetOwner
	// class UObject* GetOwner();                                                                                               // [0x1b8bc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.Failed
	// bool Failed();                                                                                                           // [0x1b8bbc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Actions.Action.Fail
	// void Fail(FName Error);                                                                                                  // [0x1b8ba60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Actions.Action.Activate
	// void Activate();                                                                                                         // [0x1b8b1d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Actions.ActionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UActionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Actions.ActionLibrary.CreateAction
	// class UAction* CreateAction(class UObject* Owner, class UClass* Type, bool bAutoActivate);                               // [0x1b8b7f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/Actions.ActionsTickGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FActionsTickGroup
{ 
	float                                              TickRate;                                                   // 0x0000   (0x0004)  
	float                                              TickTimeElapsed;                                            // 0x0004   (0x0004)  
	TArray<class UAction*>                             Actions;                                                    // 0x0008   (0x0010)  
};

/// Class /Script/Actions.ActionsSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UActionsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,343) /* TSet<FRootAction> */      __um(RootActions);                                          // 0x0038   (0x0050)  
	TArray<FActionsTickGroup>                          TickGroups;                                                 // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/Actions.ActionsSubsystem.CancelAllByOwner
	// void CancelAllByOwner(class UObject* Object);                                                                            // [0x1b8b6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Actions.ActionsSubsystem.CancelAllByClass
	// void CancelAllByClass(class UClass* actionClass, TArray<UAction*> ignoreActions);                                        // [0x1b8b1f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Actions.BTT_RunAction
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UBTT_RunAction : public UBTTaskNode
{ 
public:
	class UAction*                                     ActionType;                                                 // 0x0070   (0x0008)  
	class UAction*                                     Action;                                                     // 0x0078   (0x0008)  
	class UBehaviorTreeComponent*                      OwnerComp;                                                  // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/Actions.BTT_RunAction.OnRunActionFinished
	// void OnRunActionFinished(EActionState Reason);                                                                           // [0x1b8bf40] Final|Native|Public  
};

/// Struct /Script/Actions.RootAction
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRootAction
{ 
	TWeakObjectPtr<class UObject*>                     Owner;                                                      // 0x0000   (0x0008)  
	TArray<class UAction*>                             Actions;                                                    // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UAction) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UActionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FActionsTickGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UActionsSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UBTT_RunAction) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FRootAction) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UAction, State) == 0x0030);
static_assert(offsetof(FActionsTickGroup, Actions) == 0x0008);
static_assert(offsetof(UActionsSubsystem, TickGroups) == 0x0088);
static_assert(offsetof(UBTT_RunAction, ActionType) == 0x0070);
static_assert(offsetof(UBTT_RunAction, Action) == 0x0078);
static_assert(offsetof(UBTT_RunAction, OwnerComp) == 0x0080);
static_assert(offsetof(FRootAction, Owner) == 0x0000);
static_assert(offsetof(FRootAction, Actions) == 0x0008);
