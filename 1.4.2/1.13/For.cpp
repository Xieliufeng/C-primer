#include<iostream>

// int main () {
//     int val = 50;
//     int sum = 0;
//     while (val <= 100) {
//         sum +=  val;
//         val++;
//     }
//     std::cout << sum << std::endl;
//     return 0;
// }

// int main () {
//     int val = 9;
//     for (int val = 9; val > 0; val--)
//         std::cout << val << std::endl;
//     return 0;
// }

int main () {
    int left = 0;
    int right = 0;
    std::cin >> left >> right;
    if (left > right) {
        int tmp = left;
        left = right;
        right = tmp;
    }
    for (left += 1; left < right; left++)
        std::cout << left << std::endl;
    return 0;
}