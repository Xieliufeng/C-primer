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
    auto nums = ivec.size();
    for(decltype(nums) i = 0; i < nums / 2; i++)
        cout << ivec[i] + ivec[nums - i - 1] << std::endl;
    return 0;
}