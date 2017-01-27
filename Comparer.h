//
// Created by emperorbyl on 1/26/2017.
//

#ifndef HWK2_COMPARER_H
#define HWK2_COMPARER_H


class Comparer {
private:
    double seedMoney;
    double simDays;
    double totalProfitLoss;
    double profitLossDay;
public:
    double calculateProfitLossDay();
    double getProfitLossDay();
};


#endif //HWK2_COMPARER_H
