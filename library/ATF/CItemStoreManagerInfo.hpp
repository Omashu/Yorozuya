// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CItemStoreManager.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CItemStoreManagerctor_CItemStoreManager2_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerctor_CItemStoreManager2_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerctor_CItemStoreManager2_ptr);
        using CItemStoreManagerCompleteDisableInstanceStore4_ptr = void (WINAPIV*)(struct CItemStoreManager*, char*);
        using CItemStoreManagerCompleteDisableInstanceStore4_clbk = void (WINAPIV*)(struct CItemStoreManager*, char*, CItemStoreManagerCompleteDisableInstanceStore4_ptr);
        using CItemStoreManagerCompleteStoreLimitItem6_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerCompleteStoreLimitItem6_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerCompleteStoreLimitItem6_ptr);
        using CItemStoreManagerDestroy8_ptr = void (WINAPIV*)();
        using CItemStoreManagerDestroy8_clbk = void (WINAPIV*)(CItemStoreManagerDestroy8_ptr);
        using CItemStoreManagerGetEmptyInstanceItemStore10_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerGetEmptyInstanceItemStore10_clbk = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerGetEmptyInstanceItemStore10_ptr);
        using CItemStoreManagerGetInstanceStoreListBySerial12_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        using CItemStoreManagerGetInstanceStoreListBySerial12_clbk = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int, CItemStoreManagerGetInstanceStoreListBySerial12_ptr);
        using CItemStoreManagerGetMapItemStoreFromList14_ptr = struct CItemStore* (WINAPIV*)(struct CItemStoreManager*, int, int);
        using CItemStoreManagerGetMapItemStoreFromList14_clbk = struct CItemStore* (WINAPIV*)(struct CItemStoreManager*, int, int, CItemStoreManagerGetMapItemStoreFromList14_ptr);
        using CItemStoreManagerGetMapItemStoreListByNum16_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        using CItemStoreManagerGetMapItemStoreListByNum16_clbk = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int, CItemStoreManagerGetMapItemStoreListByNum16_ptr);
        using CItemStoreManagerGetMapItemStoreListBySerial18_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        using CItemStoreManagerGetMapItemStoreListBySerial18_clbk = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int, CItemStoreManagerGetMapItemStoreListBySerial18_ptr);
        using CItemStoreManagerInit20_ptr = bool (WINAPIV*)(struct CItemStoreManager*, int, int);
        using CItemStoreManagerInit20_clbk = bool (WINAPIV*)(struct CItemStoreManager*, int, int, CItemStoreManagerInit20_ptr);
        using CItemStoreManagerInitLogger22_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerInitLogger22_clbk = bool (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerInitLogger22_ptr);
        using CItemStoreManagerInsertNotEnoughLimitItemRecord24_ptr = bool (WINAPIV*)(struct CItemStoreManager*, int);
        using CItemStoreManagerInsertNotEnoughLimitItemRecord24_clbk = bool (WINAPIV*)(struct CItemStoreManager*, int, CItemStoreManagerInsertNotEnoughLimitItemRecord24_ptr);
        using CItemStoreManagerInstance26_ptr = struct CItemStoreManager* (WINAPIV*)();
        using CItemStoreManagerInstance26_clbk = struct CItemStoreManager* (WINAPIV*)(CItemStoreManagerInstance26_ptr);
        using CItemStoreManagerLoad28_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerLoad28_clbk = bool (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerLoad28_ptr);
        using CItemStoreManagerLog30_ptr = void (WINAPIV*)(struct CItemStoreManager*, char*);
        using CItemStoreManagerLog30_clbk = void (WINAPIV*)(struct CItemStoreManager*, char*, CItemStoreManagerLog30_ptr);
        using CItemStoreManagerLoop32_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerLoop32_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerLoop32_ptr);
        using CItemStoreManagerMakeLimitItemUpdateQuery34_ptr = void (WINAPIV*)(struct CItemStoreManager*, unsigned int, char, int, unsigned int, struct _limit_item_db_data*, uint64_t, char*, int);
        using CItemStoreManagerMakeLimitItemUpdateQuery34_clbk = void (WINAPIV*)(struct CItemStoreManager*, unsigned int, char, int, unsigned int, struct _limit_item_db_data*, uint64_t, char*, int, CItemStoreManagerMakeLimitItemUpdateQuery34_ptr);
        using CItemStoreManagerResetInstanceItemStore36_ptr = bool (WINAPIV*)(struct CItemStoreManager*, char, int);
        using CItemStoreManagerResetInstanceItemStore36_clbk = bool (WINAPIV*)(struct CItemStoreManager*, char, int, CItemStoreManagerResetInstanceItemStore36_ptr);
        using CItemStoreManagerSelectStoreLimitItem38_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerSelectStoreLimitItem38_clbk = bool (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerSelectStoreLimitItem38_ptr);
        using CItemStoreManagerSelectTotalRecordNum40_ptr = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*);
        using CItemStoreManagerSelectTotalRecordNum40_clbk = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*, CItemStoreManagerSelectTotalRecordNum40_ptr);
        using CItemStoreManagerSelectUsedRecordNum42_ptr = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*);
        using CItemStoreManagerSelectUsedRecordNum42_clbk = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*, CItemStoreManagerSelectUsedRecordNum42_ptr);
        using CItemStoreManagerSetEnforceInitNormalStore44_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerSetEnforceInitNormalStore44_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerSetEnforceInitNormalStore44_ptr);
        using CItemStoreManagerSetNextEnforceInitTime46_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerSetNextEnforceInitTime46_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerSetNextEnforceInitTime46_ptr);
        using CItemStoreManagerSetStoreLimitItemData48_ptr = void (WINAPIV*)(struct CItemStoreManager*, struct _qry_case_all_store_limit_item::__list*);
        using CItemStoreManagerSetStoreLimitItemData48_clbk = void (WINAPIV*)(struct CItemStoreManager*, struct _qry_case_all_store_limit_item::__list*, CItemStoreManagerSetStoreLimitItemData48_ptr);
        using CItemStoreManagerSetUpdateDBDataDoNotCheck50_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerSetUpdateDBDataDoNotCheck50_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerSetUpdateDBDataDoNotCheck50_ptr);
        using CItemStoreManagerUpdateDisableInstanceStore52_ptr = char (WINAPIV*)(struct CItemStoreManager*, char*);
        using CItemStoreManagerUpdateDisableInstanceStore52_clbk = char (WINAPIV*)(struct CItemStoreManager*, char*, CItemStoreManagerUpdateDisableInstanceStore52_ptr);
        using CItemStoreManagerUpdateStoreLimitItem54_ptr = char (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerUpdateStoreLimitItem54_clbk = char (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerUpdateStoreLimitItem54_ptr);
        
        using CItemStoreManagerdtor_CItemStoreManager58_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        using CItemStoreManagerdtor_CItemStoreManager58_clbk = void (WINAPIV*)(struct CItemStoreManager*, CItemStoreManagerdtor_CItemStoreManager58_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
