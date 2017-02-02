#include <iostream>
#include "Utils.h"
#include <vector>
#include "Transaction.h"
#include "Analyst.h"

void readAndWrite(std::ifstream& inputStream, std::ofstream outputFile)
{
    Analyst analyst;
    if (!inputStream.is_open())
    {
        std::cout << "The file is not open" << std::endl;
    } else if (inputStream.eof())
    {
        std::cout << "No data to read from file" << std::endl;
    } else
    {
        std::string line;
        std::getline(inputStream, line);
        analyst.setName(line);
        std::getline(inputStream, line);
        analyst.setInitials(line);
        std::getline(inputStream, line);
        analyst.setNumDays(atof(line));
        std::getline(inputStream, line);
        analyst.setSeed(atof(line));
        std::getline(inputStream, line);
        analyst.setPurchaseSales(atof(line));
        while (!inputStream.eof())
        {
            Transaction trans;
            std::string line = "";
            line = getNextPartOfLine(inputStream);
            trans.setSymbol(line);
            line = getNextPartOfLine(inputStream);
            trans.setQuantity(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setPurchaseDate(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setPurchasePrice(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setPurchaseFee(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setSaleDate(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setSalePrice(atof(line));
            line = getNextPartOfLine(inputStream);
            trans.setSaleFee(atof(line));
            analyst.report.writeHistory(trans);
        }
    }
    analyst.report.printInvestors(outputFile);
    analyst.report.printOverallPerformance(outputFile);
    analyst.report.printStockPerformance(outputFile);
}

int main(int argc, char* argv[]) {

    if(argc < 3)
        std::cout << "Not enough file input" << std::endl;
    else
    {
        std::string outputFileName = argv[1];
        std::ofstream outputFile(outputFileName);
        for (int i = 2; i < argc; i++)
        {
            std::string inputFileName = argv[i];
            std::ifstream inputStream(inputFileName);
            readAndWrite(inputStream, outputFile);
            inputStream.close();
        }
    }

    return 0;
}