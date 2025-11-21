#include <iostream>
using namespace std;

class MyClass {
    int data;

public:
    MyClass(int d = 0) : data(d) {
        cout << "Constructor called, data = " << data << endl;
    }

    
    void* operator new(size_t size) {
        cout << "Custom new called, size = " << size << endl;
        void* p = ::operator new(size); 
        return p;
    }

    
    void operator delete(void* p) {
        cout << "Custom delete called" << endl;
        ::operator delete(p);
    }

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    
    MyClass* obj = new MyClass(10);

    obj->display();

     delete obj;

    return 0;
}
