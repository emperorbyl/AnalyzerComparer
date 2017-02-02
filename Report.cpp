//
// Created by emperorbyl on 1/26/2017.
//

#include <iostream>
#include "Report.h"
void Report::printInvestors(std::ofstream outputFile)
{
    outputFile << "Investors: " << std::endl;
    outputFile << ana.getName() << std::endl;
}
void Report::printOverallPerformance(std::ofstream outputFile)
{
    Comparer comp;
    outputFile << ana.getNumDays() << " " << std::to_string(ana.getSeed()) << " " << std::to_string(comp.calculateProfitLossDay()) << " " << std::to_string(getProfitLoss()/ ana.getNumDays()) << std::endl;
}
void Report::printStockPerformance(std::ofstream outputFile)
{
    double stockInvestmentDays = 0;
    stockInvestmentDays = (findMaxSaleTime() - findMinPurchaseTime())/ (24 * 60);
    outputFile << getProfitLoss() / stockInvestmentDays << std::endl;
}

void Report::writeHistory(Transaction transaction)
{
    std::string historySale = "";
    historySale += transaction.getSymbol() + ", ";
    historySale += std::to_string(transaction.getQuantity()) + ", ";
    historySale += std::to_string(transaction.getPurchaseDate()) + ", ";
    historySale += std::to_string(transaction.getPurchasePrice()) + ", ";
    historySale += std::to_string(transaction.getPurchaseFee()) + ", ";
    historySale += std::to_string(transaction.getSaleDate()) + ", ";
    historySale += std::to_string(transaction.getSalePrice()) + ", ";
    historySale += std::to_string(transaction.getSaleFee()) + "\n ";
    history.push_back(historySale);
}

// This method goes through the vector of history and finds the matching symbols. Then it counts to the 4th comma which will be the sale time.
double Report::findMaxSaleTime()
{
    std::string maxSaleTime ="";
    for(int i = 0; i < history.size() - 1; i++)
    {
        if(history[i][0] == history[i + 1][0] && history[i][1] == history[i + 1][1])
        {
            int counter = 0;
            int theSpot = 0;
            for(int j = 0; j < history[i].size(); j++)
            {
                if(history[i][j] == ',')
                    counter++;
                if(counter == 4)
                    theSpot = j;
            }
            for(int k = theSpot; k < 7; k++)
                maxSaleTime += history[i][k];
        }
    }
    return atof(maxSaleTime);
}

// This mehtod goes through the vector of history and finds mathcing symbols. Then it counts to the 2 comma which will be the purchase time.
double Report::findMinPurchaseTime() {
    std::string maxSaleTime = "";
    for (int i = 0; i < history.size() - 1; i++) {
        if (history[i][0] == history[i + 1][0] && history[i][1] == history[i + 1][1]) {
            int counter = 0;
            int theSpot = 0;
            for (int j = 0; j < history[i].size(); j++) {
                if (history[i][j] == ',')
                    counter++;
                if (counter == 2)
                    theSpot = j;
            }
            for (int k = theSpot; k < 7; k++)
                maxSaleTime += history[i][k];
        }
    }
    return atof(maxSaleTime);
}