// Q107 - Salary Management System

#include <iostream>
using namespace std;

int main()
{
    int empId;
    string empName;
    float basicSalary, hra, da, grossSalary;

    cout << "========== Salary Management System ==========\n";

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    // HRA = 20% of Basic Salary
    hra = basicSalary * 0.20;

    // DA = 10% of Basic Salary
    da = basicSalary * 0.10;

    grossSalary = basicSalary + hra + da;

    cout << "\n========== Salary Details ==========\n";
    cout << "Employee ID      : " << empId << endl;
    cout << "Employee Name    : " << empName << endl;
    cout << "Basic Salary     : Rs. " << basicSalary << endl;
    cout << "HRA (20%)        : Rs. " << hra << endl;
    cout << "DA (10%)         : Rs. " << da << endl;
    cout << "Gross Salary     : Rs. " << grossSalary << endl;

    return 0;
}