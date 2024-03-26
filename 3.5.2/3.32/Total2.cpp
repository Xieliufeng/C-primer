#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () {
    vector<int> a;
    for (decltype(a.size()) index = 0; index < 10; index++)
        a.push_back(index);
    vector<int> b(a);
    for (auto i : b)
        cout << i << endl;
    return 0;
}