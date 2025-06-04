
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/Maps/LVL_Menu/LVL_Menu.LVL_Menu_C
/// Size: 0x02B0 (688 bytes) (0x000298 - 0x0002B0) align 8 MaxSize: 0x02B0
class ALVL_Menu_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class ASpotLight*                                  SpotLight_7_ExecuteUbergraph_LVL_Menu_RefProperty;          // 0x02A0   (0x0008)  
	class ASpotLight*                                  SpotLight_6_ExecuteUbergraph_LVL_Menu_RefProperty;          // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/Maps/LVL_Menu/LVL_Menu.LVL_Menu_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/LVL_Menu/LVL_Menu.LVL_Menu_C.ChangeLobbyFPSLimit
	// void ChangeLobbyFPSLimit(int32_t NewValue);                                                                              // [0x2c97800] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/LVL_Menu/LVL_Menu.LVL_Menu_C.ChangeShadowQualitySettings
	// void ChangeShadowQualitySettings(int32_t NewValue);                                                                      // [0x2c97800] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/LVL_Menu/LVL_Menu.LVL_Menu_C.ExecuteUbergraph_LVL_Menu
	// void ExecuteUbergraph_LVL_Menu(int32_t EntryPoint);                                                                      // [0x2c97800] Final                
};

#pragma pack(pop)


static_assert(sizeof(ALVL_Menu_C) == 0x02B0); // 688 bytes (0x000298 - 0x0002B0)
static_assert(offsetof(ALVL_Menu_C, UberGraphFrame) == 0x0298);
static_assert(offsetof(ALVL_Menu_C, SpotLight_7_ExecuteUbergraph_LVL_Menu_RefProperty) == 0x02A0);
static_assert(offsetof(ALVL_Menu_C, SpotLight_6_ExecuteUbergraph_LVL_Menu_RefProperty) == 0x02A8);
