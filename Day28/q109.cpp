// Q109 - Library Management System

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "========== Library Management System ==========\n";
    cout << "Enter Number of Books: ";
    cin >> n;

    int bookId[100];
    string bookName[100];
    string author[100];

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookId[i];
        cin.ignore();

        cout << "Book Name: ";
        getline(cin, bookName[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);
    }

    cout << "\n========== BOOK RECORD ==========\n";

    cout << "ID\tBook Name\t\tAuthor\n";

    for (int i = 0; i < n; i++)
    {
        cout << bookId[i] << "\t"
             << bookName[i] << "\t\t"
             << author[i] << endl;
    }

    return 0;
}