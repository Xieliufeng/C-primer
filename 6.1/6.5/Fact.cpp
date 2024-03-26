#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double abs(double val){
    if (val < 0)
        return val * -1;
    return val;
}

int main () {
    double val;
    cin >> val;
    cout << abs(val) << endl;
    return 0;
}