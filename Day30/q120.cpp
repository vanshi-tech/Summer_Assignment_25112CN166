// Q120 - Complete Mini Project
// Student Management System Using Arrays, Strings and Functions

#include <iostream>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int totalStudents = 0;

// Function to Add Student
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> roll[totalStudents];

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

// Function to Display Students
void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Student Record Found!\n";
        return;
    }

    cout << "\n========== STUDENT RECORD ==========\n";
    cout << "Roll\tName\t\tMarks\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << roll[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to Search Student
void searchStudent()
{
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == searchRoll)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}

// Function to Find Topper
void topper()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Student Record Found!\n";
        return;
    }

    int index = 0;

    for (int i = 1; i < totalStudents; i++)
    {
        if (marks[i] > marks[index])
            index = i;
    }

    cout << "\n========== TOPPER ==========\n";
    cout << "Roll No : " << roll[index] << endl;
    cout << "Name    : " << name[index] << endl;
    cout << "Marks   : " << marks[index] << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Show Topper\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                topper();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}