#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a = 10, b = 200, c = 3000;
    float pi = 3.14159265;

    cout << "Using endl:" << endl;
    cout << "Hello" << endl << "World!" << endl << endl;

    cout << "Using setw():" << endl;
    cout << setw(5) << a << endl;
    cout << setw(5) << b << endl;
    cout << setw(5) << c << endl << endl;

    cout << "Using setfill('*'):" << endl;
    cout << setfill('*') << setw(5) << a << endl;
    cout << setfill('*') << setw(5) << b << endl;
    cout << setfill('*') << setw(5) << c << endl << endl;

    cout << "Using setprecision():" << endl;
    cout << "pi (default) = " << pi << endl;
    cout << fixed << setprecision(2);
    cout << "pi (fixed, 2 decimals) = " << pi << endl;
    cout << fixed << setprecision(4);
    cout << "pi (fixed, 4 decimals) = " << pi << endl;

    return 0;
}
