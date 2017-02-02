//
// Created by emperorbyl on 1/26/2017.
//

#include "Transaction.h"

void Transaction::computeProfitLoss()
{
    profitLoss = quantity * salePrice - moneyInvested;
}
void Transaction::computeInvested()
{
    moneyInvested = quantity * purchasePrice + purchaseFee + saleFee;
}
double Transaction::getPurchaseDate() { return purchaseDate; }
double Transaction::getQuantity() {return quantity;}
double Transaction::getPurchasePrice() { return purchasePrice; }
double Transaction::getPurchaseFee() { return purchaseFee; }
double Transaction::getSaleDate() { return saleDate; }
double Transaction::getSalePrice() {return salePrice;}
double Transaction::getSaleFee() { return saleFee; }
double Transaction::getMoneyInvested() {return moneyInvested;}
double Transaction::getProfitLoss() { return profitLoss;}
std::string Transaction::getSymbol() {return symbol;}
void Transaction::setSymbol(std::string newSymbol){symbol = newSymbol;}
void Transaction::setQuantity(double newQuantity){quantity = newQuantity;}
void Transaction::setPurchaseDate(double newDate){purchaseDate = newDate;}
void Transaction::setPurchasePrice(double newPrice){purchasePrice = newPrice;}
void Transaction::setPurchaseFee(double newFee){purchaseFee = newFee;}
void Transaction::setSalePrice(double newPrice){salePrice = newPrice;}
void Transaction::setSaleDate(double newDate){saleDate = newDate;}
void Transaction::setSaleFee(double newFee){saleFee = newFee;}