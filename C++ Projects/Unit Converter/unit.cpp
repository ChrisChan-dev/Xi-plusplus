#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    int vote;

    cout << "VOTE: 1-A 2-B 3-C (0 to stop)\n";

    while (true) {
        cin >> vote;
        if (vote == 0) break;

        if (vote == 1) a++;
        else if (vote == 2) b++;
        else if (vote == 3) c++;
    }

    cout << "\nRESULTS\n";
    cout << "A: " << a << "\nB: " << b << "\nC: " << c << endl;

    return 0;
}