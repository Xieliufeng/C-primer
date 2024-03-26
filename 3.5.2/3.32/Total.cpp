#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main () {
    int a[10] = {};
    for(int i = 0; i < 10; i++)
        a[i] = i;
    int b[10] = {};
    for(int i = 0; i < 10; i++)
        b[i] = a[i];
    for(auto i : b)
        cout << i << endl;
    return 0;
}