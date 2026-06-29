// Q102 - Voting Eligibility System

#include <iostream>
using namespace std;

int main()
{
    int age;
    char citizen;

    cout << "========== Voting Eligibility System ==========\n";

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you an Indian Citizen? (Y/N): ";
    cin >> citizen;

    if ((age >= 18) && (citizen == 'Y' || citizen == 'y'))
    {
        cout << "\nCongratulations! You are eligible to vote.";
    }
    else
    {
        cout << "\nSorry! You are not eligible to vote.";
    }

    return 0;
}