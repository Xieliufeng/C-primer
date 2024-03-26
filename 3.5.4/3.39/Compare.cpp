#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main () {
    string str1{"value"};
    string str2{"value"};
    if (str1 != str2)
        cout << "!=" << endl;
    else
        cout << "==" << endl;
    return 0;
}