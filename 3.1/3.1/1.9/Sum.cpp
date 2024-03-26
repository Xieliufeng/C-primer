#include<iostream>
using std::cout;
using std::endl;

int main(){
    int sum = 0;
    for (int val = 50; val <= 100; val++)
        sum +=  val;
    cout << sum << endl;
    return 0;
}