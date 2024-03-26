#include <iostream>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;

int main () {
    int a[10] = {};
    for(int i = 0; i < 10; i++)
        a[i] = i;
    int *pbeg = std::begin(a);
    int *pend = std::end(a);
    while (pbeg != pend) {
        *pbeg = 0;
        pbeg++;
    }

    for(auto i : a)
        cout << i << endl;
    return 0;
}