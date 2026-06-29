// Q103 - ATM Simulation

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 10000.0, amount;

    do
    {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nCurrent Balance = Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Amount Deposited Successfully.\n";
                cout << "Updated Balance = Rs. " << balance << endl;
            }
            else
            {
                cout << "Invalid Amount!\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance && amount > 0)
            {
                balance -= amount;
                cout << "Please collect your cash.\n";
                cout << "Remaining Balance = Rs. " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance or Invalid Amount!\n";
            }
            break;

        case 4:
            cout << "\nThank You for Using Our ATM!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}