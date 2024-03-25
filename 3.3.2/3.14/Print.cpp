#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<int> myVector;
    int value = 0;
    while(cin >> value)
        myVector.push_back(value);
    for(auto it = myVector.begin(); it != myVector.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
