
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x05A0 (1440 bytes) (0x000008 - 0x0005A0) align 16 MaxSize: 0x05A0
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       InnerButtonStyle;                                           // 0x0010   (0x03F0)  
	FSlateBrush                                        NavigationButtonLeftImage;                                  // 0x0400   (0x00D0)  
	FSlateBrush                                        NavigationButtonRightImage;                                 // 0x04D0   (0x00D0)  
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x0CB0 (3248 bytes) (0x000008 - 0x000CB0) align 16 MaxSize: 0x0CB0
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HighlightBrush;                                             // 0x0010   (0x00D0)  
	FButtonStyle                                       LeftButtonStyle;                                            // 0x00E0   (0x03F0)  
	FButtonStyle                                       CenterButtonStyle;                                          // 0x04D0   (0x03F0)  
	FButtonStyle                                       RightButtonStyle;                                           // 0x08C0   (0x03F0)  
};

#pragma pack(pop)


static_assert(sizeof(FWidgetCarouselNavigationButtonStyle) == 0x05A0); // 1440 bytes (0x000008 - 0x0005A0)
static_assert(sizeof(FWidgetCarouselNavigationBarStyle) == 0x0CB0); // 3248 bytes (0x000008 - 0x000CB0)
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 0x0010);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 0x0400);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 0x04D0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 0x0010);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 0x00E0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 0x04D0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 0x08C0);
