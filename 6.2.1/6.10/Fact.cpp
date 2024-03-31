#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main () {
    int a = 3;
    int b = 5;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}