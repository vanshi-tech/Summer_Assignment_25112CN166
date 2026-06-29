// Q106 - Check Whether Two Strings are Equal

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1 == str2)
        cout << "Strings are Equal";
    else
        cout << "Strings are Not Equal";

    return 0;
}