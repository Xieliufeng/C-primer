#include <iostream>
#include <string>

struct SalesData
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    SalesData data1, data2, data3, data4;
    double price = 0.0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    std::cin >> data3.bookNo >> data3.units_sold >> price;
    data3.revenue = data3.units_sold * price;
    std::cin >> data4.bookNo >> data4.units_sold >> price;
    data4.revenue = data4.units_sold * price;
    auto totalCnt = data1.units_sold + data2.units_sold + data3.units_sold + data4.units_sold;
    auto totalRevenue = data1.revenue + data2.revenue + data3.revenue + data4.revenue;
    price = totalRevenue / totalCnt;
    std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " << price << std::endl;
    return 0;
}
