#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void exchange(int *&a, int *&b){
    int *tmp = a;
    a = b;
    b = tmp;
}

int main () {
    int a = 3;
    int b = 5;
    int *p1 = &a;
    int *p2 = &b;
    exchange(p1, p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}