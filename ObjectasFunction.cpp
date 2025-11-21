#include <iostream>
using namespace std;

class Add {
private:
    int a;

public:
    
    void getData(int x) {
        a = x;
    }

    t
    void sum(Add obj) {
        int result = a + obj.a;
        cout << "Sum = " << result << endl;
    }
};

int main() {
    Add obj1, obj2;

    obj1.getData(10);
    obj2.getData(20);

    obj1.sum(obj2);

    return 0;
}
