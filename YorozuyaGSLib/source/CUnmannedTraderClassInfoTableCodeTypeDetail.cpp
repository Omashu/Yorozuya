#include <CUnmannedTraderClassInfoTableCodeTypeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_ptr CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_clbk CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableCodeTypeCreate4_ptr CUnmannedTraderClassInfoTableCodeTypeCreate4_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypeCreate4_clbk CUnmannedTraderClassInfoTableCodeTypeCreate4_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_ptr CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_clbk CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_ptr CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_clbk CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_user(nullptr);
        
        Info::CUnmannedTraderClassInfoTableCodeTypeLoadXML10_ptr CUnmannedTraderClassInfoTableCodeTypeLoadXML10_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypeLoadXML10_clbk CUnmannedTraderClassInfoTableCodeTypeLoadXML10_user(nullptr);
        
        
        Info::CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_ptr CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_next(nullptr);
        Info::CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_clbk CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_user(nullptr);
        
        
        void CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this, unsigned int dwID)
        {
           CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_user(_this, dwID, CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_next);
        };
        struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoTableCodeTypeCreate4_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this, unsigned int dwID)
        {
           return CUnmannedTraderClassInfoTableCodeTypeCreate4_user(_this, dwID, CUnmannedTraderClassInfoTableCodeTypeCreate4_next);
        };
        bool CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this, char byTableCode, uint16_t wItemTableIndex, char* byClass)
        {
           return CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_user(_this, byTableCode, wItemTableIndex, byClass, CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_next);
        };
        bool CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this, char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass)
        {
           return CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_user(_this, byTableCode, wItemTableIndex, byClass, bySubClass, CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_next);
        };
        bool CUnmannedTraderClassInfoTableCodeTypeLoadXML10_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this, struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID)
        {
           return CUnmannedTraderClassInfoTableCodeTypeLoadXML10_user(_this, elemClass, kLogger, dwDivisionID, CUnmannedTraderClassInfoTableCodeTypeLoadXML10_next);
        };
        
        void CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_wrapper(struct CUnmannedTraderClassInfoTableCodeType* _this)
        {
           CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_user(_this, CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_next);
        };
        
        ::std::array<hook_record, 6> CUnmannedTraderClassInfoTableCodeType_functions = 
        {
            _hook_record {
                (LPVOID)0x140377040L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypector_CUnmannedTraderClassInfoTableCodeType2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoTableCodeType::*)(unsigned int))&CUnmannedTraderClassInfoTableCodeType::ctor_CUnmannedTraderClassInfoTableCodeType)
            },
            _hook_record {
                (LPVOID)0x140377980L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeCreate4_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeCreate4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypeCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderClassInfo*(CUnmannedTraderClassInfoTableCodeType::*)(unsigned int))&CUnmannedTraderClassInfoTableCodeType::Create)
            },
            _hook_record {
                (LPVOID)0x1403773a0L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypeGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableCodeType::*)(char, uint16_t, char*))&CUnmannedTraderClassInfoTableCodeType::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x140377a50L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypeGetGroupID8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableCodeType::*)(char, uint16_t, char*, char*))&CUnmannedTraderClassInfoTableCodeType::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x140377190L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeLoadXML10_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypeLoadXML10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypeLoadXML10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderClassInfoTableCodeType::*)(struct TiXmlElement*, struct CLogFile*, unsigned int))&CUnmannedTraderClassInfoTableCodeType::LoadXML)
            },
            _hook_record {
                (LPVOID)0x140377100L,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_user,
                (LPVOID *)&CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderClassInfoTableCodeTypedtor_CUnmannedTraderClassInfoTableCodeType14_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderClassInfoTableCodeType::*)())&CUnmannedTraderClassInfoTableCodeType::dtor_CUnmannedTraderClassInfoTableCodeType)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
