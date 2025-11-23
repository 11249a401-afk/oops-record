#include <iostream>
using namespace std;


template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T multiply() {
        return num1 * num2;
    }
};

int main() {
    
    Calculator<int> c1(10, 20);
    cout << "Int Add: " << c1.add() << endl;
    cout << "Int Multiply: " << c1.multiply() << endl;

    
    Calculator<double> c2(3.5, 2.5);
    cout << "Double Add: " << c2.add() << endl;
    cout << "Double Multiply: " << c2.multiply() << endl;

    return 0;
}
