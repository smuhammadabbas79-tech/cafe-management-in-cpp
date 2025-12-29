#include <iostream>
#include <string>
using namespace std;

string welcomeCustomer() {
    string name;

    cout << "\n\t\t=========================================";
    cout << "\n\t\t         WELCOME TO SADAT CAFE";
    cout << "\n\t\t=========================================\n";

    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "\nHello, " << name << "! Please select from our menu:\n";
    return name;
}

int main() {
    welcomeCustomer();   // function call
    return 0;
}
