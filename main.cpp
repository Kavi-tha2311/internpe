#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Seed for the random number generator
    srand(time(0));

    // Array of choices
    string choices[] = {"Rock", "Paper", "Scissors"};

    // Get user's choice
    cout << "Enter your choice (Rock, Paper, or Scissors): ";
    string userChoice;
    cin >> userChoice;

    // Generate a random index for the computer's choice
    int computerChoiceIndex = rand() % 3;
    string computerChoice = choices[computerChoiceIndex];

    // Display the choices
    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "Rock" && computerChoice == "Scissors") ||
               (userChoice == "Paper" && computerChoice == "Rock") ||
               (userChoice == "Scissors" && computerChoice == "Paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}

