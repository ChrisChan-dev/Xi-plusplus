#include <iostream>
using namespace std;

int main() {
    double price, taxRate, tax, total;

    cout << "Enter price: ";
    cin >> price;

    taxRate = 0.12;
    tax = price * taxRate;
    total = price + tax;

    cout << "Tax: " << tax << endl;
    cout << "Total Amount: " << total;

    return 0;
}
