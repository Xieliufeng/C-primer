#include <iostream>

struct Foo
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Foo foo;
    std::cout << foo.bookNo << " "<< foo.units_sold << " " << foo.revenue << std::endl;
    return 0;
}
