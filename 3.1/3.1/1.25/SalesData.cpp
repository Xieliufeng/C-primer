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

int main()
{
    SalesData totalData, valData;
    double price = 0.0;
    if (cin >> totalData.bookNo >> totalData.units_sold >> price) {
        totalData.revenue = totalData.units_sold * price;
        while (cin >> valData.bookNo >> valData.units_sold >> price) {
            valData.revenue = valData.units_sold * price;
            if (totalData.bookNo == valData.bookNo) {
                totalData.units_sold += valData.units_sold;
                totalData.revenue += valData.revenue;
            } else {
                price = totalData.revenue / totalData.units_sold;
                cout << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << " " << price << endl;
                totalData.bookNo = valData.bookNo;
                totalData.units_sold = valData.units_sold;
                totalData.revenue = valData.revenue;
            }
        }
        price = totalData.revenue / totalData.units_sold;
        cout << totalData.bookNo << " " << totalData.units_sold << " " << totalData.revenue << " " << price << endl;
    } else {
        cout << "No data?!" << endl;
        return -1;
    }
    return 0;
}