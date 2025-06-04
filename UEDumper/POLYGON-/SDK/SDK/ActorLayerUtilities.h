
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

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	// void RemoveActorFromLayer(class AActor* InActor, FActorLayer& Layer);                                                    // [0x2418960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// TArray<AActor*> GetActors(class UObject* WorldContextObject, FActorLayer& ActorLayer);                                   // [0x2418840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	// void AddActorToLayer(class AActor* InActor, FActorLayer& Layer);                                                         // [0x2418760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActorLayer
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ULayersBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FActorLayer) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FActorLayer, Name) == 0x0000);
