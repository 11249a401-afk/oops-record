#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int Add: " << add(5, 10) << endl;      
    cout << "Double Add: " << add(3.5, 2.1) << endl; 
    cout << "String Add: " << add(string("Hello "), string("World")) << endl;

    return 0;
}
