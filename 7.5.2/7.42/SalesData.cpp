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

class Book {
public:
    Book(std::string s, unsigned cnt, double pri) : bookNo(s), units_sold(cnt),price(pri) { cout << "Book_3" << endl; }
    Book() : Book("", 0, 0.0) { cout << "Book_0" << endl; }
private:
    string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
};

int main()
{
    Book book;
    return 0;
}