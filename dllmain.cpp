// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <iostream>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, 
    LPVOID lpReserved) {
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        /* You usually start a dll-specific thread to operate in the
        background of application using this lib */
        std::cout << "SuperDLL just got attached to process." << std::endl;
    case DLL_THREAD_ATTACH:
        std::cout << "SuperDLL just got attached to thread." << std::endl;
    case DLL_THREAD_DETACH:
        std::cout << "SuperDLL just got detached from thread." << std::endl;
    case DLL_PROCESS_DETACH:
        std::cout << "SuperDLL just got detached from process." << std::endl;
        break;
    }
    return TRUE;
}

