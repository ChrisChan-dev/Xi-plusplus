#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "QUIZ GAME\n\n";

    cout << "1. What is the capital of France?\n";
    cout << "A) Rome   B) Paris   C) Madrid\nYour answer: ";
    cin >> ans;
    if (toupper(ans) == 'B') score++;

    cout << "\n2. What is 5 * 6?\n";
    cout << "A) 30   B) 20   C) 36\nYour answer: ";
    cin >> ans;
    if (toupper(ans) == 'A') score++;

    cout << "\n3. What planet is known as the Red Planet?\n";
    cout << "A) Jupiter   B) Mars   C) Venus\nYour answer: ";
    cin >> ans;
    if (toupper(ans) == 'B') score++;

    cout << "\nYour score: " << score << "/3\n";

    return 0;
}
