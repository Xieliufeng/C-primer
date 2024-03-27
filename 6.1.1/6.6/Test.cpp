#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void myFunction(int a){
    static int num = 0;
    int b = 0;
    num++;
    cout <<  "num: " << num << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int main () {
    myFunction(1);
    myFunction(1);
    return 0;
}