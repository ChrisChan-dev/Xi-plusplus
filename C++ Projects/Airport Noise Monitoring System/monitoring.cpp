#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of noise readings: ";
    cin >> n;

    double noise[100];
    double sum = 0, highest = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter noise level " << i+1 << ": ";
        cin >> noise[i];

        sum += noise[i];
        if (noise[i] > highest)
            highest = noise[i];
    }

    double avg = sum / n;

    cout << "Average noise: " << avg << endl;
    cout << "Highest noise recorded: " << highest << endl;

    if (avg > 75)
        cout << "Warning: Noise levels are too high!\n";

    return 0;
}
