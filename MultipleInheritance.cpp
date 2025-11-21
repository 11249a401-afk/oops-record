#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    void showName() { cout << "Name: " << name << endl; }
};

class Employee {
protected:
    int empID;
public:
    Employee(int id) : empID(id) {}
    void showID() { cout << "Employee ID: " << empID << endl; }
};

class Manager : public Person, public Employee {
    string dept;
public:
    Manager(string n, int id, string d) : Person(n), Employee(id), dept(d) {}
    void showManager() {
        showName(); 
        showID();    
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Manager m("Alice", 101, "Sales");
    m.showManager();
    return 0;
}
