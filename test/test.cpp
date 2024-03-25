#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
        // 在析构函数中释放资源
    }
};

MyClass createObject() {
    return MyClass();
}

int main() {
    MyClass obj = createObject();
    return 0;
}
