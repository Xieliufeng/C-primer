#include <iostream>
#include <string>

struct SalesData
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    SalesData currData, valData;
    if (std::cin >> currData.bookNo >> currData.units_sold) {
        int sum = 1;
        while (std::cin >> valData.bookNo >> valData.units_sold) {
            if (currData.bookNo == valData.bookNo) {
                sum++;
            } else {
                std::cout << currData.bookNo << " occurs " << sum << " times" << std::endl;
                currData = valData;
                sum = 1;
            }
        } 
        std::cout << currData.bookNo << " occurs " << sum << " times" << std::endl;
    }
    return 0;
}