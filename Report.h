//
// Created by emperorbyl on 1/26/2017.
//
#include <string>
#include <vector>
#include "Comparer.h"
#include "Transaction.h"
#include "Analyst.h"



class Report : Transaction{
private:
    std::vector<std::string> history;
    Analyst ana;
public:
    void printInvestors(std::ofstream outputFile);
    void printOverallPerformance(std::ofstream outputFile);
    void printStockPerformance(std::ofstream outputFile);
    void writeHistory(Transaction trans);
    double findMaxSaleTime();
    double findMinPurchaseTime();
};


