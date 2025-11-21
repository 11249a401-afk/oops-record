#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

   
    float add(float x, float y) {
        return x + y;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 integers (10, 20): " << calc.add(10, 20) << endl;
    cout << "Sum of 3 integers (10, 20, 30): " << calc.add(10, 20, 30) << endl;
    cout << "Sum of 2 floats (5.5, 3.2): " << calc.add(5.5f, 3.2f) << endl;

    return 0;
}
