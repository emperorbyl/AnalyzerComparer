//
// Created by emperorbyl on 1/26/2017.
//

#ifndef HWK2_COMPARER_H
#define HWK2_COMPARER_H


#include "Report.h"

class Comparer {
private:
    double simDays;
    double totalProfitLoss;
    double profitLossDay;
public:
    double calculateProfitLossDay();
};


#endif //HWK2_COMPARER_H
