#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
  
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    ls
    void displayData() {
        cout << "Roll No: " << rollNo << "\t"
             << "Name: " << name << "\t"
             << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    
    Student s[n];

    cout << "\n--- Enter Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }

    cout << "\n--- Student Information ---\n";
    for (int i = 0; i < n; i++) {
        s[i].displayData();
    }

    return 0;
}
