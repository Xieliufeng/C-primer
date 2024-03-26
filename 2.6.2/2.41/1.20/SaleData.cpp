#include <iostream>
#include <string>

struct SalesData
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    SalesData data;
    double price = 0.0;
    std::cin >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;
    std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << " " << price << std::endl;
    return 0;
}
