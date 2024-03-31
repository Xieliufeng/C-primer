#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int compare(const int a, const int *b){
    return a > *b ? a : *b;
}

int main () {
    int a = 3;
    int b = 5;
    cout << compare(a, &b) << endl;
    return 0;
}