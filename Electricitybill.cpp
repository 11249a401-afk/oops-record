#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    string connectionType;
    double billAmount;

public:
    void getInput() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore(); // clear newline from buffer

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;

        cout << "Enter Current Month Reading: ";
        cin >> currReading;

        cout << "Enter Type of EB Connection (domestic/commercial): ";
        cin >> connectionType;
    }

    void calculateBill() {
        int units = currReading - prevReading;
        billAmount = 0.0;

        if (connectionType == "domestic") {
            if (units <= 100)
                billAmount = units * 1;
            else if (units <= 200)
                billAmount = 100 * 1 + (units - 100) * 2.5;
            else if (units <= 500)
                billAmount = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
            else
                billAmount = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        } else if (connectionType == "commercial") {
            if (units <= 100)
                billAmount = units * 2;
            else if (units <= 200)
                billAmount = 100 * 2 + (units - 100) * 4.5;
            else if (units <= 500)
                billAmount = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
            else
                billAmount = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        } else {
            cout << "Invalid connection type. Please enter 'domestic' or 'commercial'.\n";
            billAmount = 0;
        }
    }

    void displayBill() {
        int unitsUsed = currReading - prevReading;

        cout << "\n------- Electricity Bill -------\n";
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Connection Type : " << connectionType << endl;
        cout << "Previous Reading: " << prevReading << endl;
        cout << "Current Reading : " << currReading << endl;
        cout << "Units Consumed  : " << unitsUsed << endl;
        cout << "Bill Amount     : Rs. " << billAmount << endl;
        cout << "-------------------------------\n";
    }
};

int main() {
    ElectricityBill eb;
    eb.getInput();
    eb.calculateBill();
    eb.displayBill();

    return 0;
}
