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
    SalesData currData, valData;
    if (cin >> currData.bookNo >> currData.units_sold) {
        int sum = 1;
        while (cin >> valData.bookNo >> valData.units_sold) {
            if (currData.bookNo == valData.bookNo) {
                sum++;
            } else {
                cout << currData.bookNo << " occurs " << sum << " times" << endl;
                currData = valData;
                sum = 1;
            }
        } 
        cout << currData.bookNo << " occurs " << sum << " times" << endl;
    }
    return 0;
}