#include <iostream>
using namespace std;

class A {
public:
    void msgA() { cout << "This is Class A\n"; }
};

class B : public A {
public:
    void msgB() { cout << "This is Class B\n"; }
};

class C : public B {
public:
    void msgC() { cout << "This is Class C\n"; }
};

int main() {
    C obj;
    obj.msgA();
    obj.msgB();
    obj.msgC();
    return 0;
}
