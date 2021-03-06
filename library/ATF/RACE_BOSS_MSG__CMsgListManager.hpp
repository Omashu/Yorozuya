// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <RACE_BOSS_MSG__CMsg.hpp>
#include <RACE_BOSS_MSG__CMsgList.hpp>


START_ATF_NAMESPACE
    namespace RACE_BOSS_MSG
    {
        struct CMsgListManager
        {
            bool m_bEmpty;
            CMsgList *m_pkMsgList[3];
        public:
            CMsgListManager();
            void ctor_CMsgListManager();
            int Cancel(char ucRace, unsigned int dwMsgID, struct CMsg** pkMsg);
            void CleanUp();
            void CleanUpCancel(char ucRace, struct CMsg* pkMsg);
            char GetRemainCnt(char ucRace);
            struct CMsg* GetSendMsg(char* ucRace);
            bool Init();
            bool IsHaveBeenSave();
            bool Load(unsigned int dwCurTime);
            void Refresh();
            void Release(char ucRace, struct CMsg* pkMsg);
            void Save(char ucRace);
            void Save();
            int Send(char ucRace, unsigned int dwSerial, char* pwszName, char* pwszMsg, struct CMsg** pkSend, unsigned int dbWebSendDBID);
            ~CMsgListManager();
            void dtor_CMsgListManager();
        };
    }; // end namespace RACE_BOSS_MSG
END_ATF_NAMESPACE
