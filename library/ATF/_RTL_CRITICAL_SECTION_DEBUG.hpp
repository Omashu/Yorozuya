// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_LIST_ENTRY.hpp>
#include <_RTL_CRITICAL_SECTION.hpp>


START_ATF_NAMESPACE
    struct _RTL_CRITICAL_SECTION_DEBUG
    {
        unsigned __int16 Type;
        unsigned __int16 CreatorBackTraceIndex;
        _RTL_CRITICAL_SECTION *CriticalSection;
        _LIST_ENTRY ProcessLocksList;
        unsigned int EntryCount;
        unsigned int ContentionCount;
        unsigned int Spare[2];
    };
END_ATF_NAMESPACE
