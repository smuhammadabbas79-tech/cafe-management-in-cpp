#include <iostream>
using namespace std;

double takeOrder() {
    int choice, quantity;
    double total = 0;
    char again = 'y';

    do {
        cout << "\n---------- MENU ----------\n";
        cout << "1. Coffee          Rs.150\n";
        cout << "2. Tea             Rs.100\n";
        cout << "3. Burger          Rs.300\n";
        cout << "4. Sandwich        Rs.250\n";
        cout << "5. Pizza           Rs.600\n";
        cout << "6. Cold Drink      Rs.120\n";
        cout << "7. Fries           Rs.180\n";
        cout << "8. Ice Cream       Rs.200\n";
        cout << "9. Exit & Bill\n";
        cout << "--------------------------\n";

        cout << "Enter your choice (1-9): ";
        cin >> choice;

        if (choice == 9)
            break;

        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice) {
            case 1: total += 150 * quantity; break;
            case 2: total += 100 * quantity; break;
            case 3: total += 300 * quantity; break;
            case 4: total += 250 * quantity; break;
            case 5: total += 600 * quantity; break;
            case 6: total += 120 * quantity; break;
            case 7: total += 180 * quantity; break;
            case 8: total += 200 * quantity; break;
            default:
                cout << "Invalid choice!\n";
                continue;
        }

        cout << "Do you want to order something else? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return total;
}

int main() {
    double bill = takeOrder();
    cout << "\nTotal Bill Amount: Rs." << bill << endl;
    return 0;
}
