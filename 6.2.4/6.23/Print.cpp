#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void print1(int *a){
    cout << "print1: " << *a << endl;
}

void print2(int a[]){
    cout << "print2: " << *a << endl;
}

void print3(int a[10]){
    cout << "print3: " << *a << endl;
}

int main () {
    int i = 0, j[2] = {0, 1};
    print1(&i);
    print1(j);
    print2(&i);
    print2(j);
    print3(&i);
    print3(j);
    return 0;
}