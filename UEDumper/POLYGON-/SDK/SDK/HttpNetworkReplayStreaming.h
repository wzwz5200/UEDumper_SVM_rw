
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

#pragma pack(push, 0x1)

/// Enum /Script/HttpNetworkReplayStreaming.EHttpReplayResult
/// Size: 0x01 (1 bytes)
enum class EHttpReplayResult : uint8_t
{
	EHttpReplayResult__Success                                                       = 0,
	EHttpReplayResult__FailedJsonParse                                               = 1,
	EHttpReplayResult__DataUnavailable                                               = 2,
	EHttpReplayResult__InvalidHttpResponse                                           = 3,
	EHttpReplayResult__CompressionFailed                                             = 4,
	EHttpReplayResult__DecompressionFailed                                           = 5,
	EHttpReplayResult__InvalidPayload                                                = 6,
	EHttpReplayResult__Unknown                                                       = 7
};

#pragma pack(pop)


