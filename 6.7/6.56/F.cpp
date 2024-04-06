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
    int a = 12;
    int b = 4;
    using Fun = int(int, int);
    vector<Fun *> myVector{add, subtract, produnct, divide};
    cout << "a + b : " << myVector[0](a, b) << endl;
    cout << "a - b : " << myVector[1](a, b) << endl;
    cout << "a * b : " << myVector[2](a, b) << endl;
    cout << "a / b : " << myVector[3](a, b) << endl;
    return 0;
}