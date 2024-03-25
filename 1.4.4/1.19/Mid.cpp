#include<iostream>

int main(){
    int top = 0;
    int bottom = 0;
    std::cin >> top >> bottom;
    if (top < bottom) {
        int tmp = top;
        top = bottom;
        bottom = tmp;
    }
    int val = top - 1;
    while(val > bottom){
        std::cout << val << std::endl;
        val--;
    }
    return 0;
}