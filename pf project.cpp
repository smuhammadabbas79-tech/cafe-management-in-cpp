#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayBill(string name, double total, double tax, double grandTotal){
    cout << "\n\t\t            SADAT CAFE BILL";

    cout << "\nCustomer Name: " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Total Amount: Rs." << total << endl;
    cout << "Tax (8%): Rs." << tax << endl;
    cout << "Grand Total: Rs." << grandTotal << endl;

    cout << "\nThank you for visiting SADAT CAFE!\n\n";
}

int main() {
    string name = "Ali";
    double total = 1000;
    double tax = total * 0.08;
    double grandTotal = total + tax;

    displayBill(name, total, tax, grandTotal);

    return 0;
}
