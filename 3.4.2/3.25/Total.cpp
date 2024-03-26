#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () {
    vector<int> grades(11);
    int grade;
    while (cin >> grade) {
        if (grade <= 100) {
            auto it = grades.begin();
            (*(it + grade/10))++;
        }
    }
    for (auto i : grades) 
        cout << i << " ";
    cout << endl;
    return 0;
}