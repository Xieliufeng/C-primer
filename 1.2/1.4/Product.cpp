#include<iostream>

//演示不合法的嵌套注释的报错
int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "The product of " << a << " and " << b << " is " << a * b << std::endl;
    return 0;
}