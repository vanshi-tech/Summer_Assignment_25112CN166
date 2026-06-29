// Q101 - Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "=====================================\n";
    cout << "      NUMBER GUESSING GAME\n";
    cout << "=====================================\n";
    cout << "Guess a number between 1 and 100\n";

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
        {
            cout << "Too High! Try Again.\n";
        }
        else if (guess < number)
        {
            cout << "Too Low! Try Again.\n";
        }
        else
        {
            cout << "\nCongratulations!\n";
            cout << "You guessed the correct number.\n";
            cout << "Total Attempts = " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}