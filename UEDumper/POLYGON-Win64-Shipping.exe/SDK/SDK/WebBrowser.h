
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

#pragma pack(push, 0x1)

/// Struct /Script/WebBrowser.WebJSCallbackBase
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWebJSCallbackBase
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/WebBrowser.WebJSFunction
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FWebJSFunction : FWebJSCallbackBase
{ 
};

/// Struct /Script/WebBrowser.WebJSResponse
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FWebJSResponse : FWebJSCallbackBase
{ 
};

#pragma pack(pop)


static_assert(sizeof(FWebJSCallbackBase) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWebJSFunction) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FWebJSResponse) == 0x0020); // 32 bytes (0x000020 - 0x000020)
