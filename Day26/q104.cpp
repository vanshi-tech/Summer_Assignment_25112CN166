// Q104 - Quiz Application

#include <iostream>
using namespace std;

int main()
{
    int score = 0, answer;

    cout << "=====================================\n";
    cout << "        SIMPLE QUIZ APPLICATION\n";
    cout << "=====================================\n";

    // Question 1
    cout << "\nQ1. What is the capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. New Delhi\n";
    cout << "3. Chennai\n";
    cout << "4. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\nQ2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n";
    cout << "2. Python\n";
    cout << "3. C++\n";
    cout << "4. CSS\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\nQ3. How many days are there in a week?\n";
    cout << "1. 5\n";
    cout << "2. 6\n";
    cout << "3. 7\n";
    cout << "4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 4
    cout << "\nQ4. Which symbol is used for comments in C++?\n";
    cout << "1. //\n";
    cout << "2. ##\n";
    cout << "3. **\n";
    cout << "4. %%\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 5
    cout << "\nQ5. Which company developed C++?\n";
    cout << "1. Google\n";
    cout << "2. Microsoft\n";
    cout << "3. Bell Labs\n";
    cout << "4. Apple\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n=====================================\n";
    cout << "Quiz Completed!\n";
    cout << "Your Score = " << score << " / 5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}