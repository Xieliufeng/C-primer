#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isUpper(const string &s) {
    for (auto c : s)
        if(isupper(c)) return true;
    return false;
}

void toLower(string &s) {
    for (auto &c : s)
        tolower(c);
}

int main () {
    string s = "Hello";
    auto ret = isUpper(s);
    cout << ret << endl;
    toLower(s);
    cout << s << endl;
    return 0;
}