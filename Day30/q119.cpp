// Q119 - Mini Employee Management System

#include <iostream>
using namespace std;

int main()
{
    int n, choice, searchId;
    int empId[100];
    string empName[100];
    string department[100];
    float salary[100];

    cout << "========== MINI EMPLOYEE MANAGEMENT SYSTEM ==========\n";
    cout << "Enter Number of Employees: ";
    cin >> n;
    cin.ignore();

    // Add Employee Details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empId[i];
        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, empName[i]);

        cout << "Department: ";
        getline(cin, department[i]);

        cout << "Salary: ";
        cin >> salary[i];
        cin.ignore();
    }

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Display Employees\n";
        cout << "2. Search Employee\n";
        cout << "3. Update Salary\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nID\tName\t\tDepartment\tSalary\n";

            for (int i = 0; i < n; i++)
            {
                cout << empId[i] << "\t"
                     << empName[i] << "\t\t"
                     << department[i] << "\t\t"
                     << salary[i] << endl;
            }
            break;

        case 2:
        {
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    found = true;

                    cout << "\nEmployee Found!\n";
                    cout << "ID         : " << empId[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Department : " << department[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 3:
        {
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    found = true;

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Salary Updated Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 4:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}