#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {
    string s;
    cout << argc << " : " << endl;
    for(int num = 1; num < argc; num++) {
        cout << argv[num]<< endl;
    }
    return 0;
}