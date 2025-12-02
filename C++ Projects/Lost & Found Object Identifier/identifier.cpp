#include <iostream>
#include <string>
using namespace std;

int main() {
    string item;
    cout << "Describe the lost item: ";
    getline(cin, item);

    if (item.find("bag") != string::npos || item.find("backpack") != string::npos)
        cout << "Category: Bag\n";
    else if (item.find("laptop") != string::npos || item.find("phone") != string::npos)
        cout << "Category: Electronics\n";
    else if (item.find("id") != string::npos || item.find("card") != string::npos)
        cout << "Category: ID\n";
    else if (item.find("passport") != string::npos || item.find("paper") != string::npos)
        cout << "Category: Document\n";
    else
        cout << "Category: Unknown\n";

    return 0;
}
