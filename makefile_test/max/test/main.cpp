#include <iostream>
#include "max.hpp"

int main() {
    int a = 10;
    int b = 5;
    int result = max(a, b);
    std::cout << "The maximum of " << a << " and " << b << " is " << result << std::endl;
    return 0;
}