// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <tagNMHDR.hpp>
#include <tagRECT.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  NMPGSCROLL
    {
        tagNMHDR hdr;
        unsigned __int16 fwKeys;
        tagRECT rcParent;
        int iDir;
        int iXpos;
        int iYpos;
        int iScroll;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
