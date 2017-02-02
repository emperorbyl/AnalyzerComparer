//
// Created by emperorbyl on 1/26/2017.
//
#include <string>
#include <fstream>
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
    std::string symbol;
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
    std::string getSymbol();
    void setSymbol(std::string newSymbol);
    void setQuantity(double newQuantity);
    void setPurchaseDate(double newDate);
    void setPurchasePrice(double newPrice);
    void setPurchaseFee(double newFee);
    void setSalePrice(double newPrice);
    void setSaleDate(double newDate);
    void setSaleFee(double newFee);
};


#endif //HWK2_TRANSACTION_H
