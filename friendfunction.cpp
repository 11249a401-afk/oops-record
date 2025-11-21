#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    
    Box(double w) {
        width = w;
    }

    
    friend void printWidth(Box b);
};


void printWidth(Box b) {
    cout << "Width of the box = " << b.width << endl;
}

int main() {
    Box b1(10.5);

    
    printWidth(b1);

    return 0;
}
