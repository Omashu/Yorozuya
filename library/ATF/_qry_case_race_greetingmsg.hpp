// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _qry_case_race_greetingmsg
    {
        char type;
        char in_bossname[17];
        char in_racegreetingmsg[256];
    public:
        int size();
    };    
    static_assert(ATF::checkSize<_qry_case_race_greetingmsg, 274>(), "_qry_case_race_greetingmsg");
END_ATF_NAMESPACE
