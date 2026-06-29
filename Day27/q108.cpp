// Q108 - Marksheet Generation System

#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float english, maths, science, computer, hindi;
    float total, percentage;
    char grade;

    cout << "========== Marksheet Generation System ==========\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks in English: ";
    cin >> english;

    cout << "Enter Marks in Maths: ";
    cin >> maths;

    cout << "Enter Marks in Science: ";
    cin >> science;

    cout << "Enter Marks in Computer: ";
    cin >> computer;

    cout << "Enter Marks in Hindi: ";
    cin >> hindi;

    total = english + maths + science + computer + hindi;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n========== STUDENT MARKSHEET ==========\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;
    cout << "Total      : " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    if (grade == 'F')
        cout << "Result     : FAIL" << endl;
    else
        cout << "Result     : PASS" << endl;

    return 0;
}