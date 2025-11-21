#include <iostream>
#include <iomanip> 
using namespace std;

class Employee {
private:
    string name;
    int empID;
    float basicPay, da, hra, grossSalary, tax, netSalary;

public:
   
    void getData() {
        cout << "Enter Employee Name: ";
        cin >> ws; 
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Basic Pay: ";
        cin >> basicPay;

        
        da = basicPay * 0.70;
        hra = basicPay * 0.10;
        grossSalary = basicPay + da + hra;
        tax = grossSalary * 0.20;
        netSalary = grossSalary - tax;
    }

    
    void displayPayslip() {
        cout << "\n---------- Employee Payslip ----------\n";
        cout << "Employee Name       : " << name << endl;
        cout << "Employee ID         : " << empID << endl;
        cout << fixed << setprecision(2); 
        cout << "Basic Pay           : " << basicPay << endl;
        cout << "Dearness Allowance  : " << da << endl;
        cout << "House Rent Allowance: " << hra << endl;
        cout << "Gross Salary        : " << grossSalary << endl;
        cout << "Tax (20%)           : " << tax << endl;
        cout << "Net Salary          : " << netSalary << endl;
        cout << "--------------------------------------\n";
    }
};

int main() {
    Employee emp; 
    emp.getData(); 
    emp.displayPayslip(); 
    return 0;
}
