#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SalesData
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    SalesData data1, data2;
    double price = 0.0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    auto totalCnt = data1.units_sold + data2.units_sold;
    auto totalRevenue = data1.revenue + data2.revenue;
    price = totalRevenue / totalCnt;
    cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " << price << endl;
    return 0;
}
