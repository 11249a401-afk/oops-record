#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};


class Student : public Person {
private:
    int roll;

public:
    Student(string n, int a, int r) : Person(n, a) {
        roll = r;
    }

    void showStudent() {
        showPerson(); 
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s("John", 20, 101);
    s.showStudent();
    return 0;
}
