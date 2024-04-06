#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void f()
{
    cout << "f1" << endl;
}

void f(int a)
{
    cout << "f2" << endl;
}

void f(int a, int b)
{
    cout << "f3" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "f4" << endl;
}

int main(int argc, char *argv[])
{
    // f(2.56, 24);
    f(42);
    f(42, 0);
    f(2.56,3.14);
    return 0;
}