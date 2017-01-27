//
// Created by emperorbyl on 1/26/2017.
//

#ifndef HWK2_TRANSACTION_H
#define HWK2_TRANSACTION_H


class Transaction {

private:
    double purchaseDate;
    double quantity;
    double purchasePrice;
    double purchaseFee;
    double saleDate;
    double salePrice;
    double saleFee;
    double moneyInvested;
    double profitLoss;
public:
    void computeProfitLoss();
    void computeInvested();
    double getPurchaseDate();
    double getQuantity();
    double getPurchasePrice();
    double getPurchaseFee();
    double getSaleDate();
    double getSalePrice();
    double getSaleFee();
    double getMoneyInvested();
    double getProfitLoss();

};


#endif //HWK2_TRANSACTION_H
