// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CashDbWorker.hpp>
#include <_param_cash_update.hpp>


START_ATF_NAMESPACE
    struct  CCashDbWorkerUS : CashDbWorker
    {
    public:
        CCashDbWorkerUS();
        void ctor_CCashDbWorkerUS();
        void GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize);
        ~CCashDbWorkerUS();
        void dtor_CCashDbWorkerUS();
    };
END_ATF_NAMESPACE
