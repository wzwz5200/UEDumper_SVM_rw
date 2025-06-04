
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/RedpointEOSAuth.EEOSUserInterface_SignInOrCreateAccount_Choice
/// Size: 0x01 (1 bytes)
enum class EEOSUserInterface_SignInOrCreateAccount_Choice : uint8_t
{
	EEOSUserInterface_SignInOrCreateAccount_Choice__SignIn                           = 0,
	EEOSUserInterface_SignInOrCreateAccount_Choice__CreateAccount                    = 1
};

/// Class /Script/RedpointEOSAuth.EOSDefaultUserInterface_EnterDevicePinCode
/// Size: 0x0760 (1888 bytes) (0x000280 - 0x000760) align 16 MaxSize: 0x0760
class UEOSDefaultUserInterface_EnterDevicePinCode : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x420];                                     // 0x0280   (0x0420)  MISSED
	FSlateFontInfo                                     TitleFont;                                                  // 0x06A0   (0x0058)  
	FSlateFontInfo                                     RegularFont;                                                // 0x06F8   (0x0058)  
	class UEOSUserInterface_EnterDevicePinCode_Context* Context;                                                   // 0x0750   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0758   (0x0008)  MISSED
};

/// Class /Script/RedpointEOSAuth.EOSDefaultUserInterface_SignInOrCreateAccount
/// Size: 0x0740 (1856 bytes) (0x000280 - 0x000740) align 16 MaxSize: 0x0740
class UEOSDefaultUserInterface_SignInOrCreateAccount : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x400];                                     // 0x0280   (0x0400)  MISSED
	FSlateFontInfo                                     TitleFont;                                                  // 0x0680   (0x0058)  
	FSlateFontInfo                                     RegularFont;                                                // 0x06D8   (0x0058)  
	class UEOSUserInterface_SignInOrCreateAccount_Context* Context;                                                // 0x0730   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0738   (0x0008)  MISSED
};

/// Class /Script/RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEOSUserInterface_EnterDevicePinCode : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
	// void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, FString VerificationUrl, FString PinCode); // [0x1e03de0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode_Context
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
	// void CancelLogin();                                                                                                      // [0x1e03d40] Native|Public|BlueprintCallable 
};

/// Class /Script/RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEOSUserInterface_SignInOrCreateAccount : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
	// void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);                                 // [0x1e03f20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
	// void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);                                        // [0x1e03d60] Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UEOSDefaultUserInterface_EnterDevicePinCode) == 0x0760); // 1888 bytes (0x000280 - 0x000760)
static_assert(sizeof(UEOSDefaultUserInterface_SignInOrCreateAccount) == 0x0740); // 1856 bytes (0x000280 - 0x000740)
static_assert(sizeof(UEOSUserInterface_EnterDevicePinCode) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEOSUserInterface_EnterDevicePinCode_Context) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEOSUserInterface_SignInOrCreateAccount) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEOSUserInterface_SignInOrCreateAccount_Context) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UEOSDefaultUserInterface_EnterDevicePinCode, TitleFont) == 0x06A0);
static_assert(offsetof(UEOSDefaultUserInterface_EnterDevicePinCode, RegularFont) == 0x06F8);
static_assert(offsetof(UEOSDefaultUserInterface_EnterDevicePinCode, Context) == 0x0750);
static_assert(offsetof(UEOSDefaultUserInterface_SignInOrCreateAccount, TitleFont) == 0x0680);
static_assert(offsetof(UEOSDefaultUserInterface_SignInOrCreateAccount, RegularFont) == 0x06D8);
static_assert(offsetof(UEOSDefaultUserInterface_SignInOrCreateAccount, Context) == 0x0730);
