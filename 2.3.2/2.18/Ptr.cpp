#include <iostream>

int main()
{
    int val = 10, *ptr = nullptr; 
    ptr = &val;
    *ptr = 20;
    std::cout << val << std::endl;
    return 0;
}
