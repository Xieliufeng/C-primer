#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
    vector<string> words;
    string word;
    while(cin >> word)
        words.push_back(word);
    for(auto tmp : words) {
        for(auto i : tmp) 
            cout << char(toupper(i));
        cout << endl;
    }
    return 0;
}