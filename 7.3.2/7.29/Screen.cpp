#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class Screen {
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {};
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};
    Screen  move(pos r, pos c);
    Screen  set(char c);
    Screen  display(ostream &os) 
                    { do_display(os); return *this; }
    const Screen  display(ostream &os) const 
                    { do_display(os); return *this; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(ostream & os) const { os << contents; }
};

inline Screen  Screen::move(pos r, pos c) {
    pos row = r *width;
    cursor = row + c;
    return *this;
}

inline Screen  Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}