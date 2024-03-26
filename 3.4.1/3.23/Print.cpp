#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<int> ivec(10, 2);
    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        *it = *it * *it;
        cout << *it << endl;
    }    
    return 0;
}