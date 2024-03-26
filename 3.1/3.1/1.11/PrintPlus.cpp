#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int left = 0;
    int right = 0;
    cin >> left >> right;
    if (left > right) {
        int tmp = left;
        left = right;
        right = tmp;
    }
    left += 1;
    while (left < right) {
        cout << left << endl;
        left++;
    }
    return 0;
}