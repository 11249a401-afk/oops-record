#include <iostream>
using namespace std;

class Demo {
private:
    int number;

public:
    
    Demo(int n) {
        number = n;
        cout << "Constructor called. Object created with number = " << number << endl;
    }

    
    void display() {
        cout << "The number is: " << number << endl;
    }

   
    ~Demo() {
        cout << "Destructor called. Object with number = " << number << " is destroyed." << endl;
    }
};

int main() {
    cout << "Creating first object..." << endl;
    Demo obj1(10);  

    cout << "\nCreating second object..." << endl;
    Demo obj2(20);  

    cout << "\nDisplaying object data..." << endl;
    obj1.display();
    obj2.display();

    cout << "\nProgram ending... (Destructors will be called automatically)" << endl;

    return 0;
}
