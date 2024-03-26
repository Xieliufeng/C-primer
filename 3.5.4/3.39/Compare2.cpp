#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

int main () {
    char str1[] = "xie";
    char str2[] = "xin";
    char str3[7] = {};
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3 << endl;
    return 0;
}