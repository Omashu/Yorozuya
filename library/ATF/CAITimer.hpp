// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct CAITimer
    {
        unsigned int m_BefTime;
        unsigned int m_Delay;
        unsigned int m_DDelay;
    public:
        CAITimer();
        void ctor_CAITimer();
        int Check();
        void Init(unsigned int delay);
        void Set(unsigned int delay);
    };
END_ATF_NAMESPACE
