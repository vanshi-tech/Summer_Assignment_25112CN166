// Q112 - Contact Management System

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "========== Contact Management System ==========\n";
    cout << "Enter Number of Contacts: ";
    cin >> n;

    string name[100];
    string phone[100];

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Contact " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Phone Number: ";
        getline(cin, phone[i]);
    }

    cout << "\n========== CONTACT LIST ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name         : " << name[i] << endl;
        cout << "Phone Number : " << phone[i] << endl;
    }

    return 0;
}