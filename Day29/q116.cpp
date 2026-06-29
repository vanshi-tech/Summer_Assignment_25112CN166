// Q116 - Inventory Management System

#include <iostream>
using namespace std;

int main()
{
    int n, choice, searchId;
    int productId[100], quantity[100];
    string productName[100];
    float price[100];

    cout << "========== Inventory Management System ==========\n";
    cout << "Enter Number of Products: ";
    cin >> n;

    cin.ignore();

    // Input Product Details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Product " << i + 1 << endl;

        cout << "Product ID: ";
        cin >> productId[i];
        cin.ignore();

        cout << "Product Name: ";
        getline(cin, productName[i]);

        cout << "Price: ";
        cin >> price[i];

        cout << "Quantity: ";
        cin >> quantity[i];
        cin.ignore();
    }

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Display Products\n";
        cout << "2. Search Product by ID\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n========== PRODUCT LIST ==========\n";
            cout << "ID\tName\t\tPrice\tQuantity\n";

            for (int i = 0; i < n; i++)
            {
                cout << productId[i] << "\t"
                     << productName[i] << "\t\t"
                     << price[i] << "\t"
                     << quantity[i] << endl;
            }
            break;

        case 2:
        {
            bool found = false;

            cout << "Enter Product ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (productId[i] == searchId)
                {
                    cout << "\nProduct Found!\n";
                    cout << "Product Name : " << productName[i] << endl;
                    cout << "Price        : " << price[i] << endl;
                    cout << "Quantity     : " << quantity[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Product Not Found!\n";
            }

            break;
        }

        case 3:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
5}