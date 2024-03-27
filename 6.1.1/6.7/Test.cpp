#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int myFunction(){
    static int num = 0;
    num++;
    return num;
}

int main () {
    cout <<  "num: " << myFunction() << endl;
    cout <<  "num: " << myFunction() << endl;
    cout <<  "num: " << myFunction() << endl;
    return 0;
}