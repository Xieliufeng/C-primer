#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main () {
    string line = "xiexin";
    for (auto &c : line)
        c = 'X';
    cout << line << endl;
    return 0;
}