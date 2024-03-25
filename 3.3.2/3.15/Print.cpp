#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<string> myVector;
    string word = "";
    while(cin >> word)
        myVector.push_back(word);
    for(auto it = myVector.begin(); it != myVector.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
