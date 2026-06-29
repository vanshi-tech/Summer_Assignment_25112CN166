// Q105 - Student Record Management System

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    int roll[100];
    string name[100];
    float marks[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\n========== STUDENT RECORD ==========\n";

    cout << "Roll\tName\t\tMarks\n";

    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t" << name[i] << "\t\t" << marks[i] << endl;
    }

    return 0;
}