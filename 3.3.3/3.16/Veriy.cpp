#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<int> v1;
    cout << "v1.size():" << v1.size() << endl;
    for(auto i : v1)
        cout << "v1:" << i << endl;
    vector<int> v2(10);
    cout << "v2.size():" << v2.size() << endl;
    for(auto i : v2)
        cout << "v2:" << i << endl;
    vector<int> v3(10, 42);
    cout << "v3.size():" << v3.size() << endl;
    for(auto i : v3)
        cout << "v3:" << i << endl;
    vector<int> v4{10};
    cout << "v4.size():" << v4.size() << endl;
    for(auto i : v4)
        cout << "v4:" << i << endl;
    vector<int> v5{10, 42};
    cout << "v5.size():" << v5.size() << endl;
    for(auto i : v5)
        cout << "v5:" << i << endl;
    vector<string> v6{10};
    cout << "v6.size():" << v6.size() << endl;
    for(auto i : v6)
        cout << "v6:" << i << endl;
    vector<string> v7{10, "hi"};
    cout << "v7.size():" << v7.size() << endl;
    for(auto i : v7)
        cout << "v7:" << i << endl;
    return 0;
}