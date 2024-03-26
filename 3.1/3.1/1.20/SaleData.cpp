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
    SalesData data;
    double price = 0.0;
    cin >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;
    cout << data.bookNo << " " << data.units_sold << " " << data.revenue << " " << price << endl;
    return 0;
}
