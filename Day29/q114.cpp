// Q114 - Menu Driven Array Operations System

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, value, pos;

    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n========== ARRAY OPERATIONS ==========\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Search Element\n";
        cout << "4. Find Maximum\n";
        cout << "5. Find Minimum\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            cout << "Enter Position (1-" << n + 1 << "): ";
            cin >> pos;

            cout << "Enter Value: ";
            cin >> value;

            if (pos >= 1 && pos <= n + 1)
            {
                for (int i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;

                cout << "Element Inserted Successfully.\n";
            }
            else
            {
                cout << "Invalid Position!\n";
            }
            break;

        case 3:
        {
            cout << "Enter Element to Search: ";
            cin >> value;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout << "Element Found at Position " << i + 1 << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Element Not Found!\n";

            break;
        }

        case 4:
        {
            int max = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }

            cout << "Maximum Element = " << max << endl;
            break;
        }

        case 5:
        {
            int min = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (arr[i] < min)
                    min = arr[i];
            }

            cout << "Minimum Element = " << min << endl;
            break;
        }

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}