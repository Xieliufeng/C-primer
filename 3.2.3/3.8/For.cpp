#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;

int main () {
    string line = "xiexin";
    for (decltype(line.size()) index = 0;
        index < line.size() && !isspace(line[index]); index++)
        line[index] = 'X';
    cout << line << endl;
    return 0;
}