#include <iostream>
using namespace std;

int main() {
    bool seatbelt, trayTable, windowShade;

    cout << "Seatbelt fastened? (1 = yes, 0 = no): ";
    cin >> seatbelt;

    cout << "Tray table up? (1 = yes, 0 = no): ";
    cin >> trayTable;

    cout << "Window shade closed? (1 = yes, 0 = no): ";
    cin >> windowShade;

    if (!seatbelt)
        cout << "Alert: Please fasten your seatbelt.\n";
    if (!trayTable)
        cout << "Alert: Please stow your tray table.\n";
    if (!windowShade)
        cout << "Reminder: Close the window shade.\n";

    return 0;
}
