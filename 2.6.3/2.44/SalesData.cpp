#include "SalesData.hpp"

int main()
{
    SalesData totalData, valData;
    double price = 0.0;
    if (std::cin >> totalData.bookNo >> totalData.units_sold >> price) {
        totalData.revenue = totalData.units_sold * price;
        while (std::cin >> valData.bookNo >> valData.units_sold >> price) {
            valData.revenue = valData.units_sold * price;
            if (totalData.bookNo == valData.bookNo) {
                totalData.units_sold += valData.units_sold;
                totalData.revenue += valData.revenue;
            } else {
                price = totalData.revenue / totalData.units_sold;
                std::cout << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << " " << price << std::endl;
                totalData.bookNo = valData.bookNo;
                totalData.units_sold = valData.units_sold;
                totalData.revenue = valData.revenue;
            }
        }
        price = totalData.revenue / totalData.units_sold;
        std::cout << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << " " << price << std::endl;
    } else {
        std::cout << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}