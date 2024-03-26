#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () {
    vector<int> ivec;
    int value;
    while(cin >> value)
        ivec.push_back(value);
    for(decltype(ivec.size()) i = 0; i < ivec.size() - 1; i++)
        cout << ivec[i] + ivec[i + 1] << std::endl;
    return 0;
}