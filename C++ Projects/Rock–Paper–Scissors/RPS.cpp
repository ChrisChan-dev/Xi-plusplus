#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getChoice(int n) {
    if (n == 1) return "Rock";
    if (n == 2) return "Paper";
    return "Scissors";
}

int main() {
    srand(time(0));

    string userInput;
    int userChoice, compChoice;
    int wins = 0, losses = 0, ties = 0;

    while (true) {

        cout << "\n===== ROCK PAPER SCISSORS =====\n";
        cout << "Enter your choice:\n";
        cout << "1 = Rock\n2 = Paper\n3 = Scissors\n";
        cout << "Type 'x' to exit\n";
        cout << "Your choice: ";
        cin >> userInput;

        // Check exit
        if (userInput == "x" || userInput == "X") {
            cout << "\nExiting game...\n";
            break;
        }

        // Convert to integer
        userChoice = stoi(userInput);

        // Validate
        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid input! Try again.\n";
            continue;
        }

        compChoice = rand() % 3 + 1;

        cout << "\nYou chose: " << getChoice(userChoice) << endl;
        cout << "Computer chose: " << getChoice(compChoice) << endl;

        if (userChoice == compChoice) {
            cout << "Result: It's a tie!\n";
            ties++;
        }
        else if ((userChoice == 1 && compChoice == 3) ||
                    (userChoice == 2 && compChoice == 1) ||
                    (userChoice == 3 && compChoice == 2)) {
            cout << "Result: You win!\n";
            wins++;
        }
        else {
            cout << "Result: You lose!\n";
            losses++;
        }

        // Scoreboard after every round
        cout << "\n===== SCOREBOARD =====\n";
        cout << "Wins:   " << wins << endl;
        cout << "Losses: " << losses << endl;
        cout << "Ties:   " << ties << endl;
    }

    cout << "\nFinal Score:\n";
    cout << "Wins: " << wins << "\nLosses: " << losses << "\nTies: " << ties << endl;
    cout << "Goodbye!\n";

    return 0;
}
