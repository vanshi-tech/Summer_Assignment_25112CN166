// Q117 - Student Record System Using Arrays & Strings

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "========== STUDENT RECORD SYSTEM ==========\n";
    cout << "Enter Number of Students: ";
    cin >> n;

    int roll[100];
    string name[100];
    float marks[100];

    cin.ignore();

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];
        cin.ignore();

        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Marks: ";
        cin >> marks[i];
        cin.ignore();
    }

    // Display
    cout << "\n========== STUDENT RECORD ==========\n";
    cout << "Roll\tName\t\tMarks\n";

    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }

    // Find Topper
    int topper = 0;

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > marks[topper])
            topper = i;
    }

    cout << "\n========== TOPPER ==========\n";
    cout << "Roll Number : " << roll[topper] << endl;
    cout << "Name        : " << name[topper] << endl;
    cout << "Marks       : " << marks[topper] << endl;

    return 0;
}