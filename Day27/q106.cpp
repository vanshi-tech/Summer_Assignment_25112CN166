// Q106 - Employee Management System

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    int id[100];
    string name[100];
    float salary[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, name[i]);

        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\n========== EMPLOYEE RECORD ==========\n";
    cout << "ID\tName\t\tSalary\n";

    for (int i = 0; i < n; i++)
    {
        cout << id[i] << "\t" << name[i] << "\t\t" << salary[i] << endl;
    }

    return 0;
}
