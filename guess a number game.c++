#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!\n";
    cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts + 1 << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again!\n";
        } else {
            cout << "Too high. Try again!\n";
        }

        attempts++;

    } while (true);

    return 0;
}
