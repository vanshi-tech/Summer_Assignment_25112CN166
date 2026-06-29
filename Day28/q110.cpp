// Q110 - Bank Account Management System

#include <iostream>
using namespace std;

int main()
{
    int accountNo, choice;
    string name;
    float balance = 0.0, amount;

    cout << "========== Bank Account System ==========\n";

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully!\n";
                break;

            case 2:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    cout << "Amount Withdrawn Successfully!\n";
                }
                else
                {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 3:
                cout << "\nAccount Number : " << accountNo << endl;
                cout << "Account Holder : " << name << endl;
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 4:
                cout << "\nThank You for Banking With Us!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);
return 0;
}