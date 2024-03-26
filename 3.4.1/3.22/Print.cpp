#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<string> text = {"helloworld!", "", "xiexin"};
    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
        for (auto iter = it->cbegin(); iter != it->cend(); iter++)
            cout << char(toupper(*iter));
        cout << endl;
    }
    return 0;
}