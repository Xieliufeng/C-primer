#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void printVector(vector<int> &myVector){
    for (auto i : myVector)
        cout << i << endl;
}

int main (int argc, char *argv[]) {
    vector<int> myVector = {1, 2, 3, 4};
    printVector(myVector);
    return 0;
}