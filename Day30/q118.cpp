// Q118 - Mini Library System

#include <iostream>
using namespace std;

int main()
{
    int n, choice, bookId;
    int id[100];
    string title[100];
    string author[100];
    bool issued[100];

    cout << "========== MINI LIBRARY SYSTEM ==========\n";
    cout << "Enter Number of Books: ";
    cin >> n;
    cin.ignore();

    // Add Books
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> id[i];
        cin.ignore();

        cout << "Book Title: ";
        getline(cin, title[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);

        issued[i] = false;
    }

    do
    {
        cout << "\n========== LIBRARY MENU ==========\n";
        cout << "1. Display Books\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";

            for (int i = 0; i < n; i++)
            {
                cout << id[i] << "\t"
                     << title[i] << "\t\t"
                     << author[i] << "\t\t";

                if (issued[i])
                    cout << "Issued";
                else
                    cout << "Available";

                cout << endl;
            }
            break;

        case 2:
        {
            cout << "Enter Book ID to Issue: ";
            cin >> bookId;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == bookId)
                {
                    found = true;

                    if (!issued[i])
                    {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    }
                    else
                    {
                        cout << "Book is Already Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 3:
        {
            cout << "Enter Book ID to Return: ";
            cin >> bookId;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == bookId)
                {
                    found = true;

                    if (issued[i])
                    {
                        issued[i] = false;
                        cout << "Book Returned Successfully!\n";
                    }
                    else
                    {
                        cout << "Book was Not Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

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