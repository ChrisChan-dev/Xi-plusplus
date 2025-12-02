#include <iostream>
using namespace std;

int main() {
    int timeOfDay, passengers;

    cout << "Enter time of day (0-24): ";
    cin >> timeOfDay;

    cout << "Enter number of passengers: ";
    cin >> passengers;

    double predicted = (passengers * 0.12) + (timeOfDay * 0.5);

    cout << "Predicted queue time: " << predicted << " minutes\n";
    return 0;
}
