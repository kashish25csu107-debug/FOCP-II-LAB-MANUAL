

#include<iostream>
using namespace std;

class ElectricityBill {
private:
    string Consumername;
    float billamount;
    int units;

public:
    ElectricityBill(); // default constructor
    ElectricityBill(string Consumername, int units); // fixed

    void calculatebill();
    void displaybill();
};

// Default constructor
ElectricityBill::ElectricityBill() {
    Consumername = "Not Assigned";
    units = 0;
    billamount = 0;
}

// Parameterized constructor
ElectricityBill::ElectricityBill(string name, int u) {
    Consumername = name;
    units = u;
    billamount = 0;
}

// Function to calculate bill
void ElectricityBill::calculatebill() {
    if (units <= 100)
        billamount = units * 1.5;
    else if (units <= 200)
        billamount = 100 * 1.5 + (units - 100) * 2.5;
    else
        billamount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;
}

// Function to display bill
void ElectricityBill::displaybill() {
    cout << "\nConsumer Name: " << Consumername << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill Amount: " << billamount << endl;
}

// Main function
int main() {
    ElectricityBill b1("Kashish", 250);

    b1.calculatebill();
    b1.displaybill();

    return 0;
}