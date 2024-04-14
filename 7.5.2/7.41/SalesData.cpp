#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class SalesData;

istream & read(istream &is, SalesData &item);

class SalesData
{
friend istream & read(istream &is, SalesData &item);
friend ostream & print(ostream &os, const SalesData &item);
friend SalesData add(SalesData &lhs, SalesData &rhs);
public:
    SalesData(const string &s, const unsigned &n, const double &p) :
              bookNo(s), units_sold(n), revenue(n * p) { cout << "SalesData_3" << endl; }
    SalesData() : SalesData("", 0 ,0.0) { cout << "SalesData_0" << endl; }
    SalesData(const string &s) : SalesData(s, 0 ,0.0) { cout << "SalesData_1" << endl; }
    SalesData(istream &is) : SalesData() { read(is,*this); cout << "SalesData_cin" << endl; }
    string isbn() const { return bookNo;}
    SalesData & combine(const SalesData &);
private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

SalesData & SalesData::combine(const SalesData &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double SalesData::avg_price() const {
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}

istream & read(istream &is, SalesData &item){
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream & print(ostream &os, const SalesData &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

SalesData add(SalesData &lhs, SalesData &rhs){
    SalesData sum = lhs;
    sum.combine(rhs);
    return sum;
}
int main()
{
    cout << "item1:" << endl;
    SalesData item1("", 0, 0.0);
    cout << "item2:" << endl;
    SalesData item2;
    cout << "item3:" << endl;
    SalesData item3("hellow");
    cout << "item4:" << endl;
    SalesData item4(cin);
    return 0;
}