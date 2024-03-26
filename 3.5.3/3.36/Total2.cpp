#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main () {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    if (a != b)
        cout << "!=" << endl;
    else
        cout << "==" << endl;
    return 0;
}
