// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPlayer.hpp>
#include <_character_create_setdata.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _trap_create_setdata : _character_create_setdata
    {
        int nHP;
        CPlayer *pMaster;
        int nTrapMaxAttackPnt;
    public:
        _trap_create_setdata();
        void ctor__trap_create_setdata();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_trap_create_setdata, 56>(), "_trap_create_setdata");
END_ATF_NAMESPACE
