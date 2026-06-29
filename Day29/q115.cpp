// Q115 - Menu Driven String Operations System

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str, temp;
    int choice;

    cout << "Enter a String: ";
    getline(cin, str);

    do
    {
        cout << "\n========== STRING OPERATIONS ==========\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Check Palindrome\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Length = " << str.length() << endl;
            break;

        case 2:
            temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String = " << temp << endl;
            break;

        case 3:
        {
            temp = str;
            reverse(temp.begin(), temp.end());

            if (str == temp)
                cout << "Palindrome String" << endl;
            else
                cout << "Not a Palindrome String" << endl;
            break;
        }

        case 4:
            temp = str;
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                    temp[i] = temp[i] - 32;
            }
            cout << "Uppercase String = " << temp << endl;
            break;

        case 5:
            temp = str;
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] >= 'A' && temp[i] <= 'Z')
                    temp[i] = temp[i] + 32;
            }
            cout << "Lowercase String = " << temp << endl;
            break;

        case 6:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}