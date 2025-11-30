#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.00;
    double amount;

    while (true) {
        cout << "\n===== ATM MACHINE =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYour Balance: ₱" << balance << "\n";
                break;

            case 2:
                cout << "Enter amount to deposit: ₱";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Successfully deposited ₱" << amount << "\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ₱";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance -= amount;
                    cout << "Successfully withdrew ₱" << amount << "\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
