#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;


int main () {
    vector<int> ivec = {1, 2, 3};
    int a[3] = {};
    size_t num = 0;
    for (auto i : ivec)
        a[num++] = i;
    for (auto i : a)
        cout << i << endl;
    return 0;
}