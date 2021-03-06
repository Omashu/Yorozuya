#include <CashItemRemoteStore.hpp>


START_ATF_NAMESPACE
    bool CashItemRemoteStore::Buy(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1402fe050L))(this, wSock, pPacket);
    };
    bool CashItemRemoteStore::BuyByCash(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1402fe0d0L))(this, wSock, pPacket);
    };
    bool CashItemRemoteStore::BuyByGold(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1402fecc0L))(this, wSock, pPacket);
    };
    uint16_t CashItemRemoteStore::BuyLimSale(char byTableCode, unsigned int dwIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CashItemRemoteStore*, char, unsigned int);
        return (org_ptr(0x1402fd950L))(this, byTableCode, dwIndex);
    };
    CashItemRemoteStore::CashItemRemoteStore()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f3800L))(this);
    };
    void CashItemRemoteStore::ctor_CashItemRemoteStore()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f3800L))(this);
    };
    bool CashItemRemoteStore::ChangeDiscountEventTime()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f7b10L))(this);
    };
    bool CashItemRemoteStore::ChangeEventTime(char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402fd050L))(this, byEventType);
    };
    void CashItemRemoteStore::Change_Conditional_Event_Status()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fbf00L))(this);
    };
    bool CashItemRemoteStore::CheatBuy(uint16_t wSock, char* szItemCode, int nNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*, int);
        return (org_ptr(0x1402f5b50L))(this, wSock, szItemCode, nNum);
    };
    bool CashItemRemoteStore::CheatLoadCashAmount(uint16_t wSock, int nNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, int);
        return (org_ptr(0x1402f5990L))(this, wSock, nNum);
    };
    int CashItemRemoteStore::CheckCouponType(struct _STORAGE_POS_INDIV* pCoupon, struct CPlayer* pOne, char byCouponNum)
    {
        using org_ptr = int (WINAPIV*)(struct CashItemRemoteStore*, struct _STORAGE_POS_INDIV*, struct CPlayer*, char);
        return (org_ptr(0x1402f52a0L))(this, pCoupon, pOne, byCouponNum);
    };
    bool CashItemRemoteStore::Check_CashEvent_INI(char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402f8770L))(this, byEventType);
    };
    void CashItemRemoteStore::Check_CashEvent_Status(char byEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char);
        (org_ptr(0x1402f93c0L))(this, byEventType);
    };
    void CashItemRemoteStore::Check_Conditional_Event_INI()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fc480L))(this);
    };
    void CashItemRemoteStore::Check_Conditional_Event_Status()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fc060L))(this);
    };
    void CashItemRemoteStore::Check_Grosssales(unsigned int dwTotalSellCash)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, unsigned int);
        (org_ptr(0x1402fb6d0L))(this, dwTotalSellCash);
    };
    void CashItemRemoteStore::Check_Loaded_Event_Status(char byEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char);
        (org_ptr(0x1402f8140L))(this, byEventType);
    };
    void CashItemRemoteStore::Check_Total_Selling()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fb640L))(this);
    };
    struct _CashShop_fld* CashItemRemoteStore::FindCashRec(int nTbl, int nIdx)
    {
        using org_ptr = struct _CashShop_fld* (WINAPIV*)(int, int);
        return (org_ptr(0x1402f48f0L))(nTbl, nIdx);
    };
    void CashItemRemoteStore::GetEvnetTime(struct _cash_event_time* pETime, int itime)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_event_time*, int);
        (org_ptr(0x1402fba00L))(this, pETime, itime);
    };
    char CashItemRemoteStore::GetLimDiscout()
    {
        using org_ptr = char (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402fd930L))(this);
    };
    int CashItemRemoteStore::GetRemainNumOfGood(char* strCode)
    {
        using org_ptr = int (WINAPIV*)(struct CashItemRemoteStore*, char*);
        return (org_ptr(0x1402f5d60L))(this, strCode);
    };
    int CashItemRemoteStore::GetRemainNumOfGood(uint16_t wStoreIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CashItemRemoteStore*, uint16_t);
        return (org_ptr(0x1402f5cd0L))(this, wStoreIndex);
    };
    char CashItemRemoteStore::GetSetDiscout(char bySetKind)
    {
        using org_ptr = char (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402fb0a0L))(this, bySetKind);
    };
    char CashItemRemoteStore::Get_CashEvent_Status(char byEventType)
    {
        using org_ptr = char (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402fac70L))(this, byEventType);
    };
    void CashItemRemoteStore::Get_Conditional_Event_Name(char byEventType, char* szEventName)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, char*);
        (org_ptr(0x1402fc8a0L))(this, byEventType, szEventName);
    };
    char CashItemRemoteStore::Get_Conditional_Event_Status()
    {
        using org_ptr = char (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402fc460L))(this);
    };
    bool CashItemRemoteStore::GoodsList(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1402f5220L))(this, wSock, pPacket);
    };
    bool CashItemRemoteStore::GoodsListBuyByCash(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1403009c0L))(this, wSock, pPacket);
    };
    bool CashItemRemoteStore::GoodsListBuyByGold(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x140300c60L))(this, wSock, pPacket);
    };
    void CashItemRemoteStore::Inform_CashEvent(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, uint16_t);
        (org_ptr(0x1402fafc0L))(this, wIndex);
    };
    void CashItemRemoteStore::Inform_CashEvent_Status_All(char byEventType, char byStatus, struct _cash_event_ini* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, char, struct _cash_event_ini*);
        (org_ptr(0x1402fadc0L))(this, byEventType, byStatus, pIni);
    };
    void CashItemRemoteStore::Inform_ConditionalEvent(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, uint16_t);
        (org_ptr(0x1402fc970L))(this, wIndex);
    };
    void CashItemRemoteStore::Inform_ConditionalEvent_Status_All(char byEventType, char byStatus, char* pszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, char, char*);
        (org_ptr(0x1402fc640L))(this, byEventType, byStatus, pszMsg);
    };
    bool CashItemRemoteStore::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f4ef0L))(this);
    };
    struct CashItemRemoteStore* CashItemRemoteStore::Instance()
    {
        using org_ptr = struct CashItemRemoteStore* (WINAPIV*)();
        return (org_ptr(0x140079810L))();
    };
    bool CashItemRemoteStore::IsBuyCashItemByGold()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1400f0860L))(this);
    };
    bool CashItemRemoteStore::IsEventTime(char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402faca0L))(this, byEventType);
    };
    bool CashItemRemoteStore::IsUsableCoupon(struct _request_csi_buy_clzo* pBuyList, struct _STORAGE_POS_INDIV pCoupon, struct CPlayer* pOne, bool* bCheck)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, struct _request_csi_buy_clzo*, struct _STORAGE_POS_INDIV, struct CPlayer*, bool*);
        return (org_ptr(0x1402f57a0L))(this, pBuyList, pCoupon, pOne, bCheck);
    };
    bool CashItemRemoteStore::LimitedSale_check_count(char byTableCode, unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char, unsigned int);
        return (org_ptr(0x1402fdd90L))(this, byTableCode, dwIndex);
    };
    bool CashItemRemoteStore::LoadBuyCashMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f4d90L))(this);
    };
    bool CashItemRemoteStore::LoadNationalPrice(struct CRecordData* krecPrice)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, struct CRecordData*);
        return (org_ptr(0x1402f4c90L))(this, krecPrice);
    };
    void CashItemRemoteStore::Load_Cash_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f7f10L))(this);
    };
    void CashItemRemoteStore::Load_Conditional_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fc330L))(this);
    };
    void CashItemRemoteStore::Load_Event_INI(struct _cash_event_ini* pIni, struct _FILETIME* pft, char* pEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_event_ini*, struct _FILETIME*, char*);
        (org_ptr(0x1402f99b0L))(this, pIni, pft, pEventType);
    };
    void CashItemRemoteStore::Load_LimitedSale_Event_INI(struct _cash_event_ini* pIni, struct _FILETIME* pft, char* pEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_event_ini*, struct _FILETIME*, char*);
        (org_ptr(0x1402fd4a0L))(this, pIni, pft, pEventType);
    };
    void CashItemRemoteStore::Loop_Cash_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f7e80L))(this);
    };
    void CashItemRemoteStore::Loop_Check_Total_Selling()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fb620L))(this);
    };
    void CashItemRemoteStore::Loop_ContEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fb5d0L))(this);
    };
    void CashItemRemoteStore::Loop_TatalCashEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fb560L))(this);
    };
    bool CashItemRemoteStore::Sell(uint16_t wSock, char* pPacket)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, uint16_t, char*);
        return (org_ptr(0x1402f5cb0L))(this, wSock, pPacket);
    };
    bool CashItemRemoteStore::SetNextDiscountEventTime()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f7900L))(this);
    };
    bool CashItemRemoteStore::SetNextEventTime(char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char);
        return (org_ptr(0x1402fcd30L))(this, byEventType);
    };
    void CashItemRemoteStore::Set_CashEvent_Status(char byEventType, char byStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, char);
        (org_ptr(0x1402fab90L))(this, byEventType, byStatus);
    };
    void CashItemRemoteStore::Set_Conditional_Evnet_Status(char byStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char);
        (org_ptr(0x1402fc3e0L))(this, byStatus);
    };
    void CashItemRemoteStore::Set_DB_LimitedSale_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fdad0L))(this);
    };
    void CashItemRemoteStore::Set_FROMDB_LimitedSale_Event(struct _db_cash_limited_sale* Sheet)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _db_cash_limited_sale*);
        (org_ptr(0x1402fde70L))(this, Sheet);
    };
    void CashItemRemoteStore::Set_LimitedSale_DCK(char byEventType, char byDCK)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, char);
        (org_ptr(0x1402fd750L))(this, byEventType, byDCK);
    };
    void CashItemRemoteStore::Set_LimitedSale_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402fdfd0L))(this);
    };
    void CashItemRemoteStore::Set_LimitedSale_Event_Ini(struct _cash_event_ini* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_event_ini*);
        (org_ptr(0x1402fd780L))(this, pIni);
    };
    void CashItemRemoteStore::Set_LimitedSale_count(char byTableCode, unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, unsigned int);
        (org_ptr(0x1402fda00L))(this, byTableCode, dwIndex);
    };
    void CashItemRemoteStore::Update_INI(struct _cash_event_ini* pNewIni, char byEventType)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_event_ini*, char);
        (org_ptr(0x1402f8c40L))(this, pNewIni, byEventType);
    };
    bool CashItemRemoteStore::UseDiscountCoupon(struct _param_cash_update* pBuyList, struct _STORAGE_POS_INDIV pCoupon, struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, struct _param_cash_update*, struct _STORAGE_POS_INDIV, struct CPlayer*);
        return (org_ptr(0x1402f54b0L))(this, pBuyList, pCoupon, pOne);
    };
    bool CashItemRemoteStore::_InitLoggers()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f3cf0L))(this);
    };
    bool CashItemRemoteStore::_MakeLinkTable(char* szMsg, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, char*, int);
        return (org_ptr(0x1402f4650L))(this, szMsg, nSize);
    };
    bool CashItemRemoteStore::_ReadGoods()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f4a90L))(this);
    };
    bool CashItemRemoteStore::__CheckGoods(struct CRecordData* krecPrice)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, struct CRecordData*);
        return (org_ptr(0x1402f4150L))(this, krecPrice);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_buy_single_item(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, bool* bCouponUse, struct _result_csi_buy_zocl* Send)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, bool*, struct _result_csi_buy_zocl*);
        return (org_ptr(0x1402ff340L))(this, pOne, pRecv, pSrc, pSheet, bCouponUse, Send);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_buy_single_item_additional_process(struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _result_csi_buy_zocl* Send)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _result_csi_buy_zocl*);
        return (org_ptr(0x140300110L))(this, pOne, pSrc, pSheet, Send);
    };
    unsigned int CashItemRemoteStore::_buybygold_buy_single_item_calc_price(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, bool* bCouponUseCheck, struct _result_csi_buy_zocl* Send, unsigned int* dwDiscount)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, bool*, struct _result_csi_buy_zocl*, unsigned int*);
        return (org_ptr(0x1402ff8a0L))(this, pOne, pRecv, pSrc, pSheet, pCsFld, bCouponUseCheck, Send, dwDiscount);
    };
    unsigned int CashItemRemoteStore::_buybygold_buy_single_item_calc_price_coupon(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, char byOverlapNum, int nCsPrice, bool* bCouponUseCheck, unsigned int* dwDiscount)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, char, int, bool*, unsigned int*);
        return (org_ptr(0x1402ffa70L))(this, pOne, pRecv, byOverlapNum, nCsPrice, bCouponUseCheck, dwDiscount);
    };
    unsigned int CashItemRemoteStore::_buybygold_buy_single_item_calc_price_discount(struct _CashShop_fld* pCsFld, char byOverlapNum)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CashItemRemoteStore*, struct _CashShop_fld*, char);
        return (org_ptr(0x1402ffce0L))(this, pCsFld, byOverlapNum);
    };
    unsigned int CashItemRemoteStore::_buybygold_buy_single_item_calc_price_limitsale(int nCsPrice, char byOverlapNum)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CashItemRemoteStore*, int, char);
        return (org_ptr(0x1402ffe60L))(this, nCsPrice, byOverlapNum);
    };
    unsigned int CashItemRemoteStore::_buybygold_buy_single_item_calc_price_one_n_one(char bySetKind, int nCsPrice, char byOverlapNum)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CashItemRemoteStore*, char, int, char);
        return (org_ptr(0x1402ffdb0L))(this, bySetKind, nCsPrice, byOverlapNum);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_buy_single_item_check_item(struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld** pCsFld)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld**);
        return (org_ptr(0x1402ff5c0L))(this, pOne, pSrc, pSheet, pCsFld);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_buy_single_item_give_item(struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _STORAGE_LIST::_db_con* GiveItem)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402ffef0L))(this, pOne, pSrc, GiveItem);
    };
    void CashItemRemoteStore::_buybygold_buy_single_item_proc_complete(struct CPlayer* pOne, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, struct _STORAGE_LIST::_db_con* GiveItem, struct _result_csi_buy_zocl* Send, unsigned int dwPrice, unsigned int dwDiscountRate, bool* bCouponUseCheck, bool* bCouponUse)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, struct _STORAGE_LIST::_db_con*, struct _result_csi_buy_zocl*, unsigned int, unsigned int, bool*, bool*);
        (org_ptr(0x1403004c0L))(this, pOne, pSrc, pSheet, pCsFld, GiveItem, Send, dwPrice, dwDiscountRate, bCouponUseCheck, bCouponUse);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_buy_single_item_proc_price(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, struct _CashShop_fld* pCsFld, bool* bCouponUseCheck, struct _result_csi_buy_zocl* Send, unsigned int* dwPrice, unsigned int* dwDiscountRate)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, struct _CashShop_fld*, bool*, struct _result_csi_buy_zocl*, unsigned int*, unsigned int*);
        return (org_ptr(0x1402ff7c0L))(this, pOne, pRecv, pSrc, pSheet, pCsFld, bCouponUseCheck, Send, dwPrice, dwDiscountRate);
    };
    void CashItemRemoteStore::_buybygold_buy_single_item_setbuydblog(struct _param_cashitem_dblog* pSheet, struct _STORAGE_LIST::_db_con* GiveItem, unsigned int dwPrice, unsigned int dwDiscountRate)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _param_cashitem_dblog*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int);
        (org_ptr(0x140300760L))(this, pSheet, GiveItem, dwPrice, dwDiscountRate);
    };
    void CashItemRemoteStore::_buybygold_buy_single_item_setsenddata(struct _STORAGE_LIST::_db_con* GiveItem, struct _result_csi_buy_zocl* Send)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _STORAGE_LIST::_db_con*, struct _result_csi_buy_zocl*);
        (org_ptr(0x140300650L))(this, GiveItem, Send);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_check_coupon(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _param_cashitem_dblog* pSheet)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, struct _param_cashitem_dblog*);
        return (org_ptr(0x1402ff190L))(this, pOne, pRecv, pSheet);
    };
    CS_RCODE CashItemRemoteStore::_buybygold_check_valid(struct CPlayer* pOne, struct _request_csi_buy_clzo* pRecv, struct _param_cashitem_dblog* pSheet)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _request_csi_buy_clzo*, struct _param_cashitem_dblog*);
        return (org_ptr(0x1402fefa0L))(this, pOne, pRecv, pSheet);
    };
    void CashItemRemoteStore::_buybygold_complete(struct CPlayer* pOne, struct _result_csi_buy_zocl* Send, struct _request_csi_buy_clzo* pRecv, struct _request_csi_buy_clzo::__item* pSrc, struct _param_cashitem_dblog* pSheet, bool bCouponUse)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _result_csi_buy_zocl*, struct _request_csi_buy_clzo*, struct _request_csi_buy_clzo::__item*, struct _param_cashitem_dblog*, bool);
        (org_ptr(0x140300840L))(this, pOne, Send, pRecv, pSrc, pSheet, bCouponUse);
    };
    void CashItemRemoteStore::_buybygold_set_cashitem_dblog_sheet(struct CPlayer* pOne, struct _param_cashitem_dblog* pSheet)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct CPlayer*, struct _param_cashitem_dblog*);
        (org_ptr(0x1402ff0e0L))(this, pOne, pSheet);
    };
    CS_RCODE CashItemRemoteStore::_check_buyitem(char byRaceSex, struct _request_csi_buy_clzo::__item* pCsItem, struct _CashShop_fld* pFld)
    {
        using org_ptr = CS_RCODE (WINAPIV*)(struct CashItemRemoteStore*, char, struct _request_csi_buy_clzo::__item*, struct _CashShop_fld*);
        return (org_ptr(0x1402f4fa0L))(this, byRaceSex, pCsItem, pFld);
    };
    void CashItemRemoteStore::check_cash_discount_ini()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f6970L))(this);
    };
    void CashItemRemoteStore::check_cash_discount_status()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f6c30L))(this);
    };
    void CashItemRemoteStore::check_loaded_cde_status()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f5f30L))(this);
    };
    void CashItemRemoteStore::force_endup_cash_discount_event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f7850L))(this);
    };
    char CashItemRemoteStore::get_cde_status()
    {
        using org_ptr = char (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f7380L))(this);
    };
    void CashItemRemoteStore::inform_cashdiscount_event(uint16_t widx)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, uint16_t);
        (org_ptr(0x1402f6f60L))(this, widx);
    };
    void CashItemRemoteStore::inform_cashdiscount_status_all(char byType, struct _cash_discount_ini_* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char, struct _cash_discount_ini_*);
        (org_ptr(0x1402f6fc0L))(this, byType, pIni);
    };
    bool CashItemRemoteStore::isConEventTime()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402fbb80L))(this);
    };
    bool CashItemRemoteStore::is_cde_time()
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*);
        return (org_ptr(0x1402f7070L))(this);
    };
    void CashItemRemoteStore::load_cash_discount_event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f5e30L))(this);
    };
    void CashItemRemoteStore::load_cde_ini(struct _cash_discount_ini_* pIni, struct _FILETIME* pft)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_discount_ini_*, struct _FILETIME*);
        (org_ptr(0x1402f60c0L))(this, pIni, pft);
    };
    void CashItemRemoteStore::load_con_event_ini(struct _con_event_ini* pIni, struct _FILETIME* pft)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _con_event_ini*, struct _FILETIME*);
        (org_ptr(0x1402fbc10L))(this, pIni, pft);
    };
    void CashItemRemoteStore::log_about_cash_event(char* szLoadInfo, struct _cash_discount_ini_* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char*, struct _cash_discount_ini_*);
        (org_ptr(0x1402f73a0L))(this, szLoadInfo, pIni);
    };
    void CashItemRemoteStore::loop_cash_discount_event()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f6920L))(this);
    };
    void CashItemRemoteStore::set_cde_status(char byStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, char);
        (org_ptr(0x1402f72d0L))(this, byStatus);
    };
    bool CashItemRemoteStore::start_cashevent(int iBegin_TT, int iB30_TT, int iB5_TT, int iEnd_TT, char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, int, int, int, int, char);
        return (org_ptr(0x1402fb0d0L))(this, iBegin_TT, iB30_TT, iB5_TT, iEnd_TT, byEventType);
    };
    bool CashItemRemoteStore::start_cde(int iBegin_TT, int iB30_TT, int iB5_TT, int iEnd_TT)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, int, int, int, int);
        return (org_ptr(0x1402f7590L))(this, iBegin_TT, iB30_TT, iB5_TT, iEnd_TT);
    };
    bool CashItemRemoteStore::start_conevent(int iBegin_TT, int iEnd_TT, char byEventType)
    {
        using org_ptr = bool (WINAPIV*)(struct CashItemRemoteStore*, int, int, char);
        return (org_ptr(0x1402fcae0L))(this, iBegin_TT, iEnd_TT, byEventType);
    };
    void CashItemRemoteStore::update_ini(struct _cash_discount_ini_* pNewIni)
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*, struct _cash_discount_ini_*);
        (org_ptr(0x1402f7160L))(this, pNewIni);
    };
    CashItemRemoteStore::~CashItemRemoteStore()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f3a90L))(this);
    };
    void CashItemRemoteStore::dtor_CashItemRemoteStore()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore*);
        (org_ptr(0x1402f3a90L))(this);
    };
    
    
    CashItemRemoteStore::_remain_num_of_good::_remain_num_of_good()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore::_remain_num_of_good*);
        (org_ptr(0x1403047c0L))(this);
    };
    void CashItemRemoteStore::_remain_num_of_good::ctor__remain_num_of_good()
    {
        using org_ptr = void (WINAPIV*)(struct CashItemRemoteStore::_remain_num_of_good*);
        (org_ptr(0x1403047c0L))(this);
    };
END_ATF_NAMESPACE
