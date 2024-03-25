#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;

int main () {
    string line = "xiexin";
    decltype(line.size()) index = 0;
    while(index < line.size() && !isspace(line[index])) {
        line[index] = 'X';
        index++;
    }
    cout << line << endl;
    return 0;
}