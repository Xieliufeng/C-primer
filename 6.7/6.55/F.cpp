#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int produnct(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int main(int argc, char *argv[])
{
    using Fun = int(int, int);
    vector<Fun *> myVector{add, subtract, produnct, divide};
    return 0;
}