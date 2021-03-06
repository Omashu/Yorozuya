// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CFrameRateVtbl.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CFrameRate
    {
        CFrameRateVtbl *vfptr;
        float m_fSpeedPerFrame;
        unsigned int m_dwFrames;
        unsigned int m_dwFrameTime;
        unsigned int m_dwFrameCount;
        unsigned int m_dwDisplayTick;
    public:
        CFrameRate();
        void ctor_CFrameRate();
        void CalcSpeedPerFrame();
        unsigned int GetFPS();
        float GetSpeedPerFrame();
        ~CFrameRate();
        void dtor_CFrameRate();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CFrameRate, 32>(), "CFrameRate");
END_ATF_NAMESPACE
