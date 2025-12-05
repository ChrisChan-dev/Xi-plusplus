#include <iostream>
using namespace std;

int main() {
    double prelim, midterm, finals, average;

    cout << "Enter Prelim Grade: ";
    cin >> prelim;
    cout << "Enter Midterm Grade: ";
    cin >> midterm;
    cout << "Enter Finals Grade: ";
    cin >> finals;

    average = (prelim + midterm + finals) / 3;

    cout << "Final Average: " << average << endl;

    if (average >= 75)
        cout << "Status: PASSED";
    else
        cout << "Status: FAILED";

    return 0;
}
