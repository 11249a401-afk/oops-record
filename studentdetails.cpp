#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
  
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
          cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); 
    }

    
    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}
