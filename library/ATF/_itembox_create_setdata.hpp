// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_STORAGE_LIST.hpp>
#include <_object_create_setdata.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _itembox_create_setdata : _object_create_setdata
    {
        struct CPlayer *pOwner;
        struct CCharacter *pThrower;
        char byCreateCode;
        bool bParty;
        unsigned int dwPartyBossSerial;
        struct CPlayer *pAttacker;
        int bHolyScanner;
        char byEventItemLootAuth;
        _STORAGE_LIST::_db_con Item;
    public:
        _itembox_create_setdata();
        void ctor__itembox_create_setdata();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_itembox_create_setdata, 120>(), "_itembox_create_setdata");
END_ATF_NAMESPACE
