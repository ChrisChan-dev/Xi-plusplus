#include <iostream>
using namespace std;

int main() {
    double weight, limit = 20;

    cout << "Enter baggage weight (kg): ";
    cin >> weight;

    if (weight <= limit) {
        cout << " Baggage OK!\n";
    } else {
        cout << " Overweight by " << (weight - limit) << " kg.\n";
    }

    return 0;
}
