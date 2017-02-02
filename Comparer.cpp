//
// Created by emperorbyl on 1/26/2017.
//
#include "Report.h"
#include "Comparer.h"

double Comparer::calculateProfitLossDay()
{
    profitLossDay = totalProfitLoss/simDays;
    return profitLossDay;
}
