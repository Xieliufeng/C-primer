#include<iostream>

int main(){
    int left = 0;
    int right = 0;
    std::cin >> left >> right;
    if (left > right) {
        int tmp = left;
        left = right;
        right = tmp;
    }
    left += 1;
    while (left < right) {
        std::cout << left << std::endl;
        left++;
    }
    return 0;
}