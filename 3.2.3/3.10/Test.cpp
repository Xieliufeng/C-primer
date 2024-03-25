#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;

int main () {
    string line = "hi,xiexin.nihao.";
    for (auto c : line)
        if (!ispunct(c)) 
            cout << c;
    return 0;
}