#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::end;
using std::begin;

int main () {
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 4};
    for (size_t i = 0; i < 3; i++) {
        if (a[i]  == b[i])
            continue;
        cout << "!=" << endl;
        return 0;
    }
    cout << "==" << endl;
    return 0;
}
