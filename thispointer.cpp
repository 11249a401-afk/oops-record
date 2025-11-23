#include <iostream>
using namespace std;

class Student {
private:
    int age;
    string name;

public:
    
    Student(string name, int age) {
        this->name = name;   
        this->age = age;
    }

    
    void show() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }

    Student& setAge(int age) {
        this->age = age;
        return *this;  
    }
};

int main() {
    Student s("Rahul", 20);

    s.show();

    s.setAge(25).show();

    return 0;
}
