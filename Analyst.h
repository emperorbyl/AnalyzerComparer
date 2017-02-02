//
// Created by emperorbyl on 2/1/2017.
//

#ifndef HWK2_ANALYST_H
#define HWK2_ANALYST_H

#include <string>
#include "Report.h"
class Analyst {
private:

    std::string name;
    std::string initials;
    double numberOfDays;
    double seed;
    double purchaseSales;
public:
    Report report;
    void setNumDays(double numDays);
    void setSeed(double initSeed);
    void setInitials(std::string Initials);
    void setPurchaseSales(double amount);
    void setName(std::string newName);
    double getNumDays();
    double getSeed();
    std::string getInitials();
    double getPurchaseSales();
    std::string getName();


};


#endif //HWK2_ANALYST_H
