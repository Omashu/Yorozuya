// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRecordData.hpp>
#include <_STORAGE_LIST.hpp>
#include <_UNIT_DB_BASE.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _WEAPON_PARAM
    {
        _STORAGE_LIST::_db_con *pFixWp;
        _UNIT_DB_BASE::_LIST *pFixUnit;
        int nGaMaxAF;
        int nGaMinAF;
        char byGaMinSel;
        char byGaMaxSel;
        int nMaMaxAF;
        int nMaMinAF;
        char byMaMinSel;
        char byMaMaxSel;
        char byAttTolType;
        char byWpClass;
        char byWpType;
        unsigned __int16 wGaAttRange;
        unsigned __int16 wMaAttRange;
        int nActiveType;
        char strActiveCode_key[64];
        int nActiveEffLvl;
        int nActiveProb;
        char strEffBulletType[64];
    public:
        void FixUnit(struct _UNIT_DB_BASE::_LIST* pUnit);
        void FixWeapon(struct _STORAGE_LIST::_db_con* pWeapon);
        unsigned int GetAttackDelay(int nLv, int nAddDelay);
        int GetAttackToolType();
        int GetWeaponTolType(struct _STORAGE_LIST::_db_con* pItem);
        void Init();
        static void SetStaticMember(struct CRecordData* pWeaponData);
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_WEAPON_PARAM, 192>(), "_WEAPON_PARAM");
END_ATF_NAMESPACE
