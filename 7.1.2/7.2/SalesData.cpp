#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct SalesData
{
    string isbn() const { return bookNo;}
    SalesData & combine(const SalesData &);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

SalesData & SalesData::combine(const SalesData &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

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