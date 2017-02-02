//
// Created by emperorbyl on 2/1/2017.
//

#include "Analyst.h"

void Analyst::setName(std::string newName){name = newName;}
void Analyst::setNumDays(double numDays){numberOfDays = numDays;}
void Analyst::setSeed(double initSeed){seed = initSeed;}
void Analyst::setInitials(std::string newInitials){initials = newInitials;}
void Analyst::setPurchaseSales(double amount) {purchaseSales = amount;}
double Analyst::getNumDays(){return numberOfDays;}
double Analyst::getSeed(){return seed;}
std::string Analyst::getInitials(){return initials;}
double Analyst::getPurchaseSales(){return purchaseSales;}
std::string Analyst::getName(){return name;}