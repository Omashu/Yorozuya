// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _worlddb_golden_box_item
    {
        struct _golden_box_item_info
        {
            int nGoldencode;
            unsigned __int16 wGoldencount;
        };
        int nSerial;
        char bydck;
        unsigned int dwStarterBoxCnt;
        int nBox_item_code[2];
        unsigned __int16 wBox_item_max[2];
        char bygolden_item_num[2];
        _golden_box_item_info List[2][100];
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_worlddb_golden_box_item, 1628>(), "_worlddb_golden_box_item");
END_ATF_NAMESPACE
