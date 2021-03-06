#include <CQuestMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CQuestMgrctor_CQuestMgr2_ptr CQuestMgrctor_CQuestMgr2_next(nullptr);
        Info::CQuestMgrctor_CQuestMgr2_clbk CQuestMgrctor_CQuestMgr2_user(nullptr);
        
        Info::CQuestMgrCalcStartNPCQuestCnt4_ptr CQuestMgrCalcStartNPCQuestCnt4_next(nullptr);
        Info::CQuestMgrCalcStartNPCQuestCnt4_clbk CQuestMgrCalcStartNPCQuestCnt4_user(nullptr);
        
        Info::CQuestMgrCanGiveupQuest6_ptr CQuestMgrCanGiveupQuest6_next(nullptr);
        Info::CQuestMgrCanGiveupQuest6_clbk CQuestMgrCanGiveupQuest6_user(nullptr);
        
        Info::CQuestMgrCheckFailCondition8_ptr CQuestMgrCheckFailCondition8_next(nullptr);
        Info::CQuestMgrCheckFailCondition8_clbk CQuestMgrCheckFailCondition8_user(nullptr);
        
        Info::CQuestMgrCheckFailLoop10_ptr CQuestMgrCheckFailLoop10_next(nullptr);
        Info::CQuestMgrCheckFailLoop10_clbk CQuestMgrCheckFailLoop10_user(nullptr);
        
        Info::CQuestMgrCheckLimLv12_ptr CQuestMgrCheckLimLv12_next(nullptr);
        Info::CQuestMgrCheckLimLv12_clbk CQuestMgrCheckLimLv12_user(nullptr);
        
        Info::CQuestMgrCheckNPCQuestList14_ptr CQuestMgrCheckNPCQuestList14_next(nullptr);
        Info::CQuestMgrCheckNPCQuestList14_clbk CQuestMgrCheckNPCQuestList14_user(nullptr);
        
        Info::CQuestMgrCheckNPCQuestStartable16_ptr CQuestMgrCheckNPCQuestStartable16_next(nullptr);
        Info::CQuestMgrCheckNPCQuestStartable16_clbk CQuestMgrCheckNPCQuestStartable16_user(nullptr);
        
        Info::CQuestMgrCheckQuestHappenEvent18_ptr CQuestMgrCheckQuestHappenEvent18_next(nullptr);
        Info::CQuestMgrCheckQuestHappenEvent18_clbk CQuestMgrCheckQuestHappenEvent18_user(nullptr);
        
        Info::CQuestMgrCheckReqAct20_ptr CQuestMgrCheckReqAct20_next(nullptr);
        Info::CQuestMgrCheckReqAct20_clbk CQuestMgrCheckReqAct20_user(nullptr);
        
        Info::CQuestMgrCheckRewardMasteryData22_ptr CQuestMgrCheckRewardMasteryData22_next(nullptr);
        Info::CQuestMgrCheckRewardMasteryData22_clbk CQuestMgrCheckRewardMasteryData22_user(nullptr);
        
        Info::CQuestMgrDeleteQuestData24_ptr CQuestMgrDeleteQuestData24_next(nullptr);
        Info::CQuestMgrDeleteQuestData24_clbk CQuestMgrDeleteQuestData24_user(nullptr);
        
        Info::CQuestMgrDeleteQuestItem26_ptr CQuestMgrDeleteQuestItem26_next(nullptr);
        Info::CQuestMgrDeleteQuestItem26_clbk CQuestMgrDeleteQuestItem26_user(nullptr);
        
        Info::CQuestMgrGetCountQuestType28_ptr CQuestMgrGetCountQuestType28_next(nullptr);
        Info::CQuestMgrGetCountQuestType28_clbk CQuestMgrGetCountQuestType28_user(nullptr);
        
        Info::CQuestMgrGetLastHappenEvent30_ptr CQuestMgrGetLastHappenEvent30_next(nullptr);
        Info::CQuestMgrGetLastHappenEvent30_clbk CQuestMgrGetLastHappenEvent30_user(nullptr);
        
        Info::CQuestMgrGetQuestFromEvent32_ptr CQuestMgrGetQuestFromEvent32_next(nullptr);
        Info::CQuestMgrGetQuestFromEvent32_clbk CQuestMgrGetQuestFromEvent32_user(nullptr);
        
        Info::CQuestMgrGiveItem34_ptr CQuestMgrGiveItem34_next(nullptr);
        Info::CQuestMgrGiveItem34_clbk CQuestMgrGiveItem34_user(nullptr);
        
        Info::CQuestMgrInitMgr36_ptr CQuestMgrInitMgr36_next(nullptr);
        Info::CQuestMgrInitMgr36_clbk CQuestMgrInitMgr36_user(nullptr);
        
        Info::CQuestMgrInsertNpcQuestHistory38_ptr CQuestMgrInsertNpcQuestHistory38_next(nullptr);
        Info::CQuestMgrInsertNpcQuestHistory38_clbk CQuestMgrInsertNpcQuestHistory38_user(nullptr);
        
        Info::CQuestMgrIsCompleteNpcQuest40_ptr CQuestMgrIsCompleteNpcQuest40_next(nullptr);
        Info::CQuestMgrIsCompleteNpcQuest40_clbk CQuestMgrIsCompleteNpcQuest40_user(nullptr);
        
        Info::CQuestMgrIsPossibleRepeatNpcQuest42_ptr CQuestMgrIsPossibleRepeatNpcQuest42_next(nullptr);
        Info::CQuestMgrIsPossibleRepeatNpcQuest42_clbk CQuestMgrIsPossibleRepeatNpcQuest42_user(nullptr);
        
        Info::CQuestMgrIsProcLinkNpcQuest44_ptr CQuestMgrIsProcLinkNpcQuest44_next(nullptr);
        Info::CQuestMgrIsProcLinkNpcQuest44_clbk CQuestMgrIsProcLinkNpcQuest44_user(nullptr);
        
        Info::CQuestMgrIsProcNpcQuest46_ptr CQuestMgrIsProcNpcQuest46_next(nullptr);
        Info::CQuestMgrIsProcNpcQuest46_clbk CQuestMgrIsProcNpcQuest46_user(nullptr);
        
        Info::CQuestMgrIsRecvedQuestByNPC48_ptr CQuestMgrIsRecvedQuestByNPC48_next(nullptr);
        Info::CQuestMgrIsRecvedQuestByNPC48_clbk CQuestMgrIsRecvedQuestByNPC48_user(nullptr);
        
        Info::CQuestMgrIsRecvedQuestByNPC50_ptr CQuestMgrIsRecvedQuestByNPC50_next(nullptr);
        Info::CQuestMgrIsRecvedQuestByNPC50_clbk CQuestMgrIsRecvedQuestByNPC50_user(nullptr);
        
        Info::CQuestMgrLoadQuestData52_ptr CQuestMgrLoadQuestData52_next(nullptr);
        Info::CQuestMgrLoadQuestData52_clbk CQuestMgrLoadQuestData52_user(nullptr);
        
        Info::CQuestMgrLoop54_ptr CQuestMgrLoop54_next(nullptr);
        Info::CQuestMgrLoop54_clbk CQuestMgrLoop54_user(nullptr);
        
        Info::CQuestMgrReturnItem56_ptr CQuestMgrReturnItem56_next(nullptr);
        Info::CQuestMgrReturnItem56_clbk CQuestMgrReturnItem56_user(nullptr);
        
        Info::CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_ptr CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_next(nullptr);
        Info::CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_clbk CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_user(nullptr);
        
        Info::CQuestMgrSendMsgToMaster_NoHaveGiveItem60_ptr CQuestMgrSendMsgToMaster_NoHaveGiveItem60_next(nullptr);
        Info::CQuestMgrSendMsgToMaster_NoHaveGiveItem60_clbk CQuestMgrSendMsgToMaster_NoHaveGiveItem60_user(nullptr);
        
        Info::CQuestMgrSendMsgToMaster_NoHaveReturnItem62_ptr CQuestMgrSendMsgToMaster_NoHaveReturnItem62_next(nullptr);
        Info::CQuestMgrSendMsgToMaster_NoHaveReturnItem62_clbk CQuestMgrSendMsgToMaster_NoHaveReturnItem62_user(nullptr);
        
        Info::CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_ptr CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_next(nullptr);
        Info::CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_clbk CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_user(nullptr);
        
        Info::CQuestMgr_CheckCondition66_ptr CQuestMgr_CheckCondition66_next(nullptr);
        Info::CQuestMgr_CheckCondition66_clbk CQuestMgr_CheckCondition66_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Class68_ptr CQuestMgr__CheckCond_Class68_next(nullptr);
        Info::CQuestMgr__CheckCond_Class68_clbk CQuestMgr__CheckCond_Class68_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Dalant70_ptr CQuestMgr__CheckCond_Dalant70_next(nullptr);
        Info::CQuestMgr__CheckCond_Dalant70_clbk CQuestMgr__CheckCond_Dalant70_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Dummy72_ptr CQuestMgr__CheckCond_Dummy72_next(nullptr);
        Info::CQuestMgr__CheckCond_Dummy72_clbk CQuestMgr__CheckCond_Dummy72_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Equip74_ptr CQuestMgr__CheckCond_Equip74_next(nullptr);
        Info::CQuestMgr__CheckCond_Equip74_clbk CQuestMgr__CheckCond_Equip74_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Gold76_ptr CQuestMgr__CheckCond_Gold76_next(nullptr);
        Info::CQuestMgr__CheckCond_Gold76_clbk CQuestMgr__CheckCond_Gold76_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Grade78_ptr CQuestMgr__CheckCond_Grade78_next(nullptr);
        Info::CQuestMgr__CheckCond_Grade78_clbk CQuestMgr__CheckCond_Grade78_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Guild80_ptr CQuestMgr__CheckCond_Guild80_next(nullptr);
        Info::CQuestMgr__CheckCond_Guild80_clbk CQuestMgr__CheckCond_Guild80_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Have82_ptr CQuestMgr__CheckCond_Have82_next(nullptr);
        Info::CQuestMgr__CheckCond_Have82_clbk CQuestMgr__CheckCond_Have82_user(nullptr);
        
        Info::CQuestMgr__CheckCond_LV84_ptr CQuestMgr__CheckCond_LV84_next(nullptr);
        Info::CQuestMgr__CheckCond_LV84_clbk CQuestMgr__CheckCond_LV84_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Mastery86_ptr CQuestMgr__CheckCond_Mastery86_next(nullptr);
        Info::CQuestMgr__CheckCond_Mastery86_clbk CQuestMgr__CheckCond_Mastery86_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Nation88_ptr CQuestMgr__CheckCond_Nation88_next(nullptr);
        Info::CQuestMgr__CheckCond_Nation88_clbk CQuestMgr__CheckCond_Nation88_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Party90_ptr CQuestMgr__CheckCond_Party90_next(nullptr);
        Info::CQuestMgr__CheckCond_Party90_clbk CQuestMgr__CheckCond_Party90_user(nullptr);
        
        Info::CQuestMgr__CheckCond_Race92_ptr CQuestMgr__CheckCond_Race92_next(nullptr);
        Info::CQuestMgr__CheckCond_Race92_clbk CQuestMgr__CheckCond_Race92_user(nullptr);
        
        
        Info::CQuestMgrdtor_CQuestMgr94_ptr CQuestMgrdtor_CQuestMgr94_next(nullptr);
        Info::CQuestMgrdtor_CQuestMgr94_clbk CQuestMgrdtor_CQuestMgr94_user(nullptr);
        
        
        void CQuestMgrctor_CQuestMgr2_wrapper(struct CQuestMgr* _this)
        {
           CQuestMgrctor_CQuestMgr2_user(_this, CQuestMgrctor_CQuestMgr2_next);
        };
        bool CQuestMgrCalcStartNPCQuestCnt4_wrapper(unsigned int* pdwCnt)
        {
           return CQuestMgrCalcStartNPCQuestCnt4_user(pdwCnt, CQuestMgrCalcStartNPCQuestCnt4_next);
        };
        bool CQuestMgrCanGiveupQuest6_wrapper(struct CQuestMgr* _this, char byQuestDBSlot)
        {
           return CQuestMgrCanGiveupQuest6_user(_this, byQuestDBSlot, CQuestMgrCanGiveupQuest6_next);
        };
        bool CQuestMgrCheckFailCondition8_wrapper(struct CQuestMgr* _this, char byQuestDBSlot, int nFailCond, char* pszCode)
        {
           return CQuestMgrCheckFailCondition8_user(_this, byQuestDBSlot, nFailCond, pszCode, CQuestMgrCheckFailCondition8_next);
        };
        void CQuestMgrCheckFailLoop10_wrapper(struct CQuestMgr* _this, int nFailCond, char* pszCode)
        {
           CQuestMgrCheckFailLoop10_user(_this, nFailCond, pszCode, CQuestMgrCheckFailLoop10_next);
        };
        struct _quest_fail_result* CQuestMgrCheckLimLv12_wrapper(struct CQuestMgr* _this, int nNewLv)
        {
           return CQuestMgrCheckLimLv12_user(_this, nNewLv, CQuestMgrCheckLimLv12_next);
        };
        void CQuestMgrCheckNPCQuestList14_wrapper(struct CQuestMgr* _this, char* pszEventCode, char byRaceCode, struct _NPCQuestIndexTempData* pQuestIndexData)
        {
           CQuestMgrCheckNPCQuestList14_user(_this, pszEventCode, byRaceCode, pQuestIndexData, CQuestMgrCheckNPCQuestList14_next);
        };
        struct _happen_event_cont* CQuestMgrCheckNPCQuestStartable16_wrapper(struct CQuestMgr* _this, char* pszEventCode, char byRaceCode, unsigned int dwQuestIndex, unsigned int dwHappenIndex)
        {
           return CQuestMgrCheckNPCQuestStartable16_user(_this, pszEventCode, byRaceCode, dwQuestIndex, dwHappenIndex, CQuestMgrCheckNPCQuestStartable16_next);
        };
        struct _happen_event_cont* CQuestMgrCheckQuestHappenEvent18_wrapper(struct CQuestMgr* _this, QUEST_HAPPEN HappenType, char* pszEventCode, char byRaceCode)
        {
           return CQuestMgrCheckQuestHappenEvent18_user(_this, HappenType, pszEventCode, byRaceCode, CQuestMgrCheckQuestHappenEvent18_next);
        };
        struct _quest_check_result* CQuestMgrCheckReqAct20_wrapper(struct CQuestMgr* _this, int nActCode, char* pszReqCode, uint16_t wActCount, bool bPartyState)
        {
           return CQuestMgrCheckReqAct20_user(_this, nActCode, pszReqCode, wActCount, bPartyState, CQuestMgrCheckReqAct20_next);
        };
        bool CQuestMgrCheckRewardMasteryData22_wrapper(int iInx, int iNth, struct _quest_reward_mastery* pData)
        {
           return CQuestMgrCheckRewardMasteryData22_user(iInx, iNth, pData, CQuestMgrCheckRewardMasteryData22_next);
        };
        void CQuestMgrDeleteQuestData24_wrapper(struct CQuestMgr* _this, char bySlot)
        {
           CQuestMgrDeleteQuestData24_user(_this, bySlot, CQuestMgrDeleteQuestData24_next);
        };
        bool CQuestMgrDeleteQuestItem26_wrapper(struct CQuestMgr* _this, char* pszItemCode, uint16_t wCount)
        {
           return CQuestMgrDeleteQuestItem26_user(_this, pszItemCode, wCount, CQuestMgrDeleteQuestItem26_next);
        };
        int CQuestMgrGetCountQuestType28_wrapper(struct CQuestMgr* _this, int nType)
        {
           return CQuestMgrGetCountQuestType28_user(_this, nType, CQuestMgrGetCountQuestType28_next);
        };
        struct _happen_event_cont* CQuestMgrGetLastHappenEvent30_wrapper(struct CQuestMgr* _this)
        {
           return CQuestMgrGetLastHappenEvent30_user(_this, CQuestMgrGetLastHappenEvent30_next);
        };
        struct _Quest_fld* CQuestMgrGetQuestFromEvent32_wrapper(struct CQuestMgr* _this, char bySelect)
        {
           return CQuestMgrGetQuestFromEvent32_user(_this, bySelect, CQuestMgrGetQuestFromEvent32_next);
        };
        bool CQuestMgrGiveItem34_wrapper(struct CQuestMgr* _this, char byQuestDBSlot, struct _action_node* pActionNode, bool bCheckOnly)
        {
           return CQuestMgrGiveItem34_user(_this, byQuestDBSlot, pActionNode, bCheckOnly, CQuestMgrGiveItem34_next);
        };
        void CQuestMgrInitMgr36_wrapper(struct CQuestMgr* _this, struct CPlayer* pMaster, struct _QUEST_DB_BASE* pQuestData)
        {
           CQuestMgrInitMgr36_user(_this, pMaster, pQuestData, CQuestMgrInitMgr36_next);
        };
        char CQuestMgrInsertNpcQuestHistory38_wrapper(struct CQuestMgr* _this, char* pszQuestCode, char byLevel, long double dRepeatTime)
        {
           return CQuestMgrInsertNpcQuestHistory38_user(_this, pszQuestCode, byLevel, dRepeatTime, CQuestMgrInsertNpcQuestHistory38_next);
        };
        bool CQuestMgrIsCompleteNpcQuest40_wrapper(struct CQuestMgr* _this, char* pszCode, int bQuestRepeat)
        {
           return CQuestMgrIsCompleteNpcQuest40_user(_this, pszCode, bQuestRepeat, CQuestMgrIsCompleteNpcQuest40_next);
        };
        bool CQuestMgrIsPossibleRepeatNpcQuest42_wrapper(struct CQuestMgr* _this, char* pszCode, int nLinkQuestGroupID)
        {
           return CQuestMgrIsPossibleRepeatNpcQuest42_user(_this, pszCode, nLinkQuestGroupID, CQuestMgrIsPossibleRepeatNpcQuest42_next);
        };
        bool CQuestMgrIsProcLinkNpcQuest44_wrapper(struct CQuestMgr* _this, char* pszCode, int nLinkQuestGroupID)
        {
           return CQuestMgrIsProcLinkNpcQuest44_user(_this, pszCode, nLinkQuestGroupID, CQuestMgrIsProcLinkNpcQuest44_next);
        };
        bool CQuestMgrIsProcNpcQuest46_wrapper(struct CQuestMgr* _this, char* pszCode)
        {
           return CQuestMgrIsProcNpcQuest46_user(_this, pszCode, CQuestMgrIsProcNpcQuest46_next);
        };
        bool CQuestMgrIsRecvedQuestByNPC48_wrapper(struct CQuestMgr* _this, char* pszNPCCode)
        {
           return CQuestMgrIsRecvedQuestByNPC48_user(_this, pszNPCCode, CQuestMgrIsRecvedQuestByNPC48_next);
        };
        bool CQuestMgrIsRecvedQuestByNPC50_wrapper(struct CQuestMgr* _this, int nEventIndex)
        {
           return CQuestMgrIsRecvedQuestByNPC50_user(_this, nEventIndex, CQuestMgrIsRecvedQuestByNPC50_next);
        };
        bool CQuestMgrLoadQuestData52_wrapper()
        {
           return CQuestMgrLoadQuestData52_user(CQuestMgrLoadQuestData52_next);
        };
        void CQuestMgrLoop54_wrapper(struct CQuestMgr* _this)
        {
           CQuestMgrLoop54_user(_this, CQuestMgrLoop54_next);
        };
        bool CQuestMgrReturnItem56_wrapper(struct CQuestMgr* _this, char* pszItemCode, int nEndReturnItemCnt, char byQuestDBSlot, bool bCheckOnly)
        {
           return CQuestMgrReturnItem56_user(_this, pszItemCode, nEndReturnItemCnt, byQuestDBSlot, bCheckOnly, CQuestMgrReturnItem56_next);
        };
        void CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_wrapper(struct CQuestMgr* _this, char byQuestDBSlot)
        {
           CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_user(_this, byQuestDBSlot, CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_next);
        };
        void CQuestMgrSendMsgToMaster_NoHaveGiveItem60_wrapper(struct CQuestMgr* _this, char byQuestDBSlot)
        {
           CQuestMgrSendMsgToMaster_NoHaveGiveItem60_user(_this, byQuestDBSlot, CQuestMgrSendMsgToMaster_NoHaveGiveItem60_next);
        };
        void CQuestMgrSendMsgToMaster_NoHaveReturnItem62_wrapper(struct CQuestMgr* _this, char byQuestDBSlot)
        {
           CQuestMgrSendMsgToMaster_NoHaveReturnItem62_user(_this, byQuestDBSlot, CQuestMgrSendMsgToMaster_NoHaveReturnItem62_next);
        };
        void CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_wrapper(struct CQuestMgr* _this, uint16_t wItemSerial, char byNum, char byQuestDBSlot)
        {
           CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_user(_this, wItemSerial, byNum, byQuestDBSlot, CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_next);
        };
        bool CQuestMgr_CheckCondition66_wrapper(struct CQuestMgr* _this, struct _happen_event_condition_node* pCond)
        {
           return CQuestMgr_CheckCondition66_user(_this, pCond, CQuestMgr_CheckCondition66_next);
        };
        bool CQuestMgr__CheckCond_Class68_wrapper(struct CQuestMgr* _this, char* pszClassCode)
        {
           return CQuestMgr__CheckCond_Class68_user(_this, pszClassCode, CQuestMgr__CheckCond_Class68_next);
        };
        bool CQuestMgr__CheckCond_Dalant70_wrapper(struct CQuestMgr* _this, char byCompare, int nDalant)
        {
           return CQuestMgr__CheckCond_Dalant70_user(_this, byCompare, nDalant, CQuestMgr__CheckCond_Dalant70_next);
        };
        bool CQuestMgr__CheckCond_Dummy72_wrapper(struct CQuestMgr* _this, int bInclude, char* pszDummyCode)
        {
           return CQuestMgr__CheckCond_Dummy72_user(_this, bInclude, pszDummyCode, CQuestMgr__CheckCond_Dummy72_next);
        };
        bool CQuestMgr__CheckCond_Equip74_wrapper(struct CQuestMgr* _this, char* pszItemCode)
        {
           return CQuestMgr__CheckCond_Equip74_user(_this, pszItemCode, CQuestMgr__CheckCond_Equip74_next);
        };
        bool CQuestMgr__CheckCond_Gold76_wrapper(struct CQuestMgr* _this, char byCompare, int nGold)
        {
           return CQuestMgr__CheckCond_Gold76_user(_this, byCompare, nGold, CQuestMgr__CheckCond_Gold76_next);
        };
        bool CQuestMgr__CheckCond_Grade78_wrapper(struct CQuestMgr* _this, char byCompare, int nGrade)
        {
           return CQuestMgr__CheckCond_Grade78_user(_this, byCompare, nGrade, CQuestMgr__CheckCond_Grade78_next);
        };
        bool CQuestMgr__CheckCond_Guild80_wrapper(struct CQuestMgr* _this, int belong)
        {
           return CQuestMgr__CheckCond_Guild80_user(_this, belong, CQuestMgr__CheckCond_Guild80_next);
        };
        bool CQuestMgr__CheckCond_Have82_wrapper(struct CQuestMgr* _this, int nAmonut, char* pszItemCode)
        {
           return CQuestMgr__CheckCond_Have82_user(_this, nAmonut, pszItemCode, CQuestMgr__CheckCond_Have82_next);
        };
        bool CQuestMgr__CheckCond_LV84_wrapper(struct CQuestMgr* _this, char byCompare, int nLv)
        {
           return CQuestMgr__CheckCond_LV84_user(_this, byCompare, nLv, CQuestMgr__CheckCond_LV84_next);
        };
        bool CQuestMgr__CheckCond_Mastery86_wrapper(struct CQuestMgr* _this, char byCompare, char* pszMasteryPack)
        {
           return CQuestMgr__CheckCond_Mastery86_user(_this, byCompare, pszMasteryPack, CQuestMgr__CheckCond_Mastery86_next);
        };
        bool CQuestMgr__CheckCond_Nation88_wrapper(struct CQuestMgr* _this, int belong)
        {
           return CQuestMgr__CheckCond_Nation88_user(_this, belong, CQuestMgr__CheckCond_Nation88_next);
        };
        bool CQuestMgr__CheckCond_Party90_wrapper(struct CQuestMgr* _this, int belong)
        {
           return CQuestMgr__CheckCond_Party90_user(_this, belong, CQuestMgr__CheckCond_Party90_next);
        };
        bool CQuestMgr__CheckCond_Race92_wrapper(struct CQuestMgr* _this, char* pszRaceSexFlag)
        {
           return CQuestMgr__CheckCond_Race92_user(_this, pszRaceSexFlag, CQuestMgr__CheckCond_Race92_next);
        };
        
        void CQuestMgrdtor_CQuestMgr94_wrapper(struct CQuestMgr* _this)
        {
           CQuestMgrdtor_CQuestMgr94_user(_this, CQuestMgrdtor_CQuestMgr94_next);
        };
        
        ::std::array<hook_record, 47> CQuestMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1402875a0L,
                (LPVOID *)&CQuestMgrctor_CQuestMgr2_user,
                (LPVOID *)&CQuestMgrctor_CQuestMgr2_next,
                (LPVOID)cast_pointer_function(CQuestMgrctor_CQuestMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)())&CQuestMgr::ctor_CQuestMgr)
            },
            _hook_record {
                (LPVOID)0x14028b6e0L,
                (LPVOID *)&CQuestMgrCalcStartNPCQuestCnt4_user,
                (LPVOID *)&CQuestMgrCalcStartNPCQuestCnt4_next,
                (LPVOID)cast_pointer_function(CQuestMgrCalcStartNPCQuestCnt4_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(unsigned int*))&CQuestMgr::CalcStartNPCQuestCnt)
            },
            _hook_record {
                (LPVOID)0x140289630L,
                (LPVOID *)&CQuestMgrCanGiveupQuest6_user,
                (LPVOID *)&CQuestMgrCanGiveupQuest6_next,
                (LPVOID)cast_pointer_function(CQuestMgrCanGiveupQuest6_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char))&CQuestMgr::CanGiveupQuest)
            },
            _hook_record {
                (LPVOID)0x14028a2a0L,
                (LPVOID *)&CQuestMgrCheckFailCondition8_user,
                (LPVOID *)&CQuestMgrCheckFailCondition8_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckFailCondition8_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, int, char*))&CQuestMgr::CheckFailCondition)
            },
            _hook_record {
                (LPVOID)0x14028a220L,
                (LPVOID *)&CQuestMgrCheckFailLoop10_user,
                (LPVOID *)&CQuestMgrCheckFailLoop10_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckFailLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(int, char*))&CQuestMgr::CheckFailLoop)
            },
            _hook_record {
                (LPVOID)0x140289510L,
                (LPVOID *)&CQuestMgrCheckLimLv12_user,
                (LPVOID *)&CQuestMgrCheckLimLv12_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckLimLv12_wrapper),
                (LPVOID)cast_pointer_function((struct _quest_fail_result*(CQuestMgr::*)(int))&CQuestMgr::CheckLimLv)
            },
            _hook_record {
                (LPVOID)0x140287ed0L,
                (LPVOID *)&CQuestMgrCheckNPCQuestList14_user,
                (LPVOID *)&CQuestMgrCheckNPCQuestList14_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckNPCQuestList14_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(char*, char, struct _NPCQuestIndexTempData*))&CQuestMgr::CheckNPCQuestList)
            },
            _hook_record {
                (LPVOID)0x1402881f0L,
                (LPVOID *)&CQuestMgrCheckNPCQuestStartable16_user,
                (LPVOID *)&CQuestMgrCheckNPCQuestStartable16_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckNPCQuestStartable16_wrapper),
                (LPVOID)cast_pointer_function((struct _happen_event_cont*(CQuestMgr::*)(char*, char, unsigned int, unsigned int))&CQuestMgr::CheckNPCQuestStartable)
            },
            _hook_record {
                (LPVOID)0x140287b60L,
                (LPVOID *)&CQuestMgrCheckQuestHappenEvent18_user,
                (LPVOID *)&CQuestMgrCheckQuestHappenEvent18_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckQuestHappenEvent18_wrapper),
                (LPVOID)cast_pointer_function((struct _happen_event_cont*(CQuestMgr::*)(QUEST_HAPPEN, char*, char))&CQuestMgr::CheckQuestHappenEvent)
            },
            _hook_record {
                (LPVOID)0x140289080L,
                (LPVOID *)&CQuestMgrCheckReqAct20_user,
                (LPVOID *)&CQuestMgrCheckReqAct20_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckReqAct20_wrapper),
                (LPVOID)cast_pointer_function((struct _quest_check_result*(CQuestMgr::*)(int, char*, uint16_t, bool))&CQuestMgr::CheckReqAct)
            },
            _hook_record {
                (LPVOID)0x140289bc0L,
                (LPVOID *)&CQuestMgrCheckRewardMasteryData22_user,
                (LPVOID *)&CQuestMgrCheckRewardMasteryData22_next,
                (LPVOID)cast_pointer_function(CQuestMgrCheckRewardMasteryData22_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(int, int, struct _quest_reward_mastery*))&CQuestMgr::CheckRewardMasteryData)
            },
            _hook_record {
                (LPVOID)0x140287af0L,
                (LPVOID *)&CQuestMgrDeleteQuestData24_user,
                (LPVOID *)&CQuestMgrDeleteQuestData24_next,
                (LPVOID)cast_pointer_function(CQuestMgrDeleteQuestData24_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(char))&CQuestMgr::DeleteQuestData)
            },
            _hook_record {
                (LPVOID)0x14028b040L,
                (LPVOID *)&CQuestMgrDeleteQuestItem26_user,
                (LPVOID *)&CQuestMgrDeleteQuestItem26_next,
                (LPVOID)cast_pointer_function(CQuestMgrDeleteQuestItem26_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*, uint16_t))&CQuestMgr::DeleteQuestItem)
            },
            _hook_record {
                (LPVOID)0x140287a50L,
                (LPVOID *)&CQuestMgrGetCountQuestType28_user,
                (LPVOID *)&CQuestMgrGetCountQuestType28_next,
                (LPVOID)cast_pointer_function(CQuestMgrGetCountQuestType28_wrapper),
                (LPVOID)cast_pointer_function((int(CQuestMgr::*)(int))&CQuestMgr::GetCountQuestType)
            },
            _hook_record {
                (LPVOID)0x1400cfc30L,
                (LPVOID *)&CQuestMgrGetLastHappenEvent30_user,
                (LPVOID *)&CQuestMgrGetLastHappenEvent30_next,
                (LPVOID)cast_pointer_function(CQuestMgrGetLastHappenEvent30_wrapper),
                (LPVOID)cast_pointer_function((struct _happen_event_cont*(CQuestMgr::*)())&CQuestMgr::GetLastHappenEvent)
            },
            _hook_record {
                (LPVOID)0x140288f10L,
                (LPVOID *)&CQuestMgrGetQuestFromEvent32_user,
                (LPVOID *)&CQuestMgrGetQuestFromEvent32_next,
                (LPVOID)cast_pointer_function(CQuestMgrGetQuestFromEvent32_wrapper),
                (LPVOID)cast_pointer_function((struct _Quest_fld*(CQuestMgr::*)(char))&CQuestMgr::GetQuestFromEvent)
            },
            _hook_record {
                (LPVOID)0x14028abe0L,
                (LPVOID *)&CQuestMgrGiveItem34_user,
                (LPVOID *)&CQuestMgrGiveItem34_next,
                (LPVOID)cast_pointer_function(CQuestMgrGiveItem34_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, struct _action_node*, bool))&CQuestMgr::GiveItem)
            },
            _hook_record {
                (LPVOID)0x140287820L,
                (LPVOID *)&CQuestMgrInitMgr36_user,
                (LPVOID *)&CQuestMgrInitMgr36_next,
                (LPVOID)cast_pointer_function(CQuestMgrInitMgr36_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(struct CPlayer*, struct _QUEST_DB_BASE*))&CQuestMgr::InitMgr)
            },
            _hook_record {
                (LPVOID)0x14028b320L,
                (LPVOID *)&CQuestMgrInsertNpcQuestHistory38_user,
                (LPVOID *)&CQuestMgrInsertNpcQuestHistory38_next,
                (LPVOID)cast_pointer_function(CQuestMgrInsertNpcQuestHistory38_wrapper),
                (LPVOID)cast_pointer_function((char(CQuestMgr::*)(char*, char, long double))&CQuestMgr::InsertNpcQuestHistory)
            },
            _hook_record {
                (LPVOID)0x14028a850L,
                (LPVOID *)&CQuestMgrIsCompleteNpcQuest40_user,
                (LPVOID *)&CQuestMgrIsCompleteNpcQuest40_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsCompleteNpcQuest40_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*, int))&CQuestMgr::IsCompleteNpcQuest)
            },
            _hook_record {
                (LPVOID)0x14028a900L,
                (LPVOID *)&CQuestMgrIsPossibleRepeatNpcQuest42_user,
                (LPVOID *)&CQuestMgrIsPossibleRepeatNpcQuest42_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsPossibleRepeatNpcQuest42_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*, int))&CQuestMgr::IsPossibleRepeatNpcQuest)
            },
            _hook_record {
                (LPVOID)0x14028aa30L,
                (LPVOID *)&CQuestMgrIsProcLinkNpcQuest44_user,
                (LPVOID *)&CQuestMgrIsProcLinkNpcQuest44_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsProcLinkNpcQuest44_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*, int))&CQuestMgr::IsProcLinkNpcQuest)
            },
            _hook_record {
                (LPVOID)0x14028ab00L,
                (LPVOID *)&CQuestMgrIsProcNpcQuest46_user,
                (LPVOID *)&CQuestMgrIsProcNpcQuest46_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsProcNpcQuest46_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*))&CQuestMgr::IsProcNpcQuest)
            },
            _hook_record {
                (LPVOID)0x14028b020L,
                (LPVOID *)&CQuestMgrIsRecvedQuestByNPC48_user,
                (LPVOID *)&CQuestMgrIsRecvedQuestByNPC48_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsRecvedQuestByNPC48_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*))&CQuestMgr::IsRecvedQuestByNPC)
            },
            _hook_record {
                (LPVOID)0x14028b000L,
                (LPVOID *)&CQuestMgrIsRecvedQuestByNPC50_user,
                (LPVOID *)&CQuestMgrIsRecvedQuestByNPC50_next,
                (LPVOID)cast_pointer_function(CQuestMgrIsRecvedQuestByNPC50_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int))&CQuestMgr::IsRecvedQuestByNPC)
            },
            _hook_record {
                (LPVOID)0x1402896f0L,
                (LPVOID *)&CQuestMgrLoadQuestData52_user,
                (LPVOID *)&CQuestMgrLoadQuestData52_next,
                (LPVOID)cast_pointer_function(CQuestMgrLoadQuestData52_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&CQuestMgr::LoadQuestData)
            },
            _hook_record {
                (LPVOID)0x1402878d0L,
                (LPVOID *)&CQuestMgrLoop54_user,
                (LPVOID *)&CQuestMgrLoop54_next,
                (LPVOID)cast_pointer_function(CQuestMgrLoop54_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)())&CQuestMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x14028abc0L,
                (LPVOID *)&CQuestMgrReturnItem56_user,
                (LPVOID *)&CQuestMgrReturnItem56_next,
                (LPVOID)cast_pointer_function(CQuestMgrReturnItem56_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*, int, char, bool))&CQuestMgr::ReturnItem)
            },
            _hook_record {
                (LPVOID)0x14028b530L,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_user,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_next,
                (LPVOID)cast_pointer_function(CQuestMgrSendMsgToMaster_NoCompleteQuestFromNPC58_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(char))&CQuestMgr::SendMsgToMaster_NoCompleteQuestFromNPC)
            },
            _hook_record {
                (LPVOID)0x14028b5c0L,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoHaveGiveItem60_user,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoHaveGiveItem60_next,
                (LPVOID)cast_pointer_function(CQuestMgrSendMsgToMaster_NoHaveGiveItem60_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(char))&CQuestMgr::SendMsgToMaster_NoHaveGiveItem)
            },
            _hook_record {
                (LPVOID)0x14028b650L,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoHaveReturnItem62_user,
                (LPVOID *)&CQuestMgrSendMsgToMaster_NoHaveReturnItem62_next,
                (LPVOID)cast_pointer_function(CQuestMgrSendMsgToMaster_NoHaveReturnItem62_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(char))&CQuestMgr::SendMsgToMaster_NoHaveReturnItem)
            },
            _hook_record {
                (LPVOID)0x14028b480L,
                (LPVOID *)&CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_user,
                (LPVOID *)&CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_next,
                (LPVOID)cast_pointer_function(CQuestMgrSendMsgToMaster_ReturnItemAfterQuest64_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)(uint16_t, char, char))&CQuestMgr::SendMsgToMaster_ReturnItemAfterQuest)
            },
            _hook_record {
                (LPVOID)0x1402883c0L,
                (LPVOID *)&CQuestMgr_CheckCondition66_user,
                (LPVOID *)&CQuestMgr_CheckCondition66_next,
                (LPVOID)cast_pointer_function(CQuestMgr_CheckCondition66_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(struct _happen_event_condition_node*))&CQuestMgr::_CheckCondition)
            },
            _hook_record {
                (LPVOID)0x140288e70L,
                (LPVOID *)&CQuestMgr__CheckCond_Class68_user,
                (LPVOID *)&CQuestMgr__CheckCond_Class68_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Class68_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*))&CQuestMgr::__CheckCond_Class)
            },
            _hook_record {
                (LPVOID)0x140288770L,
                (LPVOID *)&CQuestMgr__CheckCond_Dalant70_user,
                (LPVOID *)&CQuestMgr__CheckCond_Dalant70_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Dalant70_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, int))&CQuestMgr::__CheckCond_Dalant)
            },
            _hook_record {
                (LPVOID)0x140288df0L,
                (LPVOID *)&CQuestMgr__CheckCond_Dummy72_user,
                (LPVOID *)&CQuestMgr__CheckCond_Dummy72_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Dummy72_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int, char*))&CQuestMgr::__CheckCond_Dummy)
            },
            _hook_record {
                (LPVOID)0x140288a40L,
                (LPVOID *)&CQuestMgr__CheckCond_Equip74_user,
                (LPVOID *)&CQuestMgr__CheckCond_Equip74_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Equip74_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*))&CQuestMgr::__CheckCond_Equip)
            },
            _hook_record {
                (LPVOID)0x140288830L,
                (LPVOID *)&CQuestMgr__CheckCond_Gold76_user,
                (LPVOID *)&CQuestMgr__CheckCond_Gold76_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Gold76_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, int))&CQuestMgr::__CheckCond_Gold)
            },
            _hook_record {
                (LPVOID)0x1402886c0L,
                (LPVOID *)&CQuestMgr__CheckCond_Grade78_user,
                (LPVOID *)&CQuestMgr__CheckCond_Grade78_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Grade78_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, int))&CQuestMgr::__CheckCond_Grade)
            },
            _hook_record {
                (LPVOID)0x140288990L,
                (LPVOID *)&CQuestMgr__CheckCond_Guild80_user,
                (LPVOID *)&CQuestMgr__CheckCond_Guild80_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Guild80_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int))&CQuestMgr::__CheckCond_Guild)
            },
            _hook_record {
                (LPVOID)0x140288b30L,
                (LPVOID *)&CQuestMgr__CheckCond_Have82_user,
                (LPVOID *)&CQuestMgr__CheckCond_Have82_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Have82_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int, char*))&CQuestMgr::__CheckCond_Have)
            },
            _hook_record {
                (LPVOID)0x140288600L,
                (LPVOID *)&CQuestMgr__CheckCond_LV84_user,
                (LPVOID *)&CQuestMgr__CheckCond_LV84_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_LV84_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, int))&CQuestMgr::__CheckCond_LV)
            },
            _hook_record {
                (LPVOID)0x140288cb0L,
                (LPVOID *)&CQuestMgr__CheckCond_Mastery86_user,
                (LPVOID *)&CQuestMgr__CheckCond_Mastery86_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Mastery86_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char, char*))&CQuestMgr::__CheckCond_Mastery)
            },
            _hook_record {
                (LPVOID)0x140288a20L,
                (LPVOID *)&CQuestMgr__CheckCond_Nation88_user,
                (LPVOID *)&CQuestMgr__CheckCond_Nation88_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Nation88_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int))&CQuestMgr::__CheckCond_Nation)
            },
            _hook_record {
                (LPVOID)0x1402888f0L,
                (LPVOID *)&CQuestMgr__CheckCond_Party90_user,
                (LPVOID *)&CQuestMgr__CheckCond_Party90_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Party90_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(int))&CQuestMgr::__CheckCond_Party)
            },
            _hook_record {
                (LPVOID)0x140288e10L,
                (LPVOID *)&CQuestMgr__CheckCond_Race92_user,
                (LPVOID *)&CQuestMgr__CheckCond_Race92_next,
                (LPVOID)cast_pointer_function(CQuestMgr__CheckCond_Race92_wrapper),
                (LPVOID)cast_pointer_function((bool(CQuestMgr::*)(char*))&CQuestMgr::__CheckCond_Race)
            },
            _hook_record {
                (LPVOID)0x1402876d0L,
                (LPVOID *)&CQuestMgrdtor_CQuestMgr94_user,
                (LPVOID *)&CQuestMgrdtor_CQuestMgr94_next,
                (LPVOID)cast_pointer_function(CQuestMgrdtor_CQuestMgr94_wrapper),
                (LPVOID)cast_pointer_function((void(CQuestMgr::*)())&CQuestMgr::dtor_CQuestMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
