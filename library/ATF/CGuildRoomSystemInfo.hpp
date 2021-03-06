// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGuildRoomSystem.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CGuildRoomSystemctor_CGuildRoomSystem2_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        using CGuildRoomSystemctor_CGuildRoomSystem2_clbk = void (WINAPIV*)(struct CGuildRoomSystem*, CGuildRoomSystemctor_CGuildRoomSystem2_ptr);
        using CGuildRoomSystemGetInstance4_ptr = struct CGuildRoomSystem* (WINAPIV*)();
        using CGuildRoomSystemGetInstance4_clbk = struct CGuildRoomSystem* (WINAPIV*)(CGuildRoomSystemGetInstance4_ptr);
        using CGuildRoomSystemGetMapData6_ptr = struct CMapData* (WINAPIV*)(struct CGuildRoomSystem*, char, char);
        using CGuildRoomSystemGetMapData6_clbk = struct CMapData* (WINAPIV*)(struct CGuildRoomSystem*, char, char, CGuildRoomSystemGetMapData6_ptr);
        using CGuildRoomSystemGetMapPos8_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, float*, struct CMapData*, uint16_t*, char*);
        using CGuildRoomSystemGetMapPos8_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, float*, struct CMapData*, uint16_t*, char*, CGuildRoomSystemGetMapPos8_ptr);
        using CGuildRoomSystemGetRestTime10_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int*);
        using CGuildRoomSystemGetRestTime10_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int*, CGuildRoomSystemGetRestTime10_ptr);
        using CGuildRoomSystemGetRoomCountByType12_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, char, char);
        using CGuildRoomSystemGetRoomCountByType12_clbk = int (WINAPIV*)(struct CGuildRoomSystem*, char, char, CGuildRoomSystemGetRoomCountByType12_ptr);
        using CGuildRoomSystemGetRoomType14_ptr = char (WINAPIV*)(struct CGuildRoomSystem*, unsigned int);
        using CGuildRoomSystemGetRoomType14_clbk = char (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, CGuildRoomSystemGetRoomType14_ptr);
        using CGuildRoomSystemInit16_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*);
        using CGuildRoomSystemInit16_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, CGuildRoomSystemInit16_ptr);
        using CGuildRoomSystemIsGuildRoomMemberIn18_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        using CGuildRoomSystemIsGuildRoomMemberIn18_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int, CGuildRoomSystemIsGuildRoomMemberIn18_ptr);
        using CGuildRoomSystemIsRoomRented20_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int);
        using CGuildRoomSystemIsRoomRented20_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, CGuildRoomSystemIsRoomRented20_ptr);
        using CGuildRoomSystemLoad_db22_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*);
        using CGuildRoomSystemLoad_db22_clbk = bool (WINAPIV*)(struct CGuildRoomSystem*, CGuildRoomSystemLoad_db22_ptr);
        using CGuildRoomSystemRentRoom24_ptr = char (WINAPIV*)(struct CGuildRoomSystem*, char, char, int, unsigned int, struct tagTIMESTAMP_STRUCT*, bool);
        using CGuildRoomSystemRentRoom24_clbk = char (WINAPIV*)(struct CGuildRoomSystem*, char, char, int, unsigned int, struct tagTIMESTAMP_STRUCT*, bool, CGuildRoomSystemRentRoom24_ptr);
        using CGuildRoomSystemRentRoomTimer26_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        using CGuildRoomSystemRentRoomTimer26_clbk = void (WINAPIV*)(struct CGuildRoomSystem*, CGuildRoomSystemRentRoomTimer26_ptr);
        using CGuildRoomSystemRoomIn28_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        using CGuildRoomSystemRoomIn28_clbk = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int, CGuildRoomSystemRoomIn28_ptr);
        using CGuildRoomSystemRoomOut30_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        using CGuildRoomSystemRoomOut30_clbk = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int, CGuildRoomSystemRoomOut30_ptr);
        using CGuildRoomSystemSetPlayerOut32_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        using CGuildRoomSystemSetPlayerOut32_clbk = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int, CGuildRoomSystemSetPlayerOut32_ptr);
        
        using CGuildRoomSystemdtor_CGuildRoomSystem34_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        using CGuildRoomSystemdtor_CGuildRoomSystem34_clbk = void (WINAPIV*)(struct CGuildRoomSystem*, CGuildRoomSystemdtor_CGuildRoomSystem34_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
