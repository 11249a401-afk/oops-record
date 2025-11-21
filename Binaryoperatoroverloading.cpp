#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    
    Number(int v = 0) {
        value = v;
    }

    
    void display() {
        cout << "Value = " << value << endl;
    }

    
    Number operator+(Number obj) {
        Number temp;
        temp.value = value + obj.value; 
        return temp;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    cout << "Numbers:" << endl;
    n1.display();
    n2.display();

    n3 = n1 + n2; 
    cout << "After adding n1 + n2:" << endl;
    n3.display();

    return 0;
}
