// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_post_content_get
    {
        unsigned int dwSerial;
        char byProcRet;
        unsigned int dwMasterSerial;
        unsigned int dwIndex;
        char wszContent[201];
    public:
        _qry_case_post_content_get();
        void ctor__qry_case_post_content_get();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_case_post_content_get, 220>(), "_qry_case_post_content_get");
END_ATF_NAMESPACE
