
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

/// Enum /Script/VaRest.EVaJson
/// Size: 0x01 (1 bytes)
enum class EVaJson : uint8_t
{
	EVaJson__None                                                                    = 0,
	EVaJson__Null                                                                    = 1,
	EVaJson__String                                                                  = 2,
	EVaJson__Number                                                                  = 3,
	EVaJson__Boolean                                                                 = 4,
	EVaJson__Array                                                                   = 5,
	EVaJson__Object                                                                  = 6
};

/// Enum /Script/VaRest.EVaRestRequestVerb
/// Size: 0x01 (1 bytes)
enum class EVaRestRequestVerb : uint8_t
{
	EVaRestRequestVerb__GET                                                          = 0,
	EVaRestRequestVerb__POST                                                         = 1,
	EVaRestRequestVerb__PUT                                                          = 2,
	EVaRestRequestVerb__DEL                                                          = 3,
	EVaRestRequestVerb__CUSTOM                                                       = 4
};

/// Enum /Script/VaRest.EVaRestRequestContentType
/// Size: 0x01 (1 bytes)
enum class EVaRestRequestContentType : uint8_t
{
	EVaRestRequestContentType__x_www_form_urlencoded_url                             = 0,
	EVaRestRequestContentType__x_www_form_urlencoded_body                            = 1,
	EVaRestRequestContentType__json                                                  = 2,
	EVaRestRequestContentType__binary                                                = 3
};

/// Enum /Script/VaRest.EVaRestRequestStatus
/// Size: 0x01 (1 bytes)
enum class EVaRestRequestStatus : uint8_t
{
	EVaRestRequestStatus__NotStarted                                                 = 0,
	EVaRestRequestStatus__Processing                                                 = 1,
	EVaRestRequestStatus__Failed                                                     = 2,
	EVaRestRequestStatus__Failed_ConnectionError                                     = 3,
	EVaRestRequestStatus__Succeeded                                                  = 4
};

/// Enum /Script/VaRest.EVaRestHttpStatusCode
/// Size: 0x02 (2 bytes)
enum class EVaRestHttpStatusCode : uint16_t
{
	EVaRestHttpStatusCode__Unknown                                                   = 0,
	EVaRestHttpStatusCode__Continue                                                  = 100,
	EVaRestHttpStatusCode__SwitchProtocol                                            = 101,
	EVaRestHttpStatusCode__Ok                                                        = 200,
	EVaRestHttpStatusCode__Created                                                   = 201,
	EVaRestHttpStatusCode__Accepted                                                  = 202,
	EVaRestHttpStatusCode__Partial                                                   = 203,
	EVaRestHttpStatusCode__NoContent                                                 = 204,
	EVaRestHttpStatusCode__ResetContent                                              = 205,
	EVaRestHttpStatusCode__PartialContent                                            = 206,
	EVaRestHttpStatusCode__Ambiguous                                                 = 300,
	EVaRestHttpStatusCode__Moved                                                     = 301,
	EVaRestHttpStatusCode__Redirect                                                  = 302,
	EVaRestHttpStatusCode__RedirectMethod                                            = 303,
	EVaRestHttpStatusCode__NotModified                                               = 304,
	EVaRestHttpStatusCode__UseProxy                                                  = 305,
	EVaRestHttpStatusCode__RedirectKeepVerb                                          = 307,
	EVaRestHttpStatusCode__BadRequest                                                = 400,
	EVaRestHttpStatusCode__Denied                                                    = 401,
	EVaRestHttpStatusCode__PaymentReq                                                = 402,
	EVaRestHttpStatusCode__Forbidden                                                 = 403,
	EVaRestHttpStatusCode__NotFound                                                  = 404,
	EVaRestHttpStatusCode__BadMethod                                                 = 405,
	EVaRestHttpStatusCode__NoneAcceptable                                            = 406,
	EVaRestHttpStatusCode__ProxyAuthReq                                              = 407,
	EVaRestHttpStatusCode__RequestTimeout                                            = 408,
	EVaRestHttpStatusCode__Conflict                                                  = 409,
	EVaRestHttpStatusCode__Gone                                                      = 410,
	EVaRestHttpStatusCode__LengthRequired                                            = 411,
	EVaRestHttpStatusCode__PrecondFailed                                             = 412,
	EVaRestHttpStatusCode__RequestTooLarge                                           = 413,
	EVaRestHttpStatusCode__UriTooLong                                                = 414,
	EVaRestHttpStatusCode__UnsupportedMedia                                          = 415,
	EVaRestHttpStatusCode__TooManyRequests                                           = 429,
	EVaRestHttpStatusCode__RetryWith                                                 = 449,
	EVaRestHttpStatusCode__ServerError                                               = 500,
	EVaRestHttpStatusCode__NotSupported                                              = 501,
	EVaRestHttpStatusCode__BadGateway                                                = 502,
	EVaRestHttpStatusCode__ServiceUnavail                                            = 503,
	EVaRestHttpStatusCode__GatewayTimeout                                            = 504,
	EVaRestHttpStatusCode__VersionNotSup                                             = 505
};

/// Class /Script/VaRest.VaRestJsonObject
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UVaRestJsonObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/VaRest.VaRestJsonObject.WriteToFilePath
	// bool WriteToFilePath(FString Path, bool bIsRelativeToProjectDir);                                                        // [0xa43170] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetStringField
	// void SetStringField(FString FieldName, FString StringValue);                                                             // [0xa429e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetStringArrayField
	// void SetStringArrayField(FString FieldName, TArray<FString>& StringArray);                                               // [0xa426e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetObjectField
	// void SetObjectField(FString FieldName, class UVaRestJsonObject* JsonObject);                                             // [0xa42350] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetObjectArrayField
	// void SetObjectArrayField(FString FieldName, TArray<UVaRestJsonObject*>& ObjectArray);                                    // [0xa420f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetNumberFieldDouble
	// void SetNumberFieldDouble(FString FieldName, double Number);                                                             // [0xa42000] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetNumberField
	// void SetNumberField(FString FieldName, float Number);                                                                    // [0xa41f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetNumberArrayFieldDouble
	// void SetNumberArrayFieldDouble(FString FieldName, TArray<double>& NumberArray);                                          // [0xa41cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetNumberArrayField
	// void SetNumberArrayField(FString FieldName, TArray<float>& NumberArray);                                                 // [0xa41a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetMapFields_uint8
	// void SetMapFields_uint8(TMap<FString, char>& Fields);                                                                    // [0xa41930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetMapFields_string
	// void SetMapFields_string(TMap<FString, FString>& Fields);                                                                // [0xa41810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetMapFields_int64
	// void SetMapFields_int64(TMap<FString, int64_t>& Fields);                                                                 // [0xa416f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetMapFields_int32
	// void SetMapFields_int32(TMap<FString, int32_t>& Fields);                                                                 // [0xa415d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetMapFields_bool
	// void SetMapFields_bool(TMap<FString, bool>& Fields);                                                                     // [0xa414b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetIntegerField
	// void SetIntegerField(FString FieldName, int32_t Number);                                                                 // [0xa413c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetInt64Field
	// void SetInt64Field(FString FieldName, int64_t Number);                                                                   // [0xa412d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetField
	// void SetField(FString FieldName, class UVaRestJsonValue* JsonValue);                                                     // [0xa410d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetBoolField
	// void SetBoolField(FString FieldName, bool InValue);                                                                      // [0xa40e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetBoolArrayField
	// void SetBoolArrayField(FString FieldName, TArray<bool>& BoolArray);                                                      // [0xa40c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.SetArrayField
	// void SetArrayField(FString FieldName, TArray<UVaRestJsonValue*>& inArray);                                               // [0xa40340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.Reset
	// void Reset();                                                                                                            // [0xa40250] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.RemoveField
	// void RemoveField(FString FieldName);                                                                                     // [0xa40060] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.MergeJsonObject
	// void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);                                             // [0xa3fc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonObject.HasField
	// bool HasField(FString FieldName);                                                                                        // [0xa3f950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetStringField
	// FString GetStringField(FString FieldName);                                                                               // [0xa3f150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetStringArrayField
	// TArray<FString> GetStringArrayField(FString FieldName);                                                                  // [0xa3f060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetObjectField
	// class UVaRestJsonObject* GetObjectField(FString FieldName);                                                              // [0xa3ec50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetObjectArrayField
	// TArray<UVaRestJsonObject*> GetObjectArrayField(FString FieldName);                                                       // [0xa3eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetNumberField
	// float GetNumberField(FString FieldName);                                                                                 // [0xa3ea00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetNumberArrayField
	// TArray<float> GetNumberArrayField(FString FieldName);                                                                    // [0xa3e910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetIntegerField
	// int32_t GetIntegerField(FString FieldName);                                                                              // [0xa3e7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetIntegerArrayField
	// TArray<int32_t> GetIntegerArrayField(FString FieldName);                                                                 // [0xa3e6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetInt64Field
	// int64_t GetInt64Field(FString FieldName);                                                                                // [0xa3e580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetFieldTypeString
	// FString GetFieldTypeString(FString FieldName);                                                                           // [0xa3e490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetFieldNames
	// TArray<FString> GetFieldNames();                                                                                         // [0xa3e400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetField
	// class UVaRestJsonValue* GetField(FString FieldName);                                                                     // [0xa3e1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetBoolField
	// bool GetBoolField(FString FieldName);                                                                                    // [0xa3e0a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetBoolArrayField
	// TArray<bool> GetBoolArrayField(FString FieldName);                                                                       // [0xa3dfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.GetArrayField
	// TArray<UVaRestJsonValue*> GetArrayField(FString FieldName);                                                              // [0xa3dba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.EncodeJsonToSingleString
	// FString EncodeJsonToSingleString();                                                                                      // [0xa3da80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.EncodeJson
	// FString EncodeJson();                                                                                                    // [0xa3da00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonObject.DecodeJson
	// bool DecodeJson(FString JsonString, bool bUseIncrementalParser);                                                         // [0xa3d6c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VaRest.VaRestJsonValue
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UVaRestJsonValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/VaRest.VaRestJsonValue.Reset
	// void Reset();                                                                                                            // [0xa40270] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonValue.IsNull
	// bool IsNull();                                                                                                           // [0xa3fb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.GetTypeString
	// FString GetTypeString();                                                                                                 // [0xa3f370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.GetType
	// EVaJson GetType();                                                                                                       // [0xa3f2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsString
	// FString AsString();                                                                                                      // [0xa3c580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsObject
	// class UVaRestJsonObject* AsObject();                                                                                     // [0xa3c400] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestJsonValue.AsNumber
	// float AsNumber();                                                                                                        // [0xa3c310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsInt64
	// int64_t AsInt64();                                                                                                       // [0xa3c220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsInt32
	// int32_t AsInt32();                                                                                                       // [0xa3c130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsBool
	// bool AsBool();                                                                                                           // [0xa3c040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestJsonValue.AsArray
	// TArray<UVaRestJsonValue*> AsArray();                                                                                     // [0xa3bfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VaRest.VaRestLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVaRestLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VaRest.VaRestLibrary.StringToSha1
	// FString StringToSha1(FString StringToHash);                                                                              // [0xa42f80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.StringToMd5
	// FString StringToMd5(FString StringToHash);                                                                               // [0xa42da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.PercentEncode
	// FString PercentEncode(FString Source);                                                                                   // [0xa3feb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.HTTPStatusIntToEnum
	// TEnumAsByte<EVaRestHttpStatusCode> HTTPStatusIntToEnum(int32_t StatusCode);                                              // [0xa3f8d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.GetWorldURL
	// FVaRestURL GetWorldURL(class UObject* WorldContextObject);                                                               // [0xa3f580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.GetVaRestVersion
	// FString GetVaRestVersion();                                                                                              // [0xa3f4e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.GetVaRestSettings
	// class UVaRestSettings* GetVaRestSettings();                                                                              // [0xa3f480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.Base64EncodeData
	// bool Base64EncodeData(TArray<char>& Data, FString& Dest);                                                                // [0xa3cb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.Base64Encode
	// FString Base64Encode(FString Source);                                                                                    // [0xa3c8e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.Base64DecodeData
	// bool Base64DecodeData(FString Source, TArray<char>& Dest);                                                               // [0xa3c7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestLibrary.Base64Decode
	// bool Base64Decode(FString Source, FString& Dest);                                                                        // [0xa3c6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VaRest.VaRestRequestJSON
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 8 MaxSize: 0x01E0
class UVaRestRequestJSON : public UObject
{ 
public:
	SDK_UNDEFINED(16,1086) /* FMulticastInlineDelegate */ __um(OnRequestComplete);                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1087) /* FMulticastInlineDelegate */ __um(OnRequestFail);                                     // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0048   (0x0040)  MISSED
	int32_t                                            ResponseSize;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FString                                            ResponseContent;                                            // 0x0090   (0x0010)  
	bool                                               bIsValidJsonResponse;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
	class UVaRestJsonObject*                           RequestJsonObj;                                             // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x00B8   (0x0048)  MISSED
	class UVaRestJsonObject*                           ResponseJsonObj;                                            // 0x0100   (0x0008)  
	class UVaRestJsonValue*                            ResponseJsonValue;                                          // 0x0108   (0x0008)  
	unsigned char                                      UnknownData04_7[0xD0];                                      // 0x0110   (0x00D0)  MISSED


	/// Functions
	// Function /Script/VaRest.VaRestRequestJSON.SetVerb
	// void SetVerb(EVaRestRequestVerb Verb);                                                                                   // [0xa42ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetURL
	// void SetURL(FString URL);                                                                                                // [0xa42bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetStringRequestContent
	// void SetStringRequestContent(FString Content);                                                                           // [0xa42ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetResponseObject
	// void SetResponseObject(class UVaRestJsonObject* JsonObject);                                                             // [0xa42530] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetRequestObject
	// void SetRequestObject(class UVaRestJsonObject* JsonObject);                                                              // [0xa424a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetHeader
	// void SetHeader(FString HeaderName, FString HeaderValue);                                                                 // [0xa411c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetCustomVerb
	// void SetCustomVerb(FString Verb);                                                                                        // [0xa40fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetContentType
	// void SetContentType(EVaRestRequestContentType ContentType);                                                              // [0xa40f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetBinaryRequestContent
	// void SetBinaryRequestContent(TArray<char>& Content);                                                                     // [0xa40b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.SetBinaryContentType
	// void SetBinaryContentType(FString ContentType);                                                                          // [0xa40a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.ResetResponseData
	// void ResetResponseData();                                                                                                // [0xa40320] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.ResetRequestData
	// void ResetRequestData();                                                                                                 // [0xa402b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.ResetData
	// void ResetData();                                                                                                        // [0xa40290] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.RemoveTag
	// int32_t RemoveTag(FName Tag);                                                                                            // [0xa40110] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.ProcessURL
	// void ProcessURL(FString URL);                                                                                            // [0xa3ffc0] Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.HasTag
	// bool HasTag(FName Tag);                                                                                                  // [0xa3fa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetVerb
	// EVaRestRequestVerb GetVerb();                                                                                            // [0xa3f560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetURL
	// FString GetURL();                                                                                                        // [0xa3f3f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetStatus
	// EVaRestRequestStatus GetStatus();                                                                                        // [0xa3f020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseValue
	// class UVaRestJsonValue* GetResponseValue();                                                                              // [0xa3f000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseObject
	// class UVaRestJsonObject* GetResponseObject();                                                                            // [0xa3efe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseHeader
	// FString GetResponseHeader(FString HeaderName);                                                                           // [0xa3ee70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseContentLength
	// int32_t GetResponseContentLength();                                                                                      // [0xa3ee50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseContentAsString
	// FString GetResponseContentAsString(bool bCacheResponseContent);                                                          // [0xa3ed70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseContent
	// TArray<char> GetResponseContent();                                                                                       // [0xa3ed40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetResponseCode
	// int32_t GetResponseCode();                                                                                               // [0xa3ed20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetRequestObject
	// class UVaRestJsonObject* GetRequestObject();                                                                             // [0xa3ed00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.GetAllResponseHeaders
	// TArray<FString> GetAllResponseHeaders();                                                                                 // [0xa3db20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaRest.VaRestRequestJSON.ExecuteProcessRequest
	// void ExecuteProcessRequest();                                                                                            // [0xa3db00] Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.Cancel
	// void Cancel();                                                                                                           // [0xa3ce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.ApplyURL
	// void ApplyURL(FString URL, class UVaRestJsonObject*& Result, class UObject* WorldContextObject, FLatentActionInfo LatentInfo); // [0xa3be20] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VaRest.VaRestRequestJSON.AddTag
	// void AddTag(FName Tag);                                                                                                  // [0xa3bd80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VaRest.VaRestSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UVaRestSettings : public UObject
{ 
public:
	bool                                               bExtendedLog;                                               // 0x0028   (0x0001)  
	bool                                               bUseChunkedParser;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/VaRest.VaRestCallResponse
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FVaRestCallResponse
{ 
	class UVaRestRequestJSON*                          Request;                                                    // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1088) /* FDelegateProperty */     __um(Callback);                                             // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Class /Script/VaRest.VaRestSubsystem
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UVaRestSubsystem : public UEngineSubsystem
{ 
public:
	TMap<class UVaRestRequestJSON*, FVaRestCallResponse> RequestMap;                                               // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
	// class UVaRestJsonObject* StaticConstructVaRestJsonObject();                                                              // [0xa42d60] Final|Native|Static|Public 
	// Function /Script/VaRest.VaRestSubsystem.LoadJsonFromFile
	// class UVaRestJsonObject* LoadJsonFromFile(FString Path, bool bIsRelativeToContentDir);                                   // [0xa3fb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.DecodeJsonValue
	// class UVaRestJsonValue* DecodeJsonValue(FString JsonString);                                                             // [0xa3d950] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.DecodeJsonObject
	// class UVaRestJsonObject* DecodeJsonObject(FString JsonString);                                                           // [0xa3d7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.ConstructVaRestRequestExt
	// class UVaRestRequestJSON* ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType);     // [0xa3d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.ConstructVaRestRequest
	// class UVaRestRequestJSON* ConstructVaRestRequest();                                                                      // [0xa3d5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.ConstructVaRestJsonObject
	// class UVaRestJsonObject* ConstructVaRestJsonObject();                                                                    // [0xa3d580] Final|Native|Public|BlueprintCallable 
	// Function /Script/VaRest.VaRestSubsystem.ConstructJsonValueString
	// class UVaRestJsonValue* ConstructJsonValueString(FString StringValue);                                                   // [0xa3d3b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestSubsystem.ConstructJsonValueObject
	// class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);                                   // [0xa3d230] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestSubsystem.ConstructJsonValueNumber
	// class UVaRestJsonValue* ConstructJsonValueNumber(float Number);                                                          // [0xa3d0b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestSubsystem.ConstructJsonValueBool
	// class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);                                                            // [0xa3cf50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestSubsystem.ConstructJsonValueArray
	// class UVaRestJsonValue* ConstructJsonValueArray(TArray<UVaRestJsonValue*>& inArray);                                     // [0xa3ce90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VaRest.VaRestSubsystem.CallURL
	// void CallURL(FString URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, FDelegateProperty& Callback); // [0xa3cca0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/VaRest.VaRestURL
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FVaRestURL
{ 
	FString                                            protocol;                                                   // 0x0000   (0x0010)  
	FString                                            Host;                                                       // 0x0010   (0x0010)  
	int32_t                                            Port;                                                       // 0x0020   (0x0004)  
	int32_t                                            Valid;                                                      // 0x0024   (0x0004)  
	FString                                            Map;                                                        // 0x0028   (0x0010)  
	FString                                            RedirectURL;                                                // 0x0038   (0x0010)  
	TArray<FString>                                    Op;                                                         // 0x0048   (0x0010)  
	FString                                            Portal;                                                     // 0x0058   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UVaRestJsonObject) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVaRestJsonValue) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVaRestLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVaRestRequestJSON) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(UVaRestSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FVaRestCallResponse) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UVaRestSubsystem) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FVaRestURL) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UVaRestRequestJSON, ResponseContent) == 0x0090);
static_assert(offsetof(UVaRestRequestJSON, RequestJsonObj) == 0x00B0);
static_assert(offsetof(UVaRestRequestJSON, ResponseJsonObj) == 0x0100);
static_assert(offsetof(UVaRestRequestJSON, ResponseJsonValue) == 0x0108);
static_assert(offsetof(FVaRestCallResponse, Request) == 0x0000);
static_assert(offsetof(UVaRestSubsystem, RequestMap) == 0x0030);
static_assert(offsetof(FVaRestURL, protocol) == 0x0000);
static_assert(offsetof(FVaRestURL, Host) == 0x0010);
static_assert(offsetof(FVaRestURL, Map) == 0x0028);
static_assert(offsetof(FVaRestURL, RedirectURL) == 0x0038);
static_assert(offsetof(FVaRestURL, Op) == 0x0048);
static_assert(offsetof(FVaRestURL, Portal) == 0x0058);
