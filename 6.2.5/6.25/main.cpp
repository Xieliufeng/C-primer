#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {
    string s;
    for(int num = 1; num < argc; num++) {
        s += argv[num];
    }
    cout << argc << ":" <<s << endl;
    return 0;
}