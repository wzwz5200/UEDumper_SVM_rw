
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

/// Class /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile
	// bool MoveFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0xa9cbc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
	// bool MakeDirectory(FString Path, bool bCreateTree);                                                                      // [0xa9cab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
	// FString GetUserDirectory();                                                                                              // [0xa9ca20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
	// bool FindRecursive(FString StartDirectory, TArray<FString>& FoundPaths, FString Wildcard, bool bFindFiles, bool bFindDirectories); // [0xa9c770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
	// bool FindFiles(FString Directory, TArray<FString>& FoundFiles, FString FileExtension);                                   // [0xa9c5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists
	// bool FileExists(FString Filename);                                                                                       // [0xa9c500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists
	// bool DirectoryExists(FString Directory);                                                                                 // [0xa9c440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
	// bool DeleteFile(FString Filename, bool bMustExist, bool bEvenIfReadOnly);                                                // [0xa9c2e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
	// bool DeleteDirectory(FString Directory, bool bMustExist, bool bDeleteRecursively);                                       // [0xa9c190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
	// bool CopyFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0xa9bfd0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UBlueprintFileUtilsBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
