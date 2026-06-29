// Q102 - Compare Two Strings

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "Strings are Not Equal";
        return 0;
    }

    bool equal = true;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "Strings are Equal";
    else
        cout << "Strings are Not Equal";

    return 0;
}