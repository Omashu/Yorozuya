// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _detected_char_list
    {
        struct _char_info
        {
            char m_byCharType;
            float m_fPos[2];
        };
        int nSize;
        _char_info CharInfoList[50];
    public:
        int AddCharInfo(char byCharType, float* fPos);
        _detected_char_list();
        void ctor__detected_char_list();
        void init();
    };
END_ATF_NAMESPACE
