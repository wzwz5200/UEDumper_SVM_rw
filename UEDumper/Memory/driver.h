// ReSharper disable CppNonInlineFunctionDefinitionInHeaderFile
#pragma once

//add any other includes here your driver might use
#include <Windows.h>
#include <tlhelp32.h>
#include <winternl.h>
#include <TlHelp32.h>
#include "memhv.h"


/*
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗  ██████╗░███████╗░█████╗░██████╗░██╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██║
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║╚═╝
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗  ██║░░██║███████╗██║░░██║██████╔╝██╗
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝
*/


/// here should be your driver functions
///	DO NOT call any of those functions from any class,
///	they should only get called from the memory class (memory.cpp and memory.h)
/// DO NOT include this file in any other file, you might get linker errors!
/// ANY CHANGES you do to the params in functions, make sure you also edit the memory.cpp and memory.h file!

//global variables here
HANDLE procHandle = nullptr;

typedef enum _MEMORY_INFORMATION_CLASS
{
    MemoryBasicInformation, // MEMORY_BASIC_INFORMATION
    MemoryWorkingSetInformation, // MEMORY_WORKING_SET_INFORMATION
    MemoryMappedFilenameInformation, // UNICODE_STRING
    MemoryRegionInformation, // MEMORY_REGION_INFORMATION
    MemoryWorkingSetExInformation, // MEMORY_WORKING_SET_EX_INFORMATION
    MemorySharedCommitInformation, // MEMORY_SHARED_COMMIT_INFORMATION
    MemoryImageInformation,
    MemoryRegionInformationEx,
    MemoryPrivilegedBasicInformation,
    MemoryEnclaveImageInformation,
    MemoryBasicInformationCapped
} MEMORY_INFORMATION_CLASS;

EXTERN_C NTSYSAPI NTSTATUS NTAPI NtQueryVirtualMemory(HANDLE processHandle, void* baseAddress, MEMORY_INFORMATION_CLASS memoryInformationClass, void* memoryInformation, size_t memoryInformationLength, size_t* returnLength);


//in case you need to initialize anything BEFORE your com works, you can do this in here.
//this function IS NOT DESIGNED to already take the process name as input or anything related to the target process
//use the function "load" below which will contain data about the process name
inline void init()
{

    printf("[>] Checking presence...\n");
    bool status = HV::CheckPresence();
    if (!status)
    {
        printf("[!] Hypervisor not running\n");
        getchar();

    }

    printf("[>] Instructing hypervisor to protect itself...\n");
    status = HV::Protect();
    if (!status)
    {
        printf("[!] Hypervisor self-protection failed\n");
        getchar();

    }


}

uint64_t _getBaseAddress(const wchar_t* processName, int& pid);

void attachToProcess(const int& pid);

/**
 * \brief use this function to initialize the target process
 * \param processName process name as input
 * \param baseAddress base address of the process gets returned
 * \param processID process id of the process gets returned
 */
inline void loadData(std::string& processName, uint64_t& baseAddress, int& processID)
{
    const auto name = std::wstring(processName.begin(), processName.end());

  
    baseAddress = _getBaseAddress(name.c_str(), processID);
    attachToProcess(processID);
  
}

/**
 * \brief read function (replace with your read logic)
 * \param address memory address to read from
 * \param buffer memory address to write to
 * \param size size of memory to read (expects the buffer/address to have this size too)
 */

inline void _read(uint64_t address, void* buffer, size_t size)
{
    bool success = HV::ReadMemory(address, reinterpret_cast<uint64_t>(buffer), size);

    // 如果读取失败，尝试减少读取长度
    if (!success)
    {
        for (size_t i = 1; i < size && !success; i += 10)
        {
            success = HV::ReadMemory(address, reinterpret_cast<uint64_t>(buffer), size - i);
        }
    }
}



/**
 * \brief write function (replace with your write logic)
 * \param address memory address to write to
 * \param buffer memory address to write from
 * \param size size of memory to write (expects the buffer/address to have this size too)
 */
inline void _write(void* address, const void* buffer, size_t size)
{
    HV::WriteMemory(reinterpret_cast<ULONG64>(buffer), reinterpret_cast<ULONG64>(address), size);
}

/**
 * \brief gets the process base address. If you adjust the params, make sure to change them in memory.cpp too
 * \param processName the name of the process
 * \param pid returns the process id
 * \return process base address
 */

uint64_t _getBaseAddress(const wchar_t* processName, int& pid)
{
    uint64_t baseAddress = 0;

    // 查找进程ID
    if (!pid)
    {
        HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (hProcessSnap == INVALID_HANDLE_VALUE)
            return 0;

        PROCESSENTRY32 pe32 = { sizeof(PROCESSENTRY32) };
        if (Process32First(hProcessSnap, &pe32)) {
            do {
                if (wcscmp(pe32.szExeFile, processName) == 0) {
                    pid = pe32.th32ProcessID;
                    break;
                }
            } while (Process32Next(hProcessSnap, &pe32));
        }
        CloseHandle(hProcessSnap);
    }

    if (pid == 0)
        return 0;

    // 用VirtualQueryEx遍历模块
    HANDLE targetProcessHandle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, 0, pid);
    if (!targetProcessHandle || targetProcessHandle == INVALID_HANDLE_VALUE)
        return 0;

    ULONG64 currentAddress = 0;
    MEMORY_BASIC_INFORMATION memoryInformation;
    while (VirtualQueryEx(targetProcessHandle, reinterpret_cast<void*>(currentAddress), &memoryInformation, sizeof(memoryInformation)))
    {
        if (memoryInformation.Type == MEM_MAPPED || memoryInformation.Type == MEM_IMAGE)
        {
            constexpr size_t bufferSize = 1024;
            void* buffer = malloc(bufferSize);

            SIZE_T bytesOut = 0;
            NTSTATUS status = NtQueryVirtualMemory(targetProcessHandle, memoryInformation.BaseAddress, MemoryMappedFilenameInformation, buffer, bufferSize, &bytesOut);
            if (status == 0)
            {
                UNICODE_STRING* stringBuffer = static_cast<UNICODE_STRING*>(buffer);
                if (wcsstr(stringBuffer->Buffer, processName) && !wcsstr(stringBuffer->Buffer, L".mui"))
                {
                    free(buffer);
                    CloseHandle(targetProcessHandle);
                    return reinterpret_cast<uint64_t>(memoryInformation.BaseAddress);
                }
            }

            free(buffer);
        }
        currentAddress = reinterpret_cast<ULONG64>(memoryInformation.BaseAddress) + memoryInformation.RegionSize;
    }

    CloseHandle(targetProcessHandle);
    return 0;
}

/**
 * \brief this function might not be needed for your driver, this just attaches to the process
 * \param pid process id of the target process
 */
void attachToProcess(const int& pid)
{

   bool status = HV::AttachToProcess(pid);
    if (!status)
    {
        printf("[!] Failed to attach\n");
        getchar();

    }
}