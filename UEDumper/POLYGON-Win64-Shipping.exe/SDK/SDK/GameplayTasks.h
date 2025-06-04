
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

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x01 (1 bytes)
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1,
	ETaskResourceOverlapPolicy__RequestCancelAndStartOnTop                           = 2,
	ETaskResourceOverlapPolicy__RequestCancelAndStartAtEnd                           = 3
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0038   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x003A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x25];                                      // 0x003B   (0x0025)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                               // [0x510bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                          // [0x510b980] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0028   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0118 (280 bytes) (0x0000A0 - 0x000118) align 8 MaxSize: 0x0118
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x14];                                      // 0x00A0   (0x0014)  MISSED
	bool                                               bIsNetDirty : 1;                                            // 0x00B4:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x00D8   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,318) /* FMulticastInlineDelegate */ __um(OnClaimedResourcesChange);                           // 0x00F8   (0x0010)  
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks(TArray<UGameplayTask*>& PreviousSimulatedTasks);                                               // [0x510bce0] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x510ba90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x510b770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x510b580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,319) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,320) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0088   (0x0030)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector spawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x510bdb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                                 // [0x510b9c0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                                 // [0x510b4a0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,321) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,322) /* FMulticastInlineDelegate */ __um(OnTimeExpired);                                      // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0088   (0x0018)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,323) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float time, char Priority);              // [0x510c020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x2c97800] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGameplayTask) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UGameplayTaskOwnerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayTaskResource) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGameplayTasksComponent) == 0x0118); // 280 bytes (0x0000A0 - 0x000118)
static_assert(sizeof(UGameplayTask_ClaimResource) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UGameplayTask_SpawnActor) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UGameplayTask_WaitDelay) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FGameplayResourceSet) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(offsetof(UGameplayTask, InstanceName) == 0x0030);
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 0x003A);
static_assert(offsetof(UGameplayTask, ChildTask) == 0x0060);
static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 0x00B8);
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 0x00D8);
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 0x00E8);
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 0x0108);
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 0x00B8);
