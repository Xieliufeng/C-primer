#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string make_plura(size_t ctr, const string &word,
                              const string ending = "s") 
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[])
{
    cout << make_plura(2,"success","es") << endl;
    cout << make_plura(2, "failure") << endl;
    return 0;
}