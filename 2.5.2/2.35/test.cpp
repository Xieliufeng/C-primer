#include <iostream>

int main() {
    const int i = 42; // const int i = 42;
    auto j = i; // int j = i;
    const auto &k = i; // const int &k = i;
    auto *p = &i; // const int *p = &i;
    const auto j2 = i, &k2 = i; // const int j2 = i, &k2 =i;

    return 0;
}
