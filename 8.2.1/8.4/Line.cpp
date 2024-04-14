#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::string;

int main()
{
    ifstream in("infile");
    string line;
    vector<string> myVector;
    while(getline(in, line)) {
        myVector.push_back(line);
    }
    for (auto v : myVector)
        cout << v << endl;
    in.close();
    return 0;
}