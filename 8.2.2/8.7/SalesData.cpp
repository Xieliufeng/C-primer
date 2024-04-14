#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::string;

class SalesData;

istream & read(istream &is, SalesData &item);

class SalesData
{
friend istream & read(istream &is, SalesData &item);
friend ostream & print(ostream &os, const SalesData &item);
friend SalesData add(SalesData &lhs, SalesData &rhs);
public:
    SalesData() = default;
    SalesData(const string &s) : bookNo(s) {}
    SalesData(const string &s, const unsigned &n, const double &p) :
              bookNo(s), units_sold(n), revenue(n * p) {}
    SalesData(istream &is) { read(is,*this); }
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
int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    SalesData totalData(input);
    if (!totalData.isbn().empty()) {
        SalesData valData;
        while (read(input, valData)) {
            if (totalData.isbn() == valData.isbn()) {
                totalData.combine(valData);
            } else {
                print(output, totalData) << endl;
                totalData = valData;
            }
        }
        print(output, totalData) << endl;
    } else {
        output << "No data?!" << endl;
        return -1;
    }
    input.close();
    output.close();
    return 0;
}