#include <iostream>
using namespace std;

class MyString {
    string s;
public:
    MyString(string x = "") : s(x) {}
    MyString operator+(MyString obj) { return MyString(s + obj.s); }
    void show() { cout << s; }
};

int main() {
    MyString a("Hello "), b("World!");
    MyString c = a + b;
    c.show();
    return 0;
}
