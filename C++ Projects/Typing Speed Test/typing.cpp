#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string text = "The quick brown fox jumps over the lazy dog.";
    string input;

    cout << "TYPE THIS TEXT:\n";
    cout << text << "\n\n";

    time_t start = time(NULL);

    cout << "Start typing: ";
    getline(cin, input);
    getline(cin, input);

    time_t end = time(NULL);

    double seconds = difftime(end, start);

    int words = 9;
    double wpm = (words / seconds) * 60;

    cout << "\nTime: " << seconds << " seconds";
    cout << "\nSpeed: " << wpm << " WPM\n";

    return 0;
}
