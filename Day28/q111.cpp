// Q111 - Ticket Booking System
#include <iostream>
using namespace std;

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        cout << "\n========== Ticket Booking System ==========\n";
        cout << "1. Book Ticket\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Number of Seats to Book: ";
            cin >> seats;

            if (seats <= 0)
            {
                cout << "Invalid Number of Seats!\n";
            }
            else if (bookedSeats + seats <= totalSeats)
            {
                bookedSeats += seats;
                cout << "Booking Successful!\n";
                cout << "Booked Seats: " << bookedSeats << endl;
                cout << "Available Seats: " << totalSeats - bookedSeats << endl;
            }
            else
            {
                cout << "Sorry! Only " << totalSeats - bookedSeats
                     << " Seats are Available.\n";
            }
            break;

        case 2:
            cout << "\nTotal Seats     : " << totalSeats << endl;
            cout << "Booked Seats    : " << bookedSeats << endl;
            cout << "Available Seats : " << totalSeats - bookedSeats << endl;
            break;

        case 3:
            cout << "\nThank You for Using Ticket Booking System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}