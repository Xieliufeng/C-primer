#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

struct SalesData
{
    SalesData() = default;
    SalesData(const string &s) : bookNo(s) {}
    SalesData(const string &s, const unsigned &n, const double &p) :
              bookNo(s), units_sold(n), revenue(n * p) {}
    SalesData(istream &is);
    string isbn() const { return bookNo;}
    SalesData & combine(const SalesData &);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

istream & read(istream &is, SalesData &item){
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

SalesData::SalesData(istream &is){
    read(is,*this);
}

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
    SalesData item1;
    print(cout, item1);
    cout << endl;
    SalesData item2("0-201-78345-X");
    print(cout, item2);
    cout << endl;
    SalesData item3("0-201-78346-X", 3, 20.00);
    print(cout, item3);
    cout << endl;
    SalesData item4(cin);
    print(cout, item4);
    cout << endl;
    return 0;
}