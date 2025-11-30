#include <iostream>
using namespace std;

int main() {
    int choice, borrowed = 0;

    while (true) {
        cout << "\n=== LIBRARY SYSTEM ===\n";
        cout << "1. Borrow Book\n";
        cout << "2. Return Book\n";
        cout << "3. Check Status\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (borrowed == 0) {
                    borrowed = 1;
                    cout << "Book borrowed successfully.\n";
                } else {
                    cout << "You already borrowed a book!\n";
                }
                break;
            case 2:
                if (borrowed == 1) {
                    borrowed = 0;
                    cout << "Book returned.\n";
                } else {
                    cout << "No borrowed book to return.\n";
                }
                break;
            case 3:
                if (borrowed == 1) cout << "Status: You have a borrowed book.\n";
                else cout << "Status: No borrowed books.\n";
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid Choice!\n";
        }
    }
}
